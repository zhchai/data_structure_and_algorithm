#include "bubble_sort.h"

int main()
{
    int a[10] = {50, 3, 47, 23, 9, 18, 34, 2, 16, 10};
    print_array(a, sizeof(a)/sizeof(int));
    bubble_sort_improve(a, sizeof(a)/sizeof(int));
    print_array(a, sizeof(a)/sizeof(int));
    return 0;
}