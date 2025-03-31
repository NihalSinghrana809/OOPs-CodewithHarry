#include<iostream>
using namespace std;
class Employee{
    int id;
    int salary;
public:
    void setId(void){
        salary=50000;
        cout<<"ENTER THE ID OF EMPLOYEE IS :"<<endl;
        cin>>id;
    }
    void getId(void){
        cout<<"ID OF THIS EMPLOYEE IS : "<<id<<endl;
    }            
};
int main(){
Employee Google[4];
for(int i=0;i<4;i++){
    Google[i].setId();
    Google[i].getId();
}
return 0;
}