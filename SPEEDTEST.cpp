#include "bits/stdc++.h"
using namespace std;



int main () 
{
    int test_case ;
    cin >> test_case;

    while(test_case --)
    {
    	int dist_alice , time_alice , dist_bob , time_bob;

        cin >> dist_alice;
        cin >> time_alice;
        cin >> dist_bob;
        cin >> time_bob;

        float speed_alice = (float) dist_alice / time_alice ;
        float speed_bob = (float) dist_bob / time_bob;

        
        if(speed_alice > speed_bob) cout << "Alice" << "\n";
        if(speed_alice < speed_bob) cout << "Bob" << "\n";
        if(speed_alice == speed_bob) cout << "Equal" << "\n";
    }
}