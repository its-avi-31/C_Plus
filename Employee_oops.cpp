// Creating a employee class and print salary of object, Avi -->

#include<iostream>
#include<conio.h>
using namespace std;
class Employee{
    public: int salary;
    void sal(){
        cout<<"Enter Salary: ";
        cin>>salary;
        cout<<"Salary is = "<<salary;
    }
};
int main(){
    Employee Avi;
    Avi.sal();
}
