#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
	cout << "Hello, World!" << endl;
	cout << "My project name is" << argv[0] << endl;
	
	if (argc > 1)
	{
		for (int i = 1; i <argc; i++)
			cout << argv[i] << endl;	
	}
 
}
