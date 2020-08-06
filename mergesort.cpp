#include <iostream>
using namespace std;

void merge(int *a, int l, int m, int h)
{
    int n1 = m - l + 1;
    int n2 = h - m;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = a[l+i];
    for (int j = 0; j < n2; j++)
        R[j] = a[m+1+j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] < R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    while (i<n1)
    {
        a[k] = L[i];
        i++;
        k++;
    }

    while (j<n2)
    {
        a[k] = R[j];
        j++;
        k++;
    }


}

void mergesort(int *a, int l, int h)
{
    if (l < h)
    {
        int mid = (l + h)/2;
        mergesort(a, l, mid);
        mergesort(a, mid+1, h);

        merge(a, l, mid, h);
    }
}

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    mergesort(a, 0, n-1);

    for (int i = 0; i < n; i++)
        cout << a[i]<<" ";

    delete[] a;

}