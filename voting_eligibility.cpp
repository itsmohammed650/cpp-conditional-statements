#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18 && age < 35) {
        cout << "You can vote but cannot contest for elections." << endl;
    }
    else if (age >= 35) {
        cout << "You can vote and you can contest for elections." << endl;
    }
    else if (age > 0 && age < 18) {
        cout << "You are not eligible to vote." << endl;
    }
    else {
        cout << "Invalid input. Please enter a valid age." << endl;
    }

    return 0;
}
