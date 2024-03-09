#include <iostream>
using namespace std;

int main() {
	
	
	int start = 0;
	int end = 100;
	int i = start;
	do
	{
		if (i % 2 == 0)
		{
			cout << i << " ";
		}
		i++;
	} while (i <= end);
	cout << endl;
	return 0;
}