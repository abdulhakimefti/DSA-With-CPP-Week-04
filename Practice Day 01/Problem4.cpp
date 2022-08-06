#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n/2;j++){
            int temp = arr[i][j];
            arr[i][j]=arr[i][n-1-i];
            arr[i][j-1-i]==temp;
        }
    }
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}