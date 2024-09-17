#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char first[255];
    char second[255];
    scanf("%s", first);
    scanf("%s", second);
    
    if(strlen(first) != strlen(second)){
        printf("BERBEDA");
        return 0;
    }
    
    int i;
    for(i = 0; i < 255; i++){
        if(first[i] == '\0' && second[i] == '\0') break;
        if(first[i] != second[i]){
            printf("MIRIP");
            return 0;
        }
        else{
            printf("IDENTIK");
            return 0;
        }
    }
    
    return 0;
}