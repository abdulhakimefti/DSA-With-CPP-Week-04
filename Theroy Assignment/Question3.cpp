#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array Before sorting : ";
    printArray(arr,n);

    // Step:1 Get max value
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    // Step:2  Create a array of max size
    int count[max+1];
    for(int i=0;i<max+1;i++){
        count[i]=0;
    }


    // Step:3 Frequency array
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }

    // Step: 4 prefix sum of fq array
    for(int i=1;i<max+1;i++){
        count[i]+=count[i-1];
    }

    // Step : 5 Sorting
    int final[n];
    for(int i=n-1;i>=0;i--){
   
        count[arr[i]]--;
 
        printArray(count,max+1);
        int k = count[arr[i]];
        final[k]=arr[i];
     
      cout<<"Array After sorting : ";
    printArray(final,n);
    return 0;
}