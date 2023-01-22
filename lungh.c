#include <stdint.h>


size_t lungh(const char* str) {


	char res = 1;
	for (size_t i = 0; str[i]; i++) {


		res +=1;
	}


	return res - 1;

}