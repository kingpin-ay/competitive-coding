#include "bits/stdc++.h"
using namespace std;


int main()
{
	int test_case;
	cin >> test_case;


	while(test_case -- )
	{
		int widht , height , cost;
		cin >> widht;
		cin >> height;
		cin >> cost;

		cout << cost * 2 * (widht + height) << "\n";
	}
}