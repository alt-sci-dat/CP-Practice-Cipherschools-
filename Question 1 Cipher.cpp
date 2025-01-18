#include <bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    int rollNumber;
    float marks[3];
};

int main() {
    Student* studentPtr = new Student;

    cout << "Enter student name: ";
    getline(cin, studentPtr->name);
    cout << "Enter roll number: ";
    cin >> studentPtr->rollNumber;
    cout << "Enter marks in 3 subjects: ";
    for (int i = 0; i < 3; i++) {
        cin >> studentPtr->marks[i];
    }

    float avg = (studentPtr->marks[0] + studentPtr->marks[1] + studentPtr->marks[2]) / 3;
    
    cout << "\nStudent Details:\n";
    cout << "Name: " << studentPtr->name << endl;
    cout << "Roll Number: " << studentPtr->rollNumber << endl;
    cout << "Marks: " << studentPtr->marks[0] << ", " << studentPtr->marks[1] << ", " << studentPtr->marks[2] << endl;
    cout << "Average Marks: " << avg << endl;
    
    delete studentPtr;

    return 0;
}