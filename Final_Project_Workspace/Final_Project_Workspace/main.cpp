/*
Author:Travis Herrera
Project: Final Project, Zombie
File: Main
Last Updated: 11/30/18
*/

#include <iostream>
#include <fstream>
#include <string>
#include "Alamred.h"
#include "Ignorant.h"
#include "Person.h"
#include "Zombie.h"

using namespace std;

int main()
{
	string netfile = "\\\\cs1\\2021\\therrera21\\cs-273-1\\final\\residents.txt";
	ifstream res_names; // resident names
	res_names.open(netfile);
	if (res_names.fail()) {
		cout << "cant open file" << endl;
		return 0;
	}
	string line;
	while (getline(res_names, line))
	{
		cout << line << endl;
	}
	res_names.close();

	return 0;
}