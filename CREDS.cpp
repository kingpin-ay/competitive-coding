#include "bits/stdc++.h"
using namespace std;


int arr[10];

int main () 
{
    int t;
	cin >> t;
	int counter = 0;
	
	while(t--) {
	    int x ;
	    int y;
	    int z; 
	    cin >> x ;
	    cin >> y ;
	    cin >> z ;
	    arr[counter] = (x*4) + (y * 2) ;
	    counter++;
	}

	for(int i = 0; i<10 ; i++){
	    if(arr[i]==0) break;
	    cout<<arr[i]<<endl;
	}
	return 0;
}