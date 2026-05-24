#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        int l = 0;
        int r = n-1;
        int mn = 1;
        int mx = n;
        while(l <= r) 
        {
            if(a[l] == mn) 
            {
                l++;
                mn++;
            } 
            else if(a[l] == mx) 
            {
                l++;
                mx--;
            } 
            else if(a[r] == mn) 
            {
                r--;
                mn++;
            } 
            else if(a[r] == mx) 
            {
                r--;
                mx--;
            } 
            else 
            {
                cout << l+1 << " " << r+1 << endl;
                break;
            }
        }
        if(l > r) 
        {
            cout << -1 << endl;;
        }
    }
    return 0;
}