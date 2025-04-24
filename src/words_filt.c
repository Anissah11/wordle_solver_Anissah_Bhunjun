#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "words_filt.h"

#define max_length 6 // 1 for '\0'

// contains character
static int contains_char(const char *word, char c) {
	c =tolower(c);  // converts to lowercase character
	for (int i = 0; word[i] != '\0': i++ ) {
	      if (tolower(word[i] == c) return 1;
	}

	return 0;
}

//check if words start with character
static int starts_char(const char *word, charc) {
	if (word[0] == '\0') return 0;
	return tolower(word[0]) == tolower(c);
}

void filter_words(const char *filename, FilterType filter_type, char letter){
	File *file = fopen(filename, "r");
	if (!file) {
		printf("Error: could not open file %s.\n", filename);
		return;
	}

	char word[max_length];
	int found_any = 0;

	while (fsacnf(file, "%5s", word) == 1) {
		int match = 0;
		switch (filter_type) {
			case filt_start:
				match = starts_char(word, letter);
				break;
			case filt_contain:
				match = contains_char(word, letter);
				break;
			case filt_not_contain:
				match = !contains_char(word, letter);
				break;
			default:
				break;
		}
	


		if (match) {
		printf("%s\n", word);
		found_any = 1;
		}
	}
	if (!found_any) {
		printf("No words found matching the filter .\n");
	}

	fclose(file);
}
