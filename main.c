#include "sha.h"

#include <stdio.h>


int main(int argc, char *argv[]) {

	if (argc < 2) {
		fprintf(stderr, "parametres error\n");
		return (1);
	};

	char hash[65];
	sha256(argv[1], hash);
	printf("%s\n", hash);

	return (0);

};
