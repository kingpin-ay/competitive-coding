#include "bits/stdc++.h"
using namespace std;




int main () 
{
    int test_case ;
    cin >> test_case;

    while(test_case --)
    {
    	int deposite , initial , deducted , months;

        cin >> initial;
        cin >> deposite;
        cin >> deducted;
        cin >> months;


        for(int i = 0 ; i < months ; i++)
        {
            initial = initial + deposite - deducted ;
        }

        cout << initial << "\n";
    }
}