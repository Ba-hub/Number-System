#include <stdio.h>
int main() 
{
    int a[10], number, i, j;
    printf("\n Please Enter the DESIMAL Number  :  ");
    scanf("%d", &number);    
    for(i = 0; number > 0; i++)
    {
        a[i] = number % 2;
        number = number / 2;
    }   
    printf("\n Binary from =  ");
    for(j = i - 1; j >= 0; j--)  {
        printf(" %d ", a[j]);
    }
    printf("\n");
    return 0;
}