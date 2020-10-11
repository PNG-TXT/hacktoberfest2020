#import <stdio.h>

void recec(int a ){
    if (a > 0){
        printf("\n[%d]",a);
        recec(a -1);
        printf("\n<%d>",a);
    }
}


int main(){

    recec(20);

    return 0;
}