from abc import ABC, abstractmethod

class FrequencyCounter(ABC):
    address = ""

    def __init__(self, address):
        self.address = address

    @abstractmethod
    def calculateFreqs(self):
        pass


class ListCount(FrequencyCounter):
    def calculateFreqs(self):
        frequencies = {}
        with open(self.address, 'r') as file:
            text = file.read().lower()
            letters = [letter for letter in text if letter.isalpha()]
            for letter in letters:
                if letter in frequencies:
                    frequencies[letter] += 1
                else:
                    frequencies[letter] = 1
        for letter, frequency in frequencies.items():
            print(f"Letter -> {letter}\tFrequency -> {frequency}")


class DictCount(FrequencyCounter):
    def calculateFreqs(self):
        frequencies = {}
        with open(self.address, 'r') as file:
            text = file.read().lower()
            letters = [letter for letter in text if letter.isalpha()]
            for letter in letters:
                if letter in frequencies:
                    frequencies[letter] += 1
                else:
                    frequencies[letter] = 1
        print(frequencies)


# Testing the script
if __name__ == "__main__":


    list_counter = ListCount("weirdWords.txt")
    print("List Count:")
    list_counter.calculateFreqs()

    dict_counter = DictCount("weirdWords.txt")
    print("Dictionary Count:")
    dict_counter.calculateFreqs()
