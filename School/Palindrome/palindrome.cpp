//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		long long int temp = n;
        long long int rem = 0;
        if(n>=0 && n<=9)
            cout<<"Yes";
        // if(n==10||n<0)
        //     cout<<"No";
        else{
            while(temp){
              int digit = temp%10;
              rem = rem*10 + digit;
              temp=temp/10;
            }
            if(rem == n){
                cout<<"Yes";
            }
            else{
                cout<<"No";
            }
        }
	}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends