#include<stdio.h>

void main(){
    const int SIZE = 4;
    int Table [SIZE][SIZE];
    int i,j;
    for (i=0; i<SIZE; i++){
        for (j=0; j<SIZE; j++){
             printf("insert [ %d , %d ]:  ", i,j);
             scanf("%d", &Table[i][j]);
        }
    }
    for (i=0; i<SIZE; i++){
         for (j=0; j<SIZE; j++){
            printf("%d\t", Table[i][j]);
         }
         printf("\n");
    }

}
