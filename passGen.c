//filename: passGen.c
//Author: Miku

/* Generates a random password and allows the user to specify
 * how long the password is (>254). If no arguments are given
	 then the program will output a password of 20 characters.

 Example usage:
	 ./passGen.c 25
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

main(int argc, char **argv)
{
	int passwordLength;
	if (argc == 1) {
		
		passwordLength = 20;
		passgen(passwordLength);

	} else {
		sscanf(argv[1], "%d", &passwordLength);
		passgen(passwordLength);
		}
	
return 0;
}
passgen(int passwordLength)
{
 srand(time(NULL));
 char password[255];
 int i;
 if (passwordLength > 254 ) 
	{
	printf("Please enter an integer 254 or lower.\n");
		return 0;
	}
 for(i=0;i<passwordLength; i++) {
                password[i] = rand()%(126-33)+33;
        }       
				password[passwordLength] = '\0';
                printf("%s\n", password);   
}
