/*
//////////////////////////////////////////////////////////////////////////
PURPOSE: Implementation file for muiltiple-choice question class
CREATED: 28 April 2016
CHANGELOG:
*		Jacob, 28 April 2016: Created file, implemented class
//////////////////////////////////////////////////////////////////////////
*/

#include "../include/MCQuestion.h"

#define ERROR     -777

using namespace std;

MCQuestion::MCQuestion( string init, int numOpts )
{
	question = init;

	for ( int k = 0; k < numOpts - 1; ++k )
	{
		choiceArr[ k ] = "Placeholder";
	}

	if ( numOpts != 5 )
	{
		for ( int k = 0; k = numOpts; ++k )
		{
			choiceArr[ k ] = "Null";
		}
	}
}

void MCQuestion::setAnswer( string init, char ans )
{
	int opt = 0;
	char alphy[ 5 ] = { 'A','B','C','D','E' };

	for ( int k = 0; k < 5; ++k )
	{
		if ( ans == alphy[ k ] )
		{
			opt = k;
		}
	}

	choiceArr[ opt ] = init;
}

int MCQuestion::convertAnswer( char ans )
{
	int converted = 0;
	char alphy[ 5 ] = { 'A','B','C','D','E' };

	for ( int k = 0; k < 5; ++k )
	{
		if ( ans == alphy[ k ] )
		{
			converted = k;
			k = 6;
		}
		else
		{
			converted = ERROR;
		}
	}

	return converted;
}