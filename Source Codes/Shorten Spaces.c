/*
This removes duplicate spaces in text given from user using for loops and arrays.
Follow comments in code!
~trev
*/
#include <stdio.h>
#include <string.h>

<<<<<<< HEAD
int main(void) 
{
    //Declares string to store user input
    char userInput[500]; 
    //Prompt for user input
    printf("Enter text (500 character limit): \n");
    fgets(userInput, 500, stdin);
    //Creates new string to store edited text
    char newText[500];
    //Declare and initialize count variable for copying characters from "userInput" to "newText"
    int j = 0; 
    //Navigates through userInput string
    for (int i = 0; i < strnlen(userInput, 500); i++) 
    {
        //If the current index in "userInput" is a SPACE *with a character in front of it*, copy the character to "newText"
        if (userInput[i] == ' ' && userInput[i + 1] != ' ') 
        {
            newText[j] = userInput[i];
            j++;
        }
        //If the current index in "userInput" is a NON-SPACE CHARACTER, copy the character to "newText"
        else if (userInput[i] != ' ') 
        {
            newText[j] = userInput[i];
            j++;
        }
        //If the current index in "userInput" is a SPACE *followed by another space*, do NOT copy to "newText"
        else 
        {
            continue;
        }
        
    }
    //Appends null character to the end of the "newText" string
    newText[strnlen(newText, 500)] = '\0';
    //Outputs the edited text
    printf("Edited text: %s", newText);
    
    return 0;
}
=======
int main(void)
{
	//Declares string to store user input
	char userInput[500];
	//Prompt for user input
	printf("Enter text (500 character limit): \n");
	fgets(userInput, 500, stdin);
	//Creates new string to store edited text
	char newText[500];
	//Declare and initialize count variable for copying characters from "userInput" to "newText"
	int j = 0;
	//Navigates through userInput string
	for (int i = 0; i < strlen(userInput); i++)
	{
		//If the current index in "userInput" is a SPACE *with a character in front of it*, copy the character to "newText"
		if (userInput[i] == ' ' && userInput[i + 1] != ' ')
		{
			newText[j] = userInput[i];
			j++;
		}
		//If the current index in "userInput" is a NON-SPACE CHARACTER, copy the character to "newText"
		else if (userInput[i] != ' ')
		{
			newText[j] = userInput[i];
			j++;
		}
		//If the current index in "userInput" is a SPACE *followed by another space*, do NOT copy to "newText"
		else
		{
			continue;
		}
	}
	//Appends null character to the end of the "newText" string.
	newText[strlen(newText)] = '\0';
	//Outputs the edited text
	printf("Edited text: %s", newText);

	return 0;
}
>>>>>>> 87129903145ff019df482bf8b571ef62786d5900
