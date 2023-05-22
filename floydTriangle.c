/*
 * Floyd Triangle Application
 * by Faruk Karaman
 *
 * Floyd triangle is a right triangle formed by arranging consecutive left-justified
 * counting numbers in each row equal to the value of the row.
 */
#include <stdio.h>
void floyd (int n)
{
    int i=1, j, k=1;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            printf("%d  ", k);
            k++;
            j++;
        }
        printf("\n");
        i++;
    }
}
int main()
{
    int line;
    printf("Please enter the number of lines : ");
    scanf("%d",&line);
    floyd(line);
    return 0;
}
