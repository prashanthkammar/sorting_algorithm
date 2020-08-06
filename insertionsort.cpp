#include<iostream>
using namespace std;

void insertion(int *a, int n)
{
    for (int i = 1; i < n; i++)
    {
        int val = a[i];
        int j = i;

        while (j > 0 && a[j-1] > val)
        {
            a[j] = a[j-1];
            j--;
        }
        a[j] = val;
    }
}

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    insertion(a, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    delete[] a;
}