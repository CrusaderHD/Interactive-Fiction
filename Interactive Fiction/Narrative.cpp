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

//Include the PreProcessor Directives
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
//Let's add in a namespace
using namespace std;

//Let's create some Variables.
string userName;      //Takes in a string of UserName.
string userCommands;  //Displays a list of commands for the user.
string userLost;      //String to confirm user is lost.
string look;		  //String for user to look.
string inspect;		  //String for user to inspect something.
string grab;	      //String for user to grab something.
string yes;		      //String for user to confirm yes.
string no;		      //String for user to confirm no.
string touch;         //String for user to touch an item.
string open;		  //String for user to open something.
string continueStory; //String for user to return to the story.
string box;			  //String for user to touch box.
string metalKey;	  //String for user to touch metal key.
string metalLock;	  //String for user to use the lock, if they have the key.
string metalDoor;	  //String for user to open door. IF they have the key and have unlocked the lock.


bool lookLeft;        //Bool for user to look left.
bool lookRight;       //Bool for user to look right.
bool lookUp;	      //Bool for user to look up.
bool lookDown;        //Bool for user to look down.
bool lightsOn;		  //Bool that symbolizes a light is turned on.
bool commandsUsed;    //Create a bool to determine if commands are being used.
bool seeDresser;	  //Bool if user sees the dresser.
bool openDresser;	  //Bool if user opens Dresser.
bool keyGrabbed;	  //Bool if user grabs key.
bool seeDoor;		  //Bool if user sees the door.
bool openDoor;	      //Bool if user opens the door.
bool seeLock;		  //Bool if user sees the lock.
bool unlockLock;	  //Bool if user unlocks the lock.


//Let's the Functions begin!!!
//Function: GetUserCommands. Allows user to see a list of commands.
void GetUserCommands()
{
	cout << "\nTo see commands. Simply type commands: ";
	cin >> userCommands;
	cout << "\nRead Carefully...";
	system("pause");
	//If user types the word Commands/commands.
	if (userCommands == "Commands" || userCommands == "commands")
	{
		cout << "\nKeywords: Yes, No, Look Up, Look Left, Look Right, Look Down, Inspect, Grab, Touch, Open.\n" << endl;
		commandsUsed = true;
	}
	if(commandsUsed)
	{
		cout << "\nThe list above will be the commands you will use to complete your adventure. Remember them. You only see them once...\n";
		cout << "To continue to the story. Please type 'Continue: ";
		cin >> continueStory;
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
	cout << "\n" << userName << ", welcome to the Lost Room." << endl;
	cout << "......." << endl;
	cout << ".............." << endl;
	cout << "....................." << endl;
	system("pause");
	cout << "\nAre You Feeling lost?" << endl;
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


//Function: LookLeft. 
void LookLeft()
{
	lookLeft = true;
	lookRight = false;
	lookUp = false;
	lookDown = false;

	if (lookLeft)
	{
		seeDoor = true;
		cout << "\nYou see the door." << endl;
		if (seeDoor)
		{
			cin >> inspect;
			if (inspect == "inspect" || inspect == "Inspect")
			{
				seeLock = true;
				cout << "After a closer look. All you see is the lock." << endl;
			}
		}
	}
}

//Function: LookRight.
void LookRight()
{
	lookLeft = false;
	lookRight = true;
	lookUp = false;
	lookDown = false;

	if (lookRight)
	{
		seeDresser = true;
		cout << "\nYou see a dresser." << endl;
		if (seeDresser)
		{
			cin >> inspect;
			if (inspect == "inspect" || inspect == "Inspect")
			{
				seeDresser = true;
				cout << "After a closer look. You notice a drawer is loose." << endl;
				cin >> open;
				if (open == "open" || open == "Open")
				{
					openDresser = true;
					cout << "\nYou slowly pull open the loose drawer..." << endl;
					if (openDresser)
					{
						cout << "You see a shiny object. Looks like a key.";
						cin >> grab;
						if (grab == "grab" || grab == "Grab")
						{
							keyGrabbed = true;
							cout << "\nYou grab the key and place it in your pocket.";
						}
					}
				}
			}
		}
	}
}
//Function: LookDown.
void LookDown()
{
	lookLeft = false;
	lookRight = false;
	lookUp = false;
	lookDown = true;
	if (lookDown)
	{
		cout << "You look down. Hey look. You're still wearing shoes. Cool, they were expensive...";
	}
}
//Function: LookUp.
void LookUp()
{
	lookLeft = false;
	lookRight = false;
	lookUp = true;
	lookDown = false;

	if (lookUp)
	{
		cout << "\nYou see nothing but ceiling." << endl;
	}
}

//Function Named 'NarrativeForUser' this will be the main handler for the story. It will incorporate use of other functions. Primarily used to keep main() clean and organized.
void NarrativeForUser()
{
	system("pause");
	system("cls");
	cout << "\nSlowly you begin to feel the room become filled with a haze." << endl;
	cout << "Your senses begin to heighten. You spin in circles. Hoping for something." << endl;
	cout << "But alas. The room is dark. You see nothing. You smell...nothing." << endl;
	cout << "You begin to wonder how you got here. But quickly shake that thought, because your primary focus is to escape." << endl;
	cout << "You close your eyes. Trying to get a sense for this room that you're in." << endl;
	cout << "Your heart immediately starts racing as you remember you have seen every single 'SAW' movie." << endl;
	cout << "You begin to wonder. Is this how it ends? No, it can't be." << endl;
	cout << "C'MON " << userName << ", you say to yourself. Pull yourself together..." << endl;
	cout << "You get on your hands and knees and begin to crawl. The floor is carpet. At least it's soft, you mutter quietly..." << endl;
	cout << "As your crawling, you feel something. What do you do? ";
	cin >> touch;
	if(touch == "touch" || touch == "Touch")
	{
		lightsOn = true;
		if(lightsOn)
		{
			cout << "Bingo. You turned on a light. Although dim. It still works..." << endl;
		}
	}
	else if(touch == "grab" || touch == "Grab")
	{
		lightsOn = false;
		cout << "You feel something. But can't grab it. Maybe something else? ";
		cin >> touch;
		if (touch == "touch" || touch == "Touch")
		{
			lightsOn = true;
			if (lightsOn)
			{
				cout << "Bingo. You turned on a light. Although dim. It still works..." << endl;
			}
		}
	}

	system("pause");

	cout << "\nNow that there is light, you look around the room..." << endl;
	cout << "You see a metal door, with a huge metal lock. You also notice a dresser." << endl;
	cout << "Which you find rather odd. If I am trapped...why is the lock on the inside. Not the outside? Also, why a dresser" << endl;
	cout << "Is there a different way out? How would someone trap me inside, lock the door from the inside and be able to leave?" << endl;
	cin.ignore();

	getline(cin, look);
	cout << look << endl;
	cout << "\n\n";


	//If user types look left here do the following.
	if(look == "look left" || look == "Look Left")
	{
		LookLeft();
	}
	//If user types look right here do the following.
	else if (look == "look right" || look == "Look Right")
	{
		LookRight();
	}
	//If user types look up here do the following.
	else if (look == "look up" || look == "Look Up")
	{
		LookUp();
	}
	//If user types look down here do the following.
	else if (look == "look down" || look == "Look Down")
	{
		LookDown();
	}
	else
	{
		cout << "\nHmm something isn't right." << endl;
		system("pause");
	}

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

