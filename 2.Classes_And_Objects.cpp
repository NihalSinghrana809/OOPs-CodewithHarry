#include<iostream>
#include<string>
using namespace std;
class binary{
string s;
public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};
void binary::read(void){
    cout<<"ENTER THE BINARY NUMBER :"<<endl;
    cin>>s;
}
void binary::chk_bin(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"INCORRECT BINARY FORMAT :"<<endl;
            exit(0);
        }
    }
}
void binary::ones_compliment(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='1'){
            s.at(i)='0';
        }
        else{
            s.at(i)='1';
        }
    }
}
void binary::display(void){
    cout<<endl<<"YOUR BINARY NUMBER IS :"<<endl;
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
    }
}
int main(){
binary b;
b.read();
b.chk_bin();
b.display();
b.ones_compliment();
b.display();
return 0;
}