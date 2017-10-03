#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,k;
    scanf("%d %d", &n, &k);
    int curr, ak=0;
    for(int i=0;i<n;i++){
        scanf("%d", &curr);
        if (curr==0){
            printf("%d", i);
            exit(0);
        }
        if (k==(i+1)){
            ak=curr;
        }
        if (curr<ak){
            printf("%d", i);
            exit(0);
        }
    }
    printf("%d", n);
    return 0;
}