#include<bits/stdc++.h>
using namespace std;
void targetSum(vector <int> arr,int target){
    int n =arr.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout << "The indices of the elements that add up to target is "<< i<<" and "<< j<<"\n";
                return;
            }
        }
        cout << "Any indices in the Given array do not add up to Target!!\n";
        return;
    }
}
int main(){
    vector <int> arr;
    int n,element,target;
    cout <<"Enter thr number of ele\n";
    cin>> n;
    cout << "Enter array elments:\n";
    for(int i=0;i<n;i++){
        cin>>element;
        arr.push_back(element);
    }
    cout << "Enter a Valid Target:\n";
    cin>>target;
    
    targetSum(arr,target);
    return 0;
}
