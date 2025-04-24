#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "words_filt.h"

#define max_length 6 // 1 for '\0'

// contains character
static int contains_char(const char *word, char c) {
	c =tolower(c);  // converts to lowercase character
	for (int i = 0; word[i] != '\0': i++ {
	    
