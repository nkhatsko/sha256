#include "sha.h"


void sha256(char data[], char output[65]) {

	unsigned char hash[SHA256_DIGEST_LENGTH];
	SHA256_CTX sha256;
	SHA256_Init(&sha256);
	SHA256_Update(&sha256, data, strlen(data));
	SHA256_Final(hash, &sha256);

	for (int i = 0; i < SHA256_DIGEST_LENGTH; i++) {
		sprintf(output + (i * 2), "%02x", hash[i]);
	};
	output[64] = '\0';

};
