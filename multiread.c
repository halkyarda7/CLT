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
        int number;
        char name[20];
} person;

int main(int argc, char *argv[])
{
        //no helper metods needed?
        //use fread() and correct data structure to read the bits off the disk & print out vals
        //set up a struct to store the persident initials (read the first 5 bits, then chop null and after, then read bit 6 for president number)
        //print
        person President;
        FILE *inputfile;
        FILE *inFile;
        int howmany;

        if(argc <2)
        {
                inFile = fopen(argv[1], "r");
        }

        if ( ( inputfile = fopen(inFile, "r") ) == NULL ) {
                perror(inFile);
                exit(1);
        }

        // Into the memory location "Pontiff", in chunks the size
        // of a "person" object, one chunk, from the stream "inputfile".
        // If we don't get one, something went wrong.
        if ( (howmany = fread(&Pontiff, sizeof(person), 1, inputfile)) != 1) {
                if ( feof(inputfile) != 0 ) {
                        fprintf(stderr, "EOF on file.\n");
                } else {
                        perror(inFile);
                }
                exit(1);
        }
                perror(inFile);
                exit(1);
        }

        for() {
                                 
