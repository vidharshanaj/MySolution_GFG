//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> minAnd2ndMin(int a[], int n) {
     int smallest = a[0], secondSmallest =INT_MAX;
   
   for(int i =1;i<n;i++)
   {
      if(a[i]<smallest)
       smallest = a[i];
   }
   for(int j =0;j<n;j++)
   {
       if(a[j]<secondSmallest && a[j]>smallest)
         secondSmallest = a[j];
   }
     if(secondSmallest == INT_MAX)
       return {-1};
    
    return {smallest,secondSmallest};
}