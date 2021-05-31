#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
	char name[50];
	cout << "What is your name warrior?" << endl;
	cin.getline(name, 50);
	cout << "You better move fast, " << name << ". The goblins are attacking the city." << endl;
	cout << "\n----------------------- Press any key to Continue -----------------------" << endl;

	system("cls");
	int choiceOne_Path;
	cout << "# What wold you like to do?" << endl;
	cout << " \t >> Enter '1' to follow the Chief?" << endl;
	cout << "\t >> Enter '2' to find your own path?" << endl;
retry:
	cout << "\nEnter your choice: ";
	cin >> choiceOne_Path;
	if (choiceOne_Path == 1)
	{
		cout << "\n!!! -----------Chapter one: Escape-----------" << endl;
		cout << "\nYou: Where are we going?" << endl;
		cout << "Chief: Soon you will know . Just follow me." << endl;
		cout << "# You run behind the chief." << endl;
	}
	else if (choiceOne_Path == 2)
	{
		cout << "\n!!!----------------Chapter One: Escape----------------!!! " << endl;
		cout << "\nYou: I am going to find a way out!" << endl;
		cout << "\nChief: You are insane. You will get killed out there." << endl;
		cout << "\nYou: I have secrets and I know my way out." << endl;
		cout << "# You jump over the nearby broken fence" << endl;
		cout << "# and run off towards the City Wall." << endl;
	}
	else
	{
		cout << "You are doing it wrong, warrior! Press either '1' or '2', nothing else!" << endl;
		goto retry;
	}
	cout << "\n--------------------Press any key to continue--------------------" << endl;


	
	
	
	
	_getch(); 
	return 0;
}
