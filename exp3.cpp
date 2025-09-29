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
