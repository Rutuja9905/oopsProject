#include<iostream>
using namespace std;

class Rectangle{
private:
	int length;
	int width;
	
public:
	Rectangle(){
		length = 1;
		width = 1;
	}
	
	Rectangle(int l, int w){
		length = l;
		width = w;
	}
	
	void displayAreaOfRectangle(int length,int width){
		cout<<"\nThe area of rectangle is :"<<length*width;
	}
};

int main(){
	int l,w;
	cout<<"\nEnter the values of length and width :: "<<endl;
	cin>>l>>w;
	
	cout<<"\nThe value of length is "<<l;
	cout<<"\nThe value of width is "<<w;
	
	Rectangle r1;
	r1.displayAreaOfRectangle(1,1);
	
	Rectangle r2;
	r2.displayAreaOfRectangle(l,w);
	
	return 0;
}
