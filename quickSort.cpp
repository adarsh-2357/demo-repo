#include<bits/stdc++.h>
using namespace std;
int partitionIndex(vector<int> &arr,int low,int high){
    int pivot = arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot&&i<high){
            i++;
        }
        while(arr[j]>pivot&&j>low){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
void qS(vector <int> &arr,int low,int high){
    if(low<high){
        int pIndex = partitionIndex(arr,low,high);
        qS(arr,low,pIndex-1);
        qS(arr,pIndex+1,high);
    }
}
int main(){
    vector<int> arr;
    int n,element;
    cout <<"Enter number of array elements: \n";
    cin>>n;
    cout<<"Enter the array elements:\n";
    for(int i=0;i<n;i++){
        cin>> element;
        arr.push_back(element);
    }
    int high = arr.size();
    qS(arr,0,high-1);
    cout << "Sorted Array: \n";
    for(int i=0;i<high;i++){
        cout << arr[i] << "\t";
    }
}