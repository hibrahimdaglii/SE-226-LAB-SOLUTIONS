#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    string id;

    cout << "What is your name?" << endl;
    cin >> name;
    cout << "Hello " << name << "." << endl;

    cout << "What is your Student ID?" << endl;
    cin >> id;
    cout << "Your ID is " << id << "." << endl;


    float var1, var2;

    std::cout << "Enter the value of var1:\n";
    std::cin >> var1;

    std::cout << "Enter the value of var2:\n";
    std::cin >> var2;

    float sum = var1 + var2;
    float diff = var1 - var2;
    float prod = var1 * var2;

    std::cout << "var1: " << var1 << std::endl;
    std::cout << "var2: " << var2 << std::endl;
    std::cout << "sum: " << sum << std::endl;
    std::cout << "diff: " << diff << std::endl;
    std::cout << "prod: " << prod << std::endl;


    double lab_grade, midterm_grade, final_grade;
    double last_score;

    cout << "Enter the student's name: ";
    getline(cin, name);

    cout << "Enter the lab grade (out of 100): ";
    cin >> lab_grade;
    cout << "Enter the midterm grade (out of 100): ";
    cin >> midterm_grade;
    cout << "Enter the final grade (out of 100): ";
    cin >> final_grade;

    last_score = 0.25 * lab_grade + 0.35 * midterm_grade + 0.4 * final_grade;

    cout << "Name: " << name << endl;
    cout << "Lab: " << lab_grade << endl;
    cout << "Midterm: " << midterm_grade << endl;
    cout << "Final: " << final_grade << endl;
    cout << "Last Score: " << last_score << endl;

    cout << "\n* \n** \n* \n*"<<endl;


    return 0;
}
