#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n + 1; i++)
    {
        // printing white spaces
        for (int k = n - i + 1; k >= 1; k--)
        {
            cout << "  ";
        }
        if (i == 1)
            cout << 0 << endl;
        else
        {
            cout << 0;
            for (int j = 1; j < i; j++)
            {
                cout << " " << j;
            }
            for (int j = i - 2; j >= 1; j--)
            {
                cout << " " << j;
            }
            cout << " " << 0 << endl;
        }
    }
    // printing the bottom rows
    for (int i = n; i >= 1; i--)
    {
        for (int k = n - i + 1; k >= 1; k--)
        {
            cout << "  ";
        }
        if (i == 1)
            cout << 0;
        else
        {
            cout << 0;
            for (int j = 1; j < i; j++)
            {
                cout << " " << j;
            }
            for (int j = i - 2; j > 0; j--)
            {
                cout << " " << j;
            }
            cout << " " << 0<<endl;
        }
    }
    return 0;
}