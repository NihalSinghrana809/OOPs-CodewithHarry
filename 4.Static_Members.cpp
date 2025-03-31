#include<iostream>
using namespace std;
class Employee{
public:
    int id;
    static int count;
    void setData(void){
        cout<<"ENTER THE ID :"<<endl;
        cin>>id;
        count++;
    }
    void getData(void){
        cout<<endl<<"ID OF EMPLOYEE IS : "<<id<<" THIS IS EMPLOYEE NUMBER "<<count<<endl;
    }
    static void getCount(void){
        cout<<count<<endl;
    }
};
int Employee::count;
int main(){
Employee Nihal,Harry,Om;
Nihal.setData();
Nihal.getData();
Employee::getCount();
Om.setData();
Om.getData();
Employee::getCount();
Harry.setData();
Harry.getData();
Employee::getCount();
return 0;
}