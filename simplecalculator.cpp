#include <iostream>

using namespace std;

int main(){


  int Num1,Num2;
  char op;

  cout<<"Enter your first Number:";
  cin>>Num1;
  cout<<"Enter the operator (+, -, /, *):";
  cin>>op;
  cout<<"Enter your Second Number:";
  cin>>Num2;

  double result;

  if (op=='+'){
    result=Num1+Num2;
  }else if(op=='-'){
    result=Num1- Num2;
  }else if(op=='/'){
    result=Num1/Num2;
  }else if(op=='*'){
    result=Num1*Num2;
  }

  cout<<result;










}
