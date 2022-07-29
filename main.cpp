#include <iostream>
#include <string>
using namespace std;

	/* Type your code here */

int main() {
	int par;
	int strokes;
	string name;
	cin >> par >> strokes;
	
	if (par == 3  || par == 4 || par  == 5) { 
   	if (par - 2 == strokes)
   	{
   	   name = "Eagle";
   	}
   	else if (par - 1 == strokes)
   	{
   	   name = "Birdie";
   	}
   	
   	else if (par == strokes)
   	{
   	   name = "Par";
   	} 
   	
   	else if (par < strokes)
   	{
   	   name = "Bogey";
   	} 
   }
	
	else {
	   name = "Error";
	}
	
   cout << name << endl;
	return 0;
}