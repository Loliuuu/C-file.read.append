#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    FILE *fil = fopen("base.txt","w");
    fprintf(fil," ");
    fclose(fil);
    
    FILE *base = fopen("base.txt","a");
    char *memory = malloc(255);
    char *hist = malloc(255);

    printf("hello, please writing to a console end i append this to base.txt\n");
    while(1){
        if (strncmp(hist, "exit", 4) == 0) {
            fclose(base);
            free(hist);
            free(memory);
        return 0;                                                                     
    }
        printf(">>");
        fgets(hist,255,stdin);
        fprintf(base,"%s",hist);
    }
}

