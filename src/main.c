#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "words_filt.h"

int main() {
	char input[10];
	char letter ;
	int choice;

	printf("words filtering\n");
	printf("file: bdd_wordle.txt\n");

	while (1) {
		printf("\nchoose a filter option please:\n");
		printf("1: word starts with letter\n");
		printf("2: word contains letter\n");
		printf("3: word does not contain the letter\n");
		printf("press 0 to exit\n");
		printf("please enter preffered choice\n");

		if (fgets(input, sizeof(input), stdin) == NULL) break;

		if (sscanf(input, "%d", &choice) != 1) {
			printf("Invalid input\n");
			continue;
		}

		if (choice == 0) {
			printf("Existing program.\n");
			break;
		}

		if (choice < 1|| choice > 3) {
			printf("please enter option(0-3).\n");
			continue;
		}

		printf("Enter a letter: ");
		if (fgets(input, sizeof(input), stdin) == NULL) break;

		input[strlen(input, "\n")] = 0; // removes new line
		
		if (strlen(input) != 1 || !isalpha(input[0])) {
			printf("please enter exactly one alphabet letter.\n");
			continue;
		}

		letter = input[0];

		//call filter function
		words_filt("bdd_wordle.txt", (FilterType)(choice - 1), letter);
	}

	input[strcspn(input, "\n")] = 0; //removes new line
	
	if (strlen(input) !=1 || !isalpha(input[0])) {
		printf("Please enter exactly one alphabet letter.\n");
		continue;
	}

	letter = input[0];

	//call function filt
	words_filt("bdd_wordle.txt", (FilterType)(choise -1), letter);
}
return 0;
}


