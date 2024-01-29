#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // check that the correct amount of arguments are entered into the command line
    if (argc != 3){
        printf("Usage: <integer> <integer>\n");
        return 0;
    }

    // add the two entered integers together
    int sum = atoi(argv[1]) + atoi(argv[2]);
    printf("the result is: %d\n", sum);

    return 0;
}
