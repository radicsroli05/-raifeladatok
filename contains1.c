#include <stdio.h>
int contains(int n, int t[], int s)
{
    int i;
    for (i=0; i<n;i++)
    {
        if (s==t[i])
        {
            return 1;
        }
    }
}

int main(){
    int elemek[]={5,9,7,8,3,-11};
    int hossz=6;
    int elem=7;
    int valasz;
    
    valasz=contains(hossz,elemek,elem);
    
    printf("Benna van e a %d elem a tömbben: %s.\n", elem, valasz ? "igen" : "nem");
    return 0;
}
    
  
