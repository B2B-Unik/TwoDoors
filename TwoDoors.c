#include <stdio.h>

int main(int argc, const char * argv[])
{
		char play;
		int choice;
		char answer[] = "\nNo matter which one you choose the guards both tell you which door leads to death, and therefore you can pick the other door.\n";
		char restart; //String used to enable & disable program restart.

	do {
		printf("\nWelcome to Two Doors.\n");		//Print Welcome to Two Doors.
		printf("Would you like to play? (y/n): \n");	//Ask user if he wants to play.
		scanf("%s", &play);				//Takes input from user and stores it in play string.

		if (play == 'n'){

		restart = 'n';
		break;

		}

		if (play == 'y'){				//If user enters y, then print following to screen and ask to enter selection.
	
			printf("\nYou are a prisoner in a room with 2 doors and 2 guards.\n");
			printf("One of the doors will guide you to freedom and behind the other is a hangman --you don't know which is which.\n");
			printf("One of the guards always tells the truth and the other always lies. You don't know which one is the truth-teller or the liar either.\n");
			printf("You have to choose and open one of these doors, but you can only ask a single question to one of the guards.\n");
			printf("What do you ask so you can pick the door to freedom?\n");
			printf("\t1. Ask the truth-guard to point to the door of doom.\n");
			printf("\t2. Ask the liar-guard to point to the door of doom.\n");
			printf("\t3. Doesn't matter which one you pick.\n");
			
			scanf("%d", &choice);			//Takes input from user and stores it in choice string.

		}

		switch (choice){				//Based on user input, print the associated case.
	
			case 1: printf("%s",answer);
				break;
			case 2: printf("%s",answer);
				break;
			case 3: printf("%s",answer);
				break;
			default: 
				break;
		}
		
		if (play == 'y'){	

		printf("Would you like to play again?\n");	//Ask user if he wants to play again.
		scanf("%s", &restart);				//Take input from user and store it in restart string.
		}

	} while (restart == 'y');

	return 0;
}
