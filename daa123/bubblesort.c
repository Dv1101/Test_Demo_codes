//WAP to compare adjacent element and sort 100 element.
#include <stdio.h>

void swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubbleSort(int a[], int n)
{
    for (int i=0; i<n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (a[j]>a[j + 1]) {
                swap(&a[j], &a[j+1]);
            }
        }
    }

printf("\n\n Sorted list in ascending order:\n");
    for (int c=0; c<n; c++)
    {
        printf("%d ,", a[c]);
    }
}

int main()
{
    int n = 99;
    int a[100];

    for (int i=0; i<n; i++) 
    {
        int no = rand() % n + 1;
        a[i] = no;
    }
    printf("\n\nThe 100 numbers generated array is : \n");
    
    for(int i=0; i<n; i++)
    {
        printf(", %d", a[i]);
    }
    bubbleSort(a, n);
}