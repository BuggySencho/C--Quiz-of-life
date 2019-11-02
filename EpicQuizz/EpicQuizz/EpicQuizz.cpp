// EpicQuizz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<list>
#include "Username.h"

int main()
{
	std::list<std::string> awnsers1;
	std::list<std::string> awnsers2;
	std::list<std::string> awnsers3;
	std::list<std::string> awnsers4;
	std::list<std::string> awnsers5;

	//std::string  gods[4] = { "\nBob Ross\n", "Elon Musk\n", "Ugandan knuckles\n", "There is no god\n" };
	// int i;
	char question1;
	char question2;
	char question3;
	char question4;
	char question5;
	int score = 0;

	std::cout << "Welcome to the quizz that will change your life.\n";
	std::cout << "To awnser a question use the capital letter of the awnser, try and get all the points.\n";
	std::cout << "Please enter your username.\n";

	std::list<Username> usernameList;
	std::string input;
	std::cin >> input;
	usernameList.push_back(Username(input));

	while (true)
	{

		awnsers1.push_back("\nWho is the true god?\n");
		awnsers1.push_back("\nA: Bob Ross\n");
		awnsers1.push_back("B: Elon Musk\n");
		awnsers1.push_back("C: Ugandan knuckles\n");
		awnsers1.push_back("D: Kaguya\n");
		awnsers1.push_back("E: There is no god");

		for (int i = 0; i < awnsers1.size(); i++)
		{
			std::list<std::string>::iterator begin = awnsers1.begin();
			std::advance(begin, i);
			std::cout << *begin << std::endl;
		}

		std::cout << "\n";
		std::cin >> question1;

		bool breakWhile = false;

		switch (question1)
		{
		case 'A':
			std::cout << "\nYou are absolutely right!\n" << std::endl;
			score += 5;
			breakWhile = true;
			break;
		case 'B':
			std::cout << "\nYou like catgirls?\n" << std::endl;
			score += 4;
			breakWhile = true;
			break;
		case 'C':
			std::cout << "\nStop it, the meme is dead\n" << std::endl;
			score += 3;
			breakWhile = true;
			break;
		case 'D':
			std::cout << "\nWEEB\n" << std::endl;
			score += 2;
			breakWhile = true;
		case 'E':
			std::cout << "\nDid you see awnser A?\n" << std::endl;
			score += 1;
			breakWhile = true;
			break;
		default:
			std::cout << "\nGIVE ME AN AWNSER!\n";
		}

		if (breakWhile)
		{
			break;
		}
	}

	for (Username uN : usernameList)
	{
		std::cout << uN.GetName();
	}
	std::cout << " has a score of: " << score << std::endl;

	while (true)
	{

		awnsers2.push_back("\nWhat is the best month of the year?\n");
		awnsers2.push_back("\nA: Januari\n");
		awnsers2.push_back("B: April\n");
		awnsers2.push_back("C: August\n");
		awnsers2.push_back("D: Spooktober\n");
		awnsers2.push_back("E: December\n");

		for (int i = 0; i < awnsers2.size(); i++)
		{
			std::list<std::string>::iterator begin = awnsers2.begin();
			std::advance(begin, i);
			std::cout << *begin << std::endl;
		}

		std::cin >> question2;
		bool breakWhile = false;

		switch (question2)
		{
		case 'A':
			std::cout << "\nEarly bird catches te worm right\n" << std::endl;
			score += 3;
			breakWhile = true;
			break;
		case 'B':
			std::cout << "\nHow funny\n" << std::endl;
			score += 4;
			breakWhile = true;
			break;
		case 'C':
			std::cout << "\nLike hot weather\n" << std::endl;
			score += 2;
			breakWhile = true;
			break;
		case 'D':
			std::cout << "\nSPOOKY MEMES!\n" << std::endl;
			score += 5;
			breakWhile = true;
			break;
		case 'E':
			std::cout << "\nSnowy christmas:)\n" << std::endl;
			score += 1;
			breakWhile = true;
			break;
		default:
			std::cout << "\nGIVE ME AN AWNSER!\n";
		}
		if (breakWhile)
		{
			break;
		}
	}

	for (Username uN : usernameList)
	{
		std::cout << uN.GetName();
	}
	std::cout << " has a score of: " << score << std::endl;

	while (true)
	{
		awnsers3.push_back("\nWhat's the biggest star in the milky-way?\n");
		awnsers3.push_back("\nA: Sirius B\n");
		awnsers3.push_back("B: Andromeda\n");
		awnsers3.push_back("C: Sagittarius A\n");
		awnsers3.push_back("D: VY Canis Majoris\n");
		awnsers3.push_back("E: Yo mamma\n");

		for (int i = 0; i < awnsers3.size(); i++)
		{
			std::list<std::string>::iterator begin = awnsers3.begin();
			std::advance(begin, i);
			std::cout << *begin << std::endl;
		}

		std::cin >> question3;
		bool breakWhile = false;

		switch (question3)
		{
		case 'A':
			std::cout << "\nSerius bly\n" << std::endl;
			score += 2;
			breakWhile = true;
			break;
		case 'B':
			std::cout << "\nSci-fi intensifies\n" << std::endl;
			score += 1;
			breakWhile = true;
			break;
		case 'C':
			std::cout << "\nDark yet darker\n" << std::endl;
			score += 2;
			breakWhile = true;
			break;
		case 'D':
			std::cout << "\nThat is correct\n" << std::endl;
			score += 5;
			breakWhile = true;
			break;
		case 'E':
			std::cout << "\nOh no he didn't!\n" << std::endl;
			score += 4;
			breakWhile = true;
			break;
		default:
			std::cout << "\nGIVE ME AN AWNSER!\n";
		}
		if (breakWhile)
		{
			break;
		}
	}

	for (Username uN : usernameList)
	{
		std::cout << uN.GetName();
	}
	std::cout << " has a score of: " << score << std::endl;

	while (true)
	{
	awnsers4.push_back("\nWhat's the meaning of life?\n");
	awnsers4.push_back("\nA: Procreate\n");
	awnsers4.push_back("B: Being depressed\n");
	awnsers4.push_back("C: There is no meaning\n");
	awnsers4.push_back("D: FOOD\n");
	awnsers4.push_back("E: It's subjective\n");

	for (int i = 0; i < awnsers4.size(); i++)
	{
		std::list<std::string>::iterator begin = awnsers4.begin();
		std::advance(begin, i);
		std::cout << *begin << std::endl;
	}

	std::cin >> question4;
	bool breakWhile = false;

	switch (question4)
	{
	case 'A':
		std::cout << "\nOkay i guess\n" << std::endl;
		score += 3;
		breakWhile = true;
		break;
	case 'B':
		std::cout << "\nGood thing i've got a gun then\n" << std::endl;
		score += 1;
		breakWhile = true;
		break;
	case 'C':
		std::cout << "\nYou okay there buddy?\n" << std::endl;
		score += 2;
		breakWhile = true;
		break;
	case 'D':
		std::cout << "\nGIB ME THE OREO\n" << std::endl;
		score += 4;
		breakWhile = true;
		break;
	case 'E':
		std::cout << "\nWell, guess that's true, there is no good awnser anyway\n" << std::endl;
		score += 5;
		breakWhile = true;
		break;
	default:
		std::cout << "\nGIVE ME AN AWNSER!\n";
	}
	if (breakWhile)
	{
		break;
	}
}

	for (Username uN : usernameList)
	{
		std::cout << uN.GetName();
	}
	std::cout << " has a score of: " << score << std::endl;
	
	while (true)
	{
		awnsers5.push_back("\nWhat's your name?\n");
		awnsers5.push_back("\nA: My name is Jeff\n");
		awnsers5.push_back("B: The name is Bond, James Bond\n");
		awnsers5.push_back("C: My username\n");
		awnsers5.push_back("D: Why is this even a question?\n");
		awnsers5.push_back("E: I'm Luffy, i'm gonna be pirate king!\n");

		for (int i = 0; i < awnsers5.size(); i++)
		{
			std::list<std::string>::iterator begin = awnsers5.begin();
			std::advance(begin, i);
			std::cout << *begin << std::endl;
		}

		std::cin >> question5;
		bool breakWhile = false;

		switch (question5)
		{
		case 'A':
			std::cout << "\nJeff it is then\n" << std::endl;
			score += 4;
			breakWhile = true;
			break;
		case 'B':
			std::cout << "\nClasic\n" << std::endl;
			score += 2;
			breakWhile = true;
			break;
		case 'C':
			std::cout << "\nARE YOU 100% SURE?\n" << std::endl;
			score += 1;
			breakWhile = true;
			break;
		case 'D':
			std::cout << "\nBecause i say so!\n" << std::endl;
			score += 3;
			breakWhile = true;
			break;
		case 'E':
			std::cout << "\nI believe in you!\n" << std::endl;
			score += 5;
			breakWhile = true;
			break;
		default:
			std::cout << "\nGIVE ME AN AWNSER!\n";
		}
		if (breakWhile)
		{
			break;
		}
	}

	for (Username uN : usernameList)
	{
		std::cout << uN.GetName();
	}
	std::cout << ", your final Score is: " << score << std::endl;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file