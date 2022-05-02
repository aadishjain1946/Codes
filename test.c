#include <stdio.h>
#include <stdlib.h>

#define SEQ_SIZE 50
#define CACHE_SIZE 3

int page_reference_sequence[SEQ_SIZE];

int read_file(char *filename) // read in the page reference sequence from the file
{
    FILE *input;
    int i, n;
    if ((input = fopen(filename, "r")) == NULL)
    {
        printf("The input file does not exist.\n");
        exit(1);
    }
    for (i = 0; i < SEQ_SIZE; i++)
    {
        if (fscanf(input, "%d", &page_reference_sequence[i]) == EOF)
        {                 // end of file
            n = i;        // total number of page reference
            i = SEQ_SIZE; // stop reading from file
        }
    }
    fclose(input);

    printf("Input page reference sequence: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", page_reference_sequence[i]);
    }
    printf("(total %d references)\n", n);

    return n; // return the total number of page reference
}

void FIFO(int n)
{
    // write your own code for the FIFO policy
    // based on the input file content, print out a table similar to the Figure 22.2

    int i;

    printf("FIFO  page reference sequence: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", page_reference_sequence[i]);
    }
    printf("(total %d references)\n", n);
}

void LRU(int n)
{
    // write your own code for the LRU policy
    // based on the input file content, print out a table similar to the Figure 22.5

    int i;

    printf("LRU   page reference sequence: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", page_reference_sequence[i]);
    }
    printf("(total %d references)\n", n);
}

int main(int argc, char *argv[])
{
    int i, n;

    if (argc != 2)
    {
        printf("Usage: %s input_filename\n", argv[0]);
        exit(1);
    }

    n = read_file(argv[1]);

    FIFO(n);

    LRU(n);
}