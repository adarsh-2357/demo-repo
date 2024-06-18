#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cout << "Enter Number of rows!\n";
    cin>> row;
    cout << "Enter Number of coloumns!\n";
    cin>> col;
    int arr[row][col];
    cout << "Enter the elements\n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout << "Enter the elements of row "<< i<<" and coloumn "<< j << " :\n";
            cin >> arr[i][j];
        }
    }
    cout << "----2D ARRAY IN MATRIX FORM----\n";
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout << arr[i][j]<< " ";
        }
        cout << endl;
    }
}
