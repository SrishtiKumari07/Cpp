#include<iostream>
using namespace std;

int add(int num1,int num2){
    int sum=num1+num2;
    return sum;
}

int add(int num1,int num2,int num3){
    int sum=num1+num2+num3;
    return sum;
}

float add(float num1,float num2){
    float sum=num1+num2;
    return sum;
}

int main (){
    int a=2;
    int b=4;
    int c=3;

    float d=2.4;
    float e=7.3;

    cout<<add(e,d)<<endl;
    cout<<add(a,b,c)<<endl;
    return 0;
}