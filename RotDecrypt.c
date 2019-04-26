#include<stdio.h>

 int main() {
    char message[] = "ABCD", character;     //initialising input message and character
	int counter = 0, key =  1; //initialising counter and key as integers

    printf("Rotational Key is: %d\n", key);	//prints rotation key to screen
	printf("Message is: %s\n", message); //prints initial message to screen
	
	for(counter = 0; message[counter] != '0'; ++counter) { 
		character = message[counter];
		
		if(character >= 'a' && character <= 'z'){
			character = character - key;    //decryption = (cipher letter + key)(mod 26)
			
			if(character < 'a'){
				character = character + 'z' - 'a' + 1;
			}
			
			message[counter] = character;
		}
		else if(character >= 'A' && character <= 'Z'){
			character = character - key;
			
			if(character < 'A'){
				character = character + 'Z' - 'A' + 1;
			}
			
			message[counter] = character;
		}
	}
	
    printf("Decrypted Message is: %s\n", message); //prints decrypted message to screen
	
	return 0;
}