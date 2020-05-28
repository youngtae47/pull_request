#include <stdio.h>
#include <stdlib.h>

void i_sort(int *d, int idx1, int idx2){
    int i, j=0;
    for(i=idx1+1 ; i<idx2+1 ; i++){
        int tmp = d[i];
        for(j=i-1 ; j>=0 && d[j]>tmp; j--)
            d[j+1] = d[j];

        d[j+1] =tmp;
    }
}

int main(int argc, char **argv){

    int n,*d;
    FILE *input = fopen( argv[1] , "rb");
    int e = fread(&n, sizeof(int), 1, input);
    d = malloc(sizeof(int)*n);
    e = fread(d, sizeof(int), n, input);

    printf("Sort Start");
    i_sort(d, 0, n-1);

    fclose(input);
    free(d);

    return 0;
}
