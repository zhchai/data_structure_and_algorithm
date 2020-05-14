#include "insertion_sort.h"

int main()
{
    int a[10] = {50, 3, 47, 23, 9, 18, 34, 2, 16, 10};
    print_array(a, sizeof(a)/sizeof(int));
    insertion_sort(a, sizeof(a)/sizeof(int));
    print_array(a, sizeof(a)/sizeof(int));
    return 0;
}