#include <iostream>
using namespace std;

void selection(int *a, int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int min_pos = i;
        for (int j = i+1; j < n; j++)
        {
            if (a[j] < a[min_pos])
                min_pos = j;
        }
        swap(a[i], a[min_pos]);
    }
}

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    selection(a, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    delete[] a;
}