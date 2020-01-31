//rahat choudery
#include <iostream>
#include <fstream>
#include <stack>
using namespace std;

int main ()
{
  ifstream fin;
  char d;
  stack <char> words;
  stack <char> ordered_words;

  fin.open("text_file.txt"); //open the file

  if (fin.fail())
    {
      cout << "Error!" << endl;
    } //return error if file does not open

  else
    {
      while (!fin.eof()) //while it is not the end of the file
	{
	  d = fin.get();

	  if (d == '#')
	    {
	      words.pop();
	    } //erase character

	  else if (d == '$')
	    {
	      words.push(d);
	    } //substitute character

	  else if (d == '@')
	    {
	      while (!words.empty())
		{
		  words.pop();
		}
	    } //kill character

	  else
	    {
	      words.push(d);
	    } //if character is not special, push into stack
	} //end while loop

      while (!words.empty())
	{
	  ordered_words.push(words.top());
	  words.pop();
	} //populate second stack with correct ordering of words

      while (!ordered_words.empty())
	{
	  cout << ordered_words.top();
	  ordered_words.pop();
	} //print ordered words

      cout << endl;
      fin.close();
    } //end else
} //end main
