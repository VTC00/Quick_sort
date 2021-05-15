//todo: Thuật toán quicksort

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Qsort.h>

// void Display (int *a, int size)
// {
//     for (int i = 0; i < size; ++i)
//     {
//         printf ("%3d", a[i]);
//     }
//     printf ("\n");
// }


void Exchange(int *a, int b, int c)
{
    int temp;
    temp = a[b];
    a[b] = a[c];
    a[c] = temp;
}

int Partition(int a[], int l, int r)
{
    int pivot = a[r];
    int i = p - 1;
    int j;
    for (j = l; j < r; ++j)
    {
        if (a[j] <= pivot)
        {
            ++i;
            Exchange(a,i,j);
        }
    }
    return i+1;
}

void Sort_2part(int *a, int l, int r)
{
    if (p < r)
    {
        printf ("before partition : \n");
        print (a, l, r);
        int q = partition(a, l, r);
        printf ("after partition : \n");
        printf ("pivot index %d\n", q);
        print(a, l, r);
        
        quick_sort(a, l, q - 1);
        quick_sort(a, q + 1, r);
    }                           
    return;
}

int main()
{
    int a[] = {2, 8, 7, 1, 3, 5, 6, 4};
    int n = sizeof(a) / sizeof(a[0]);
    quick_sort(a, 0, n - 1);
    print(a, 0, n - 1);
    return 0;
}
