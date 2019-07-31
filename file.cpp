#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("myfile.txt", "w");

    fprintf(fp, "Hello, World!\n");

    fclose(fp);

    return 0;
}
