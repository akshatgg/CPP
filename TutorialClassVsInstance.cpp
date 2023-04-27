#include <iostream>
using namespace std;

class Person{
    public:
        int age;
        int age1;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        // Add some more code to run some checks on initialAge
      this->age1=initialAge;
    }

    void Person::amIOld(){
        // Do some computations in here and print out the correct statement to the console 
            
            if(this->age1<0){
                this->age1=0;
                cout<<"Age is not valid, setting age to 0."<<endl<<"You are young."<<endl;
            }
            else if(this->age1<13){
                cout<<"You are young."<<endl;
            }
            else if(13<=this->age1 && this->age1<18){
                cout<<"You are a teenager. "<<endl;
            }
            else if (this->age1>=18)
            {
                cout<<"You are old."<<endl;
            }
            
    }

    void Person::yearPasses(){
        // Increment the age of the person in here
      this->age1++;
    }

int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();

        for(int j=0; j < 3; j++) {
        	p.yearPasses(); 
        }
        p.amIOld();
      
		cout << '\n';
    }

    return 0;
}