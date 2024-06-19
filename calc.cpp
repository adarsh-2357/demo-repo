#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2;
    cout << "Enter the numbers to be operated on: \n";
    cin >> num1 >> num2;
    char op;
    cout<<"Enter the operation: (+,-,*,/,%,^)\n";
    cin >> op;
    int ans;
    switch (op)
    {
    case '+':
        ans=num1+num2;
        break;
    case '-':
        ans=num1-num2;
        break;
    case '*':
        ans=num1*num2;
        break;
    case '/':
        if(num2==0) {
            cout << "Division by Zero error\n";
            return 0;
        }
        else ans=num1/num2;
        break;
    case '%':
        ans=num1%num2;
        break;
    case '^':
        ans = pow(num1,num2);
        break;
    
    default:
        cout << "Invalid Input!!!\n";
        break;
    }
    cout << "Answer: "<< ans<< endl;
    return 0;
}