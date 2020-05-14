#include "insertion_sort.h"

/*why count is needed?*/
/*Because array is passed as a pointer through value parameter*/
void insertion_sort(int a[], int count)
{
    for (int i = 1; i < count; i++)//the first element needn't change
    {
        int tmp = a[i];//a[i] is the element to be inserted
        for (int j = i-1; j >=0 && a[j]>tmp; j--)
        {
                a[j+1] = a[j];//make the place for a[i]
                a[j] = tmp;
        }
        printf("after round %d: ",i);
        print_array(a, count);
    }
}

void print_array(int a[], int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}