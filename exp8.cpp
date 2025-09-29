#include <iostream>
#include <map>
using namespace std;

int main() {

	map<int,int> studentRecords;
	
	int n;
	cout<<"Enter number of students:";
	cin>>n;
	
	for (int i = 0; i < n;i++) {
		int roll, marks;
		cout<<"Enter roll number:";
		cin>>roll;
		cout<< "Enter marks:";
		cin>>marks;
		studentRecords[roll] = marks;
		
	}
	
	cout<< "\nStudent Records:\n";
	cout<< "Roll Number\tMarks\n";
	for (auto it : studentRecords) {
		cout << it.first << "\t\t"<< it.second <<endl;
		}
		
		int searchRoll;
		cout<< "\nEnter roll number to search marks: ";
		cin >>searchRoll;
		
		auto it =
	studentRecords.find(searchRoll);
		if (it !=studentRecords.end()) {
			cout<< "Marks of Roll Number "<< searchRoll<<" = "<< it->second <<endl;
				}else {
					cout<< "Roll Number not found!" << endl;
					}
					
					return 0;
					}
