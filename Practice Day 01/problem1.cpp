#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 && j <= n / 2)
            {
                sum += arr[i][j];
            }
            else if (i <= n - 1 && j == n / 2)
            {
                sum += arr[i][j];
            }
            else if (i == n - 1 && j > n / 2)
            {
                sum += arr[i][j];
            }
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (j <= n / 2 && i == n - 1)
            {
                sum += arr[j][i];
            }
            else if (j == n / 2 && i >= 0)
            {
                sum += arr[j][i];
            }
            else if (j > n / 2 && i == 0)
            {
                sum += arr[j][i];
            }
        }
    }
    sum -= arr[n / 2][n / 2];
    cout << sum << endl;

    return 0;
}