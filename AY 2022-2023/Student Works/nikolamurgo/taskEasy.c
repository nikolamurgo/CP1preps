#include <stdio.h>

int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    for (int i = 1; i <= n; i++) {
        if(i != n){
        printf("%d, %d, ", i, n-i+1);
        }
        else{
            printf("%d, %d\n", n, n-i+1);
        }
    }

    return 0;
}