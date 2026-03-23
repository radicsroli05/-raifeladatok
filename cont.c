#include <stdio.h>
int main(){
    int i, ossz;
    ossz=0;
    for (i=1; i<=10;i=i+1)
    {
        printf("%d\n", i);
        if(i==6)
        {
            continue;
        }
        printf("%d\n", i);
    }
     printf("Itt vagyunk\n");
    return 0;
}

