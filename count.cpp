#include <bits/stdc++.h>
using namespace std;

int countZeroes(int arr[], int n) 
{
    int c=0;
    for(int i=n-1;i>=0;--i)
    { if(arr[i]==0)
      { 
        c++;
      }
    }
    return c;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int ans=countZeroes(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
