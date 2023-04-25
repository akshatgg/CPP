#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person{ 
    public:
    string name;
    int age;
   void getdata(){};
   void putdata(){};
};
class Professor: public Person
{
    int id=1;
    int  publications;
    
virtual void getdata(){
cin>>name>>age>>publications;
}
virtual void putdata(){
    cout<<name<<" "<<age<<" "<<publications<<" "<<id<<endl;
}
};

class Student: public Person
{
    int id=2;
    int m1,m2,m3,m4,m5,m6;
    void getdata(){
        cin>>name>>age>>m1>>m2>>m3>>m4>>m5>>m6;
    }
    void putdata(){
        int sum=0;
        sum=m1+m2+m3+m4+m5+m6;
        
        cout<<name<<" "<<age<<" "<<sum<<" "<<id<<endl;
    }
};
int main()
{

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
                                                                            