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
string userLost;  //String to confirm user is lost.
bool commandsUsed;  //Create a bool to determine if commands are being used.



//Let's the Functions begin!!!
//Function: GetUserCommands. Allows user to see a list of commands.
void GetUserCommands()
{
	cout << "\nTo see commands. Simply type commands: ";
	cin >> userCommands;
	//If user types the word Commands/commands.
	if (userCommands == "Commands" || userCommands == "commands")
	{
		cout << "Common Words: Yes, No, Look Up, Look Left, Look Right, Look Down, Grab, Touch[item name], open.\n" << endl;
		cout << "Press 'B' to open and close your bag." << endl;
		commandsUsed = true;
	}
	system("pause");
}

//Function Named 'GetTextFromUser' this will take a string and returns a string.
void GetTextFromUser()
{
	//TODO: Make This
	system("pause");
	GetUserCommands();
	cout << "\n... What is your name? ";
	cin >> userName;
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
	cout << userName << ", welcome to the Lost Room." << endl;
	cout << "......." << endl;
	system("pause");
	cout << "......." << endl;
	system("pause");
	cout << "Are you feeling lost yet?" << endl;
	cout << "Yes or No? ";
	cin >> userLost;
	if (userLost == "Yes" || userLost == "yes" || userLost == "Y" || userLost == "y")
	{
		cout << "\nPerfect." << endl;
	}
	else if (userLost == "No" || userLost == "no" || userLost == "N" || userLost == "n")
	{
		cout << "\nIt's okay. I was in denial at first too." << endl;
	}
	else
	{
		cout << "\nTry Again...";
		cin >> userLost;
	}
	
	
}

//Function Named 'NarrativeForUser' this will be the main handler for the story. It will incorporate use of other functions. Primarily used to keep main() clean and organized.
void NarrativeForUser()
{
	cout << "\nInsert Narrative Here." << endl;
	//TODO: Make This
}

//Function Named 'main' this will operate as the main function that runs everything.
int main()
{
	//TODO: Make This
	GetTextFromUser();
	WelcomeUser();
	NarrativeForUser();

	//Add in System Pause and Return Statements.
	system("pause");
	return(0);

}

