#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);
    int arr[t];
    for(int i=0; i<t; i++){
        scanf("%d", &arr[i]);
    }

    int sum=0;
    for(int i=0; i<t; i++){
        sum = arr[i]+1;
        if(sum!=arr[i+1]){
            printf("%d", sum);
            break;
        }
            sum=0;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}