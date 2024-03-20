#include<iostream>
#include<fstream>
using namespace std;

//Prototypes
int getLength(char const *arr);
bool isWordMatched(char const *arr1, char const *arr2);
void resetWord(char *word);
bool isStopword(char const *word);
bool garbageword(char const *word);
void convertWordtoLowerCase(char *word);
void getCounts(char const *word, int& positive, int &negative); //this function will get the counts.
void getNormalizedCounts(char const *word, double &nPositive, double &nNegative);//this function will get normalized count as explained in under normalization heading.

int main()
{
	
}


//Function to get the length of Char array.
int getLength(char const *arr)
{
	
}


// comparison between word (to write on file data.txt) and word (already written in file data.txt)
// i.e. finding whether the word ispreviously present in file data.txt or not ? 
bool isWordMatched(char const *arr1, char const *arr2)
{
	
}


void resetWord(char *word) // initialize/ set char variable word to NULL (we are going to read new word from sentence)
{
	
}


bool isStopword(char const *word) // Check the word is stop word or not?
{
	
}

bool garbageword(char const *word)
{
	
}


void convertWordtoLowerCase(char *word) // conversion to lower case
{
	
}


void getCounts(char const *word, int& positive, int &negative)//this function will get the counts.
{
	
	    
}


void getNormalizedCounts(char const *word, double &nPositive, double &nNegative)//this function will get normalized count as explained in under normalization heading.
{
	
}
