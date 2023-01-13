#include <stdio.h>

// structure that defines the attributes of  CT/T player

struct terrorist{

	int dHP;
	int dArmor;
	int dKillCtr;
	int dDied;
	double dKDR;
	char sPlayerName[20];
	char cHasBomb;

	struct terrorist *t;

};

// functions prototypes here
void printTerroristRef();
void printTerroristVal();

int main(){
	// local variables here

	struct terrorist player1, player2, player3, player[100];

	// we will talk to the user to get these values

	//lets get player1

	printf("Enter name of Player1: \n");
	scanf("%s", player1.sPlayerName); // no &
	printf("Does %s have  the bomb? 1 - yes 0 - no\n", player1.sPlayerName);
	scanf(" %c", &player1.cHasBomb);
	//assign the initial hp of player1 to 100
	player1.dHP = 100;
	printf("How many kills did %s already have?\n", player1.sPlayerName);
	scanf("%d", &player1.dKillCtr);

	printf("How many deaths did %s already have?\n", player1.sPlayerName);
	scanf("%d", &player1.dDied);

	// compute for KDR
	player1.dKDR = (double) player1.dKillCtr/player1.dDied;

	printf("Enter name of Player2: \n");
	scanf("%s", player2.sPlayerName); // no &
	printf("Does %s have  the bomb? 1 - yes 0 - no\n", player2.sPlayerName);
	scanf(" %c", &player2.cHasBomb);
	//assign the initial hp of player1 to 100
	player2.dHP = 100;
	printf("How many kills did %s already have?\n", player2.sPlayerName);
	scanf("%d", &player2.dKillCtr);

	printf("How many deaths did %s already have?\n", player2.sPlayerName);
	scanf("%d", &player2.dDied);

	// compute for KDR
	player2.dKDR = (double) player2.dKillCtr/player2.dDied;


	//connect player1 to player2
	player1.t = &player2;

	//print ther using the foreign functions

	//print player1
	printTerroristRef(&player1); // pass by reference
	printTerroristRef(player1.t);
	// printTerroristVal(player1); // pass by value


	return 0;
}//endmain

//funtions definitions here

void printTerroristRef(struct terrorist * t){
	printf("Player name: %s \n", t->sPlayerName );
	printf("Has Bomb: %c \n", t->cHasBomb);
	printf("Player HP: %d \n", t->dHP);
	printf("Player KIlls: %d \n", t->dKillCtr);
	printf("Player Deaths: %d \n", t->dDied);
	printf("Player KDR: %.2f \n", t->dKDR);


}//endref

void printTerroristVal(struct terrorist t){
	printf("Player name: %s \n", t.sPlayerName );
	printf("Has Bomb: %c \n", t.cHasBomb);
	printf("Player HP: %d \n", t.dHP);
	printf("Player KIlls: %d \n", t.dKillCtr);
	printf("Player Deaths: %d \n", t.dDied);
	printf("Player KDR: %.2f \n", t.dKDR);

}//endval