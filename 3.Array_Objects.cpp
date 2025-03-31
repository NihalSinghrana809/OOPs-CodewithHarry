#include<iostream>
using namespace std;
class shop{
    int itemID[100];
    int itemPrice[100];
    int counter;
public:
    void initCounter(void){
        counter=0;
    }
    void getPrice(void);
    void setPrice(void);
    void displayPrice(void);
};
void shop::setPrice(void){
    cout<<"ENTER THE ID OF YOUR ITEM NO : "<<counter+1<<endl;
    cin>>itemID[counter];
    cout<<"ENTER PRICE OF YOUR ITEM :"<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void shop::displayPrice(void){
    for(int i=0;i<counter;i++){
        cout<<"THE PRICE OF ITEM WITH ID :"<<itemID[i]<<" IS "<<itemPrice[i]<<endl;
    }
}
int main(){
int n;
cout<<"ENTER HOW MANY ITEMS YOU WANT IN YOUR LIST :"<<endl;
cin>>n;
shop dukan;
dukan.initCounter();
for(int i=1;i<=n;i++){
    dukan.setPrice();
}
dukan.displayPrice();
return 0;
}