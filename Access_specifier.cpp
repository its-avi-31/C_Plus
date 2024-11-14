#include<iostream>
#include<conio.h>
using namespace std;
class Demo{
    private: int a;
    public: int b;
    void show(){
        cout<<"Enter value of a: ";
        cin>>a;
        cout<<"Enter value of b: ";
        cin>>b;
        cout<<"Value of a = "<<a<<endl;
        cout<<"Value of b = "<<b<<endl;
    }
};
int main(){
    Demo d;
    d.show();
    cout<<"Value of b outside = "<<d.b<<endl;
    cout<<"Value of a outside = "<<d.a;
    return 0;
}