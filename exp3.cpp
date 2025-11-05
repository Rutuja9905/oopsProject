#include <iostream>
#include <algorithm>
using namespace std;

class student{
public:
     string name; int marks;
     };
int main(){
     int n; cin>>n;
     student s[50];
     for (int i=0; i<n;i++) 
     cin >> s[i].name>> s[i].marks;
     
    sort(s, s+n, [] (student a, student b){return a.name<b.name;});
     cout<<"\nBy Name:\n";
for(int i=0; i<n;i++)cout<< s[i].name<<" "<<s[i].marks<<endl;

    sort(s, s+n,[] (student a, student b){return a.marks>b.marks;});
    cout<<"\nBy marks:\n";
    for(int i=0; i<n;i++)cout<< s[i].name<<" "<<s[i].marks<<endl;

return 0;
}











#include <iostream>
#include <vector>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    // Constructor
    Student(string n, int m) {
        name = n;
        marks = m;
    }

    // Getters
    string getName() const { return name; }
    int getMarks() const { return marks; }

    // Display student info
    void display() const {
        cout << "Name: " << name << ", Marks: " << marks << endl;
    }

    // Static function to sort by name (alphabetical)
    static void sortByName(vector<Student> &students) {
        int n = students.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (students[j].name > students[j + 1].name) {
                    swap(students[j], students[j + 1]);
                }
            }
        }
    }

    // Static function to sort by marks (descending)
    static void sortByMarks(vector<Student> &students) {
        int n = students.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (students[j].marks < students[j + 1].marks) {
                    swap(students[j], students[j + 1]);
                }
            }
        }
    }
};

int main() {
    vector<Student> students = {
        Student("Rutuja", 88),
        Student("Amit", 92),
        Student("Karan", 75),
        Student("Sneha", 89)
    };

    cout << "Original List:\n";
    for (auto &s : students) s.display();

    cout << "\nSorted by Name (Alphabetical Order):\n";
    Student::sortByName(students);
    for (auto &s : students) s.display();

    cout << "\nSorted by Marks (Descending Order):\n";
    Student::sortByMarks(students);
    for (auto &s : students) s.display();

    return 0;
}
