//Creator Information:
/*
 *Name: Hunter Derrick
 *Professor Name: Tony Hinton
 *Class: CSC215 @ UAT
 *Assignment: Learn Functions through interactive fiction.
 *Assignment Start Date: 10/30/2018
 *Assignmnet Complete Date:
 */
//TASK
/*
 *Create a new console project.
Add a function called GetTextFromUser that takes a string as the prompt you wish to display to the user and returns a string. 
Add a function named GetNumbersFromUser that takes a string as the prompt you wish to display to the user and returns an integer.
Add any more functions that you may need.
Your main function should control all the other functions.
Comment your source code file (.CPP) well. 
Once the program is working have tested it a few times, create a new repository in your GitHub account for your program.
Add your solution and files to your new Repository on GitHub.
Take a screenshot of this project in GitHub.
Take a screenshot of the program working.
 */

//Include th PreProcessor Directives
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
//Let's add in a namespace
using namespace std;

//Let's create some Variables.
string userName;  //Takes in a string of UserName.
string userCommands;  //Displays a list of commands for the user.
bool commandsUsed = false;  //Create a bool to determine if commands are being used.



//Let's the Functions begin!!!
//Function Named 'GetTextFromUser' this will take a string and returns a string.
void GetTextFromUser()
{
	//TODO: Make This
	cout << "Hello. What is your name? ";
	cin >> userName;
	cout << "\nHELLO! " << userName << " it is so nice to meet you!\n";
}

//Function Named 'GetNumbersFromUser' this will take a string and return an integer.
void GetNumbersFromUser()
{
	//TODO: Make This
}

//Function Named 'WelcomeUser' this will be an introduction to the story. As well as a list of commands prior to beginning.
void WelcomeUser()
{
	//TODO: Make This
	cout << userName << ", welcome to 'INSERT STORY NAME HERE." << endl;
	cout << "You are about to embark on an incredible journey." << endl;
	cout << "However, before we begin. I would like to cover some ground rules, and give access to a list of commands." << endl;
	cout << "To see these commands. Simply type 'commands' at any time." << endl;
	cout << "Let's try it now: ";
	cin >> userCommands;
	//TODO: Make this loop if user inputs invalid command.
	do
	{
		if (userCommands == "Commands" || userCommands == "commands")
		{
			cout << "Here are your commands...\n\n";
			commandsUsed = true;
		}
		else
		{
			cout << "Sorry, that option was invalid. Try Again.\n\n";
			commandsUsed = false;
		}
	}
	while (commandsUsed);
	
}

//Function Named 'NarrativeForUser' this will be the main handler for the story. It will incorporate use of other functions. Primarily used to keep main() clean and organized.
void NarrativeForUser()
{
	//TODO: Make This
}

//Function Named 'main' this will operate as the main function that runs everything.
int main()
{
	//TODO: Make This
	GetTextFromUser();
	WelcomeUser();

	//Add in System Pause and Return Statements.
	system("pause");
	return(0);

}

