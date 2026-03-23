#include <stdio.h>
#include <string.h>
//#include "prog1.h"
#define MERET 6

int main(){
    char szoveg[MERET];
    printf("Adja meg a nevét: ");
    fgets(szoveg, MERET, stdin);
    szoveg[strlen(szoveg)-1]='\0';
    printf("Szia %s!\n", szoveg);
    return 0;
}
    
    
    
    
    
    
    
    
    
    
