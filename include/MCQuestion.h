/*
//////////////////////////////////////////////////////////////////////////
PURPOSE: Definition file for muiltiple-choice question class
CREATED: 28 April 2016
CHANGELOG:
*		Jacob, 28 April 2016: Created file, defined class
//////////////////////////////////////////////////////////////////////////
*/

#ifndef MCQUESTION_H
#define MCQUESTION_H

#include <string>

using namespace std;

class MCQuestion
{
public:
	//Cstr
	MCQuestion( string init, int numOpts );

	//Mutator for answers
	void setAnswer( string init, char ans );

	//Converter to turn a choice into a usable (or not) integer
	int convertAnswer( char ans );

private:
	string choiceArr[ 5 ];
	string question;
};

#endif