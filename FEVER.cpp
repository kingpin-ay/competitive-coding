#include "bits/stdc++.h"
using namespace std;


int main()
{
	int test_case ;
	cin >> test_case ;

	while(test_case--)
	{
		int temperature;
		cin >> temperature;

		if(temperature > 98)
		{
			cout << "YES" << "\n";
		}
		else{
			cout << "NO" << "\n";
		}
	}
}

