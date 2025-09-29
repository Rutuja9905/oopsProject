include<iostream>
using namespace std;

class Person
{
private:
	string name;
	int age;
public:
	void getPersonDetails()
	{
	cout<<"Enter the Name:";
	getline(cin,name);
	cout<<"Enter the age:";
	cin>>age;
	}
	void showPersonDetails()
	{
	cout<<"Name:"<<name<<"\nAge:"<<age<<endl;
	}
};

class Academic
{
protected:
	int rollnumber;
	int marks[3];
public:
	void getAcademicDetails()
	{
	cout<<"Enter the Roll Number:";
	cin>>rollnumber;
	for(int i=0;i<3;i++)
	{
	cout<<"Enter the marks for Subject"<<(i+1)<<":";
	cin>>marks[i];
	}
}
	void showAcademicDetails()
	{
	cout<<"Roll Number"<<rollnumber<<endl;
	for(int i=0;i<3;i++)
	{
	cout<<"Marks in Subject"<<(i+1)<<":"<<marks[i]<<endl;
	}
	}
};

class Student:public Person,public Academic
{
private:
	int totalmarks;
	float percentage;
public:
	void calculateResult()
	{
	totalmarks=marks[0]+marks[1]+marks[2];
	percentage=totalmarks/3.0;
	}
	void displayResult()
	{
	showPersonDetails();
	showAcademicDetails();
	cout<<"Total Marks:"<<totalmarks<<"\nPercentage:"<<percentage<<"%"<<endl;
	}
};

int main()
{
Student s1;
s1.getPersonDetails();
s1.getAcademicDetails();
s1.calculateResult();
s1.displayResult();
return 0;
}
