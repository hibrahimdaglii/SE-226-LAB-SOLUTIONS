def common_elements(list1, list2):
    return list(set(list1) & set(list2))

list1 = [1, 2, 3, 4, 5]
list2 = [3, 4, 5, 6, 7]
result = common_elements(list1, list2)
print(result)

def palindrome_words():
    string_list = input("\nEnter the list of strings separated by space: ").split()
    palindromes = [string for string in string_list if string == string[::-1]]
    return palindromes

def prime_numbers():
    num_list = list(map(int, input("\nEnter the list of integers separated by space: ").split()))
    primes = []
    is_prime = [True] * (max(num_list) + 1)
    is_prime[0] = is_prime[1] = False
    for i in range(2, int(max(num_list) ** 0.5) + 1):
        if is_prime[i]:
            for j in range(i * i, max(num_list) + 1, i):
                is_prime[j] = False
    for num in num_list:
        if is_prime[num]:
            primes.append(num)
    return primes


def anagrams(word, word_list):
    word_sorted = sorted(word.lower().replace(" ", ""))
    anagrams = []
    for w in word_list:
        w_sorted = sorted(w.lower().replace(" ", ""))
        if w_sorted == word_sorted:
            anagrams.append(w)
    return anagrams

word = "listen"
word_list = ["enlists", "google", "inlets", "banana"]
anagrams_list = anagrams(word, word_list)
print(anagrams_list)
