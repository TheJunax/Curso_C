#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char firstName[50], lastName[50];
    scanf("%s", firstName);
    scanf("%s", lastName);
    char username[100];
    char initials[3];

    //username[20] firstName;
    strcpy(username,firstName);
	strcat(username,lastName);
    
    for (int i =0;username[i] != '\0';i++){
        username[i]= tolower(username[i]);
}
    initials[0] = firstName[0];
    initials[1] = lastName[0];
    initials[2] = '\0';

    printf("Username: %s\n",username);
  	printf("Initials: %s\n",initials);
  
    return 0;
}