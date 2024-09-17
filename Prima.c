#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {

    int number;
    scanf("%d", &number);

    int i;
    for(i = 2; i <= number/2+1 ; i++){
        if(number%i == 0){
            printf("BUKAN");
            return 0;
        }
        else {
            printf("PRIMA");
            return 0;
        }
    }

    return 0;
}