#include <stdio.h>
int main()
{
    int szam;
    printf("Adja meg a számot: ");
    scanf("%d",&szam);
    
    if (szam<0)
    {
        printf("A szám negatív.\n");
    }
    else
    {
        printf("A szám nemnegatív.\n");
    }
    return 0;
    
}
