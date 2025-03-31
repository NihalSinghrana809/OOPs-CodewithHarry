#include<iostream>
using namespace std;
class Employee{
private:
    int a,b,c;
public:
    int d,e;
    void setData(int a,int b,int c);
    void getData(){
        cout<<"THE VALUE OF a is :"<<a<<endl;
        cout<<"THE VALUE OF b is :"<<b<<endl;
        cout<<"THE VALUE OF c is :"<<c<<endl;
        cout<<"THE VALUE OF d is :"<<d<<endl;
        cout<<"THE VALUE OF e is :"<<e<<endl;
    }
};
void Employee::setData(int a1,int b1,int c1){
a=a1;
b=b1;
c=c1;
}
int main(){
Employee Nihal;
Nihal.setData(1,2,3);
Nihal.d=4;
Nihal.e=5;
Nihal.getData();
return 0;
}