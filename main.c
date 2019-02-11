#include <stdio.h>
#include <stdlib.h>

//Interface of node
struct node{
    int count;
    int symbol;
    struct node * next;
};

//Create new node
void construct(struct node *n, int a){
    struct node * n1 =(struct node *)malloc(sizeof(struct node));
    n1->next=NULL;
    n1->symbol=a;
    n1->count=1;
    n->next = n1;
}

//Make ord up to down for nodes
void ordering(struct node * n ,struct node * last ,struct node * next){



}


//Insert new nodes or increment counter for exists
int insert(struct node *n,int symbol){
    struct node * last = NULL;
    while(n->next != NULL){
        if(n->symbol == symbol){
            n->count++;
            ordering(n,last,n->next);
            return 0;
        }else{
            last = n;
            n = n->next;
        }
    }
    construct(n,symbol);
    return 0;
}

void sort(int * ar){
    for(int i = 0 ; i < 255 - 1; i++) {
        // сравниваем два соседних элемента.
        for(int j = 0 ; j < 255 - i - 1 ; j++) {
            if(ar[j] < ar[j+1]) {
                // если они идут в неправильном порядке, то
                //  меняем их местами.
                int tmp = ar[j];
                ar[j] = ar[j+1] ;
                ar[j+1] = tmp;
            }
        }
    }
}

void out(int * ar, int N){
    for(int i=0;i<N;i++){
        printf("%d ",ar[i]);
    }
}



int main(){
    //Get symbol witch define what will we do (code or decode)
    char c = (char)getchar();
    getchar();
    int ar[256]={0};
    if(c == 'c'){
        int symb;
        while((symb = getchar()) != '\n'){
            ar[symb]++;
        }

        //bad idea with array ... but it will come in handy possible
        /*sort(ar);
        int i = 0;
        while(ar[i] != 0 ){
            construct(*n, ar[i]);
            i++;
        }
        for(i=0 ;i <255;i++){
            printf("%i ",ar[i]);
        }*/

    }else if (c == 'd'){

    }
return 0;
}