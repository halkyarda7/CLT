# CLT
comp lab tech
//get the input from the presidents, 6 spaces at a time, after which you would get a new line.  Then you would process the presidents oen at a time.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

//our type hold one number and one name
typedef struct {
        short int number;
        char name[5];
} person;

int main(int argc, char *argv[])
{
        person President;
        FILE *inputfile;
        int howmany;

        if(argc != 2)
        {
                fprintf(stderr, "Usage: %s filename\n", argv[0]);
                exit(1);
        }

        if ( ( inputfile = fopen(argv[1], "r") ) == NULL ) {
                perror(argv[1]);
                exit(1);
        }

        if ( (howmany = fread(&President, sizeof(person), 1, inputfile)) != 1) {
                if ( feof(inputfile)) {
                        printf("EOF on %s\n", argv[1]);
                } else {
                        perror(argv[1]);
                }
                exit(1);
        }

        printf("Num     Inits\n");
        while(!(feof(inputfile))) {
                //for loop reading 6 bits
                printf("%hi     %s\n", President.number, President.name);
                fread(&President, sizeof(person), 1, inputfile);
        }

        printf("End of data\n");
        fclose(inputfile);
        return 0;
}
