#include <stdio.h>

int main(){
    char line[255];
    FILE *file = fopen("text.txt", "r");
    
    // page number 1
    fgets(line, 255, file);
    printf("%s", line);
    // page number 2
    fgets(line, 255, file);
    printf("%s", line);
    // page number 3
    fgets(line, 255, file);
    printf("%s", line);
    // page number 4
    fgets(line, 255, file);
    printf("%s", line);

    fclose(file);
    file = fopen("text.txt", "a");
    fprintf(file, "\nthis is page number 5");

    return 0;
}