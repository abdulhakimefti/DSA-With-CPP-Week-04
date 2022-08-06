#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
    }
      cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Step 1 : Find the maximum value
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    //Step 2 : Create a count array
    
    int count[max+1];
    for(int i=0;i<=max;i++){
        count[i]=0;
    }
    // Step 3 : Frequency  Calculate
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    // Step 4 : Prefix Sum of count array

    for(int i=1;i<=max;i++){
        count[i]+=count[i-1];
    }
    // Step 5  : Sorting
    int final[n];
    for(int i=n-1;i>=0;i--){
        count[arr[i]]--;
        int k= count[arr[i]];
        final[k]=arr[i];
    }
cout<<"Before Sort: "<<endl;
printArray(arr,n);
cout<<"After Sort: "<<endl;
  printArray(final,n);
    return 0;
}