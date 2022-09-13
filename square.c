#include <stdio.h>
int main()
{
    int i = 0;
    int num;
    printf("Enter number : ");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (i == 0 || j == 0 || i == num - 1 || j == num - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }    
    return 0;
}