#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void tukar(int* bilanganPertama, int* bilanganKedua){
    int sementara = *bilanganPertama;
    *bilanganPertama = *bilanganKedua;
    *bilanganKedua = sementara;
}

void sort(int semuaNilai[], int n){
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (semuaNilai[j] > semuaNilai[j + 1]) {
                tukar(&semuaNilai[j], &semuaNilai[j + 1]);
            }
        }
    }
}

int main() {

    int n;
    scanf("%d", &n);
    int semuaNilai[n];
    int i;
    for(i = 0 ; i < n ; i++){
        scanf("%d",&semuaNilai[i]);
    }

    sort(semuaNilai,n);
    for(i = 0 ; i < n ; i++){
        printf("%d\n",semuaNilai[i]);
    }

    return 0;
}