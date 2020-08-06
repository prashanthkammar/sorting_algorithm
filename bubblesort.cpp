#include <iostream>

using namespace std;

void bubble(int *a, int n)
{
    int i, j;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
            if (a[j] > a[j+1])
                swap(a[j], a[j+1]);
    }
}

int main()
{
    int n, i;
    int *a = new int[n];
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];

    bubble(a, n);

    for (i = 0; i < n; i++)
        cout << a[i] << " ";

    delete[] a;
    for (i = 0; i < n; i++)
    {

        cout << a[i];
    }
}