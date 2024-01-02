#include<iostream>

using namespace std;

int main(){
    int num1,num2;
    char op;
    cin >> num1;
    cin>>num2;
    cin>>op;

    if(op=='+'){
        cout<< num1+num2;
    }
    if(op=='-'){
        cout<< num1-num2;
    }
    if(op=='*'){
        cout<< num1*num2;
    }
    if(op=='/'){
        cout<< num1/num2;
    }

}
