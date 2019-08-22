#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Faça um programa que exibe as tabuadas do 0 ao 10.

     int count, i;
     count = 0;

     do{
        printf("\n");
        printf("TABUADA DO %d\n\n", count);
        for(i = 0; i <= 10; i++){
            printf("%2d  X %2d = %2d\n",i,count,(i * count));
        }
        count++;
    } while(count <= 10);
    return 0;
    }
