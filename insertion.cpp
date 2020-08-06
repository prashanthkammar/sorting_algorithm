#include <iostream>
using namespace std; 

void insertion(int* a, int n)
{
    int temp, i,j;
    for ( i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;

        while (j >=0 && a[j]>temp )
            {
                a[j+1] = a[j];
                j = j -1;
            }
            a[j+1] = temp;
    }
    
}


int main ()
{
    int n,  i;
    int* a = new int [n];
    cin >> n; 
    for ( i = 0; i < n; i++)
        cin >> a[i];

    insertion(a, n);

    for ( i = 0; i < n; i++)
        cout << a[i] << " ";
}