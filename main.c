#include<stdio.h>

void main(){
    const int SIZE = 4;
    int Table [SIZE];


    int i=0; 
    for ( i=0; i<SIZE ; i++){
        printf("insert %d value:  ", i);
        scanf("%d", &Table[i]);
    }

    printf("----------%d\n",i);

    for (i=0; i<SIZE; i++){
        printf("j = %d\n",i);
        printf("your table is %d \n",Table[i]);
    }
}