#include<bits/stdc++.h>
using namespace std;
bool stringEquality( string str1, string str2){
    return str1==str2;
}
int main(){
    string str1,str2;
    cout << "Enter the two strings to be compared\n";
    cin >> str1>>str2;
    if(stringEquality(str1,str2)) cout << "Strings are Equal!!\n";
    else cout << "Strings are Unequal!!\n";

}