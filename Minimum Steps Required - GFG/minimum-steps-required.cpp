//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

int minSteps(string str) {
  int count = 0;
		
		//if two consecutive character isn't same then we will increase the value of counter var
		for(int i= 1 ; i < str.size() ; i++){
		    if(str[i] != str[i-1]){
		        count++;
		    }
		}
		
		//if count is even then divide it by 2 and add 1 but if it is odd then divide by and add 2
		//why /2 ? because we counted 2 times for 1 steps each time 
		return count%2 == 0 ? count/2 +1 : count/2 +2;
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << minSteps(str) << endl;
    }
}

// } Driver Code Ends