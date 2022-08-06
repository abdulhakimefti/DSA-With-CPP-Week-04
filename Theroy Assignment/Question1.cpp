#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl
         << endl;
    cout << "Array Before Sorting: ";
    printArray(arr, n);
    cout << endl
         << endl;
    // Bubble Sort
    for (int i = 0, step = 1; i < n - 1; i++)
    {
        cout << "Iteration No : " << i + 1 << endl
             << endl;
        int flag = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
            cout << "Step no. " << step << ": ";
            step++;
            printArray(arr, n);
        }
        if (flag == 0)
            break;
    }
    cout << endl
         << endl;
    cout << "Array After Sorting: ";
    printArray(arr, n);

    return 0;
}