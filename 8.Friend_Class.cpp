#include<iostream>
using namespace std;
class Complex;
class Calculator{
public:
    int add(int a,int b){
        return (a+b);
    }
    int sumRealComplex(Complex o1,Complex o2);
    int sumCompComplex(Complex o1,Complex o2);
};
class Complex{
    int a,b;
    friend class Calculator;
public:
    void setNumber(int n1,int n2){
        a=n1;
        b=n2;
    }
    void printNumber(){
        cout<<"YOUR NUMBER IS "<<a<<" + "<<b<<"i"<<endl;
    }
};
int Calculator::sumRealComplex(Complex o1,Complex o2){
    return (o1.a+o2.a);
}
int Calculator::sumCompComplex(Complex o1,Complex o2){
    return (o1.b+o2.b);
}
int main(){
Complex o1,o2;
Calculator calc;
o1.setNumber(1,4);
o2.setNumber(5,7);
int res=calc.sumRealComplex(o1,o2);
cout<<"THE SUM OF REAL PART OF o1 AND o2 IS : "<<res<<endl;
int resc=calc.sumCompComplex(o1,o2);
cout<<"THE SUM OF IMAGINARY PART OF o1 AND o2 IS : "<<resc<<endl;
return 0;
}