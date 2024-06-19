#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr;
    int n,element;
    cout<<"Enter number of array elements you wnat to insert\n";
    cin>>n;
    cout<<"Enter the array elements: \n";
    for(int i=0;i<n;i++){
        cin>> element;
        arr.push_back(element);
    }
    vector<int> arr1,arr2;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            arr1.push_back(arr[i]);
        }
        else{
            arr2.push_back(arr[i]);
        }
    }
    cout << "array of even elements: \n";
    for(int j=0;j<arr1.size();j++){
        cout << arr1[j]<<"\t";
    }
    cout << endl;
    cout << "Array of odd elements:\n";
    for(int j=0;j<arr2.size();j++){
        cout << arr2[j]<< "\t";
    }
    cout << endl;
    return 0;

}