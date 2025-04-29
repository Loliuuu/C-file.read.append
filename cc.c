#include <stdio.h>

int main(){
    char line[255];
    short hist = 1;    
    FILE *file = fopen("base.txt", "r");

    if(file == NULL){
        printf("error, file dont have a text");
        return 1;
    }

    while (fgets(line,sizeof(line),file) != NULL){
        printf("%d:%s",hist, line);
        hist ++;
    }
    





    // // page number 1
    // if(fgets(line, 255, file) == NULL){
    //     return 1;

    // }
    // // page number 2
    // if(fgets(line, 255, file) == NULL){
    //     return 1;
    // }
    // printf("page number 2: %s", line);
    // // page number 3
    // if(fgets(line, 255, file) == NULL){
    //     return 1;
    // }
    // printf("page number 3: %s", line);
    // // page number 4
    // if(fgets(line, 255, file) == NULL){
    //     return 1;
    // }
    // printf("page number 4: %s", line);    

    fclose(file);
    return 0;
}
