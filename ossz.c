#include <stdio.h>
int osszegzo(int n){
    int i,ossz;
    ossz=0;
    for (i=1; i<=n; i++)
    {
        ossz=ossz+i;
    }
    return ossz;
}
int main(){
    int szam;
    printf("Adja meg a számot: ");
    scanf("%d", &szam);
    printf("%d\n", osszegzo(szam));
    return 0;
}

