#include <stdio.h>
#include <string.h> //문자열은 문자의 배열



void encrypt(char* data, char key) {
		
	for (int i = 0; data[i] != '\0'; i++) {
		data[i] = data[i] ^ key;

	}


}

void decrypt(char* data, char key){

	for (int i = 0; data[i] != '\0'; i++) 
		data[i] = data[i] ^ key;

}

int main() {


	char plaintext[] = "Hanbat National University";

	char key = 'M';

	printf("Original: %s\n", plaintext);

	encrypt(plaintext, key); //암호화

	printf("Encrypted: %s\n", plaintext);

	decrypt(plaintext, key); 

	printf("Decrypted: %s\n", plaintext);





	return 0;
}

