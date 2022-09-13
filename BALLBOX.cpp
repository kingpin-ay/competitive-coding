#include "bits/stdc++.h"
using namespace std;


int main () 
{
    
    int test_case ;
    cin >> test_case;

    while(test_case --)
    {
    	int balls , boxs ;

        cin >> balls;
        cin >> boxs ;

        
        if(balls < boxs)
        {
             cout << "NO" << "\n";
             continue;
        }
        else if(balls >= (boxs * ( boxs + 1 )/2 )) cout << "YES" << "\n" ;
        else cout << "NO" << "\n";
    }
}