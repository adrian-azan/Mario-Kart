#include "character.h"

int main()
{

	character test = character();

	cout << test.name() << endl;
	cout << test.owner() << endl << endl;

	test.name("Mario");
	test.owner("Adrian");

	cout << test.name() << endl;
	cout << test.owner() << endl << endl;



	char pause;
	cin >> pause;
	return 0;
}