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
    else if (szam==0)
    {
        printf("A szám nulla.\n");
    }
    else
    {
        printf("A szám pozitív.\n");
    }
    return 0;
    
}
