#include "bubble_sort.h"

/*why count is needed?*/
/*Because array is passed as a pointer through value parameter*/
void bubble_sort(int a[], int count)
{
    for (int i = 0; i < count-1; i++)
    {
        for (int j = 0; j < count-1-i; j++)
        {
            if (a[j] > a[j+1])
            {
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
        printf("after round %d: ",i +1);
        print_array(a, count);
    }
}

void bubble_sort_improve(int a[], int count)
{
    bool swapped;
    int i = 1;
    int num = count;
    do
    {
        swapped = false;
        for (int j = 0; j < num-1; j++)
        {
            if (a[j] > a[j+1])
            {
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
                swapped = true;//if swap happens, next round is needed.
            }
        }
        num--;
        printf("improved after round %d: ",i++);
        print_array(a, count);
    } while (swapped == true);
}

void print_array(int a[], int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}