#include <stdio.h>
#include <stdlib.h>



void out(int * ar, int N){
    for(int i=0;i<N;i++){
        printf("%d ",ar[i]);
    }
}


int main(){
    int N=getchar()-48;
    getchar();
    int count=0;
    int * ar= (int*)malloc(sizeof(int)*N*N);
    for(int i=0;i<N;i++){
//        for(int j = 0 ;j<N;j++){
//            *(ar+i*N+j)=count;
//            count++;
//      }
    ar[i]=i;
    }

    int line,column;
    scanf_s("%d %d",&line,&column);
    //out(*ar,N);
    printf("%d",*(ar+column));

return 0;
}