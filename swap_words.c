// file: swapwords.c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swap(char **arr, int index_x, int index_y)
{
   char *tmp = *(arr + index_x);
   *(arr + index_x) = *(arr + index_y);
   *(arr + index_y) = tmp; 
}

int main(int argc, char **argv)
{
    if (argc < 6) {
        printf("Usage:\n\t%s s1 s2 s3 s4 s5\n",argv[0]);
        return -1;
    }
    // assume:
    // ./swap_words apple banana orange peach pear
    swap(argv,1,5); // swaps apple and pear 
    swap(argv,2,3); // swaps banana and orange
    for (int i=1; i < argc; i++) { // skips program name
        printf("%s",argv[i]);
        i == argc - 1 ? printf("\n") : printf(", ");
    }
    return 0;
}
