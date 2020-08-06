#include <iostream>
using namespace std;

int partition(int *a, int l, int h)
{
    int pivot = a[l];
    int i = l, j = h;

    while (i < j)
    {
        do
        {
            i++;
        } while (a[i]<=pivot);

        do
        {
            j--;
        } while (a[j]>pivot);

        if (i<j)
            swap(a[i], a[j]);
    }
    swap(a[l], a[j]);
    return j;

}

void quicksort(int *a, int l, int h)
{
    if (l < h)
    {
        int j = partition(a, l, h);
        quicksort(a, l, j);
        quicksort(a, j+1, h);
    }
}


int main()
{
    int n;
    cin >> n;
    int *a = new int[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    quicksort(a, 0, n);

    for (int i = 0; i < n; i++)
        cout << a[i]<<" ";

    delete[] a;

}