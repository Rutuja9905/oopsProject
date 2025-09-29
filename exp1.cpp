#include <iostream>
using namespace std;

// Base Class 1: Person
class Person {
protected:
    string name;
    int age;
public:
    void inputPerson(string n int a) {
     name=n;
     age=a;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Base Class 2: Academic
class Academic {
protected:
    int rollNo;
    float marks[3];
public:
    void inputAcademic() {
        cout << "Enter roll number: ";
        cin >> rollNo;
        for (int i = 0; i < 3; i++) {
            cout << "Enter marks for subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void displayAcademic() {
        cout << "Roll Number: " << rollNo << endl;
        for (int i = 0; i < 3; i++) {
            cout << "Marks of Subject " << i + 1 << ": " << marks[i] << endl;
        }
    }
};

// Derived Class: Student
class Student : public Person, public Academic {
private:
    float total, percentage;
public:
    void calculate() {
        total = 0;
        for (int i = 0; i < 3; i++) {
            total += marks[i];
        }
        percentage = total / 3;
    }

    void displayStudent() {
        displayPerson();
        displayAcademic();
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    Student s;

    cin.ignore(); // to consume the newline character left after previous input
    s.inputPerson();
    s.inputAcademic();
    s.calculate();
    s.displayStudent();
    
    return 0;
   }
