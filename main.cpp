#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    string citizenship;


    cout << "Enter your age: ";
    cin >> age;
    cout << "Are you a citizen of the country? (yes/no): ";
    cin >> citizenship;


    if (age >= 18 && (citizenship == "yes" || citizenship == "Yes")) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are not eligible to vote." << endl;
    }

    return 0;
}
