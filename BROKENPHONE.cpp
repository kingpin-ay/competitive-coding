#include "bits/stdc++.h"
using namespace std;


int main () 
{
    int test_case ;
    cin >> test_case;

    while(test_case --)
    {
    	int repair_cost , new_phone_cost;

    	cin >> repair_cost ;
    	cin >> new_phone_cost ;

    	if(repair_cost > new_phone_cost) cout << "NEW PHONE" << "\n";
    	if(repair_cost < new_phone_cost) cout << "REPAIR" << "\n";
    	if(repair_cost == new_phone_cost) cout << "ANY" << "\n";
    }
}