#include <stdio.h>

void print_list(void)
{
    int list1[4] = {1, 2, 3, 4};
    int list2[4] = {2, 3, 4, 5};
    int list3[4] = {3, 4, 5, 6};
    int list4[4] = {4, 5, 6, 7};

    printf("%d %d %d %d\n", list1[0], list1[1], list1[2], list1[3]);
    printf("%d %d %d %d\n", list2[0], list2[1], list2[2], list2[3]);
    printf("%d %d %d %d\n", list3[0], list3[1], list3[2], list3[3]);
    printf("%d %d %d %d\n", list4[0], list4[1], list4[2], list4[3]);

    char c = "o";
}

int main()
{
    print_list();

    return 0;
}