#include <stdio.h>
#include <stdlib.h>
#include "print_result.h"
#include "process_data.h"
#include "read_data.h"
#include "sorting.h"
#include "verify_errors.h"

struct team
{
    int position;
    char name[30];
    int points;
    int matches;
    int victories;
    int goal_difference;
    int goals_for;
    int goals_against;
};


int main(int argc, char *argv[]){
    FILE *fin = fopen(argv[1], "r");
    verify_errors(argc, fin, argv[1], "r");
    fclose(fin);
    return 0;
}