#include <stdio.h>

int main(){

    int dTeams;

    printf("How many teams are participating: ");
    scanf("%d", &dTeams);

    for (int i = 1; i <= dTeams; i++){
        for(int j = i+1; j<= dTeams; j++){
            printf("Team %d vs Team %d \n", i , j);
        }
    }

    return 0;
}