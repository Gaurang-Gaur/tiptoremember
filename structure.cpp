// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
struct people{
    int age;
    string name;
    // this default constructor there and i can also change it
    // people(){
    //     age=0;
    //     name="";
    // }
};

// people *p=new people; // *p value at heap memory address
people *p=new people({343,"gauri"});

// Note you can initialise the constructor and use above syntax at same type because both are doing the 
// same task have it did constructor overloading 

// p->age=5;

p->name="gaurang";
cout<<p->name<<" "<<p->age;
    return 0;
}