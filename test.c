#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

    int n,*d;
    FILE *input = fopen( argv[1] , "rb");
    int e = fread(&n, sizeof(int), 1, input);
    d = malloc(sizeof(int)*n);
    e = fread(d, sizeof(int), n, input);

    fclose(input);
    free(d);
}
