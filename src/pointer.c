

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int *ptr;

    // printf("%p\n", ptr);
    // printf("%d\n", *ptr);

    printf("Enter the number of students:");
    scanf("%d", &num);

    ptr = (int *)malloc(num * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation failed!!!\n");
        return 0;
    }

    for (int i = 0; i < num; i++)
    {
        printf("Enter mark of student #%d:", i + 1);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < num; i++)
    {
        printf("Mark of student #%d is %d\n", i + 1, ptr[i]);
    }

    free(ptr);
    ptr = NULL;

    return 0;
}
