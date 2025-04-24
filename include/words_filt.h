#ifndef words_filt_h
#define words_filt_h

//filt

typedef enum {
	filt_start,
	filt_contain,
	filt_not_contain,
} FilterType;

// filter type and letter

void words_filt(const char *filename, FilterType filter_type, char letter);

#endif
