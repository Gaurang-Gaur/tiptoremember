// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
struct people{
    int age;
    string name;
    // this default constructor there and i can also change it
    people(){
        age=0;
        name="";
    }
};

people *p=new people; // *p value at heap memory address



p->age=5;

p->name="gaurang";
cout<<p->name;
    return 0;
}