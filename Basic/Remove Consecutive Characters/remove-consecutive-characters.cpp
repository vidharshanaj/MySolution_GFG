//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
    string removeConsecutiveCharacter(string s)
    {
      int n =s.length(); 
      string result;
      for(int i =0;i<n;i++)
      {
            if (i == n-1 || s[i] != s[i + 1])//i =n-1 is for aabb if not used also i+1 checks with null
            result.push_back(s[i]);
      }return result;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 




// } Driver Code Ends