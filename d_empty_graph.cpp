#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <functional>
#include <stack>
#include <queue>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <unordered_set>
#include <math.h>
 
typedef long double LD;
typedef long long LL;
typedef int64_t I64;
// Many of the solutions require mod by 10e^9+7
#define MOD 1000000007
// The least significant bit
#define LSB(i) ((i) & -(i))
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; cin >> T;
    for (auto case_num = 1; case_num <= T; ++ case_num) {
        int n; cin >> n;
        int k; cin >> k;

        map<int,int> mp;

        vector<int> arr;
        for(int i=0; i<n; i++)
        {
            int x; cin >> x;
            mp[x]=i;
            arr.push_back(x);
        }

        auto ans = INT_MIN;
        auto it=mp.begin();
        for(int i=0; i<k; i++)
        {
            arr[it->second] = 1000000000;

            it++;
        }

        vector<long> min2L (n, 0);
        min2L[0]=2*arr[0];
        for(int i=1; i<n; i++)
        {
            if(2*arr[i] < min2L[i-1]) min2L[i] = 2*arr[i];
            else min2L[i] = min2L[i-1];
        }

        vector<long> min2R (n, 0);
        min2R[n-1]=2*arr[n-1];
        for(int i=n-2; i>=0; i--)
        {
            if(2*arr[i] < min2R[i+1]) min2R[i] = 2*arr[i];
            else min2R[i] = min2R[i+1];
        }

        for(int i=0; i<n-1; i++)
        {

            int minBetw = arr[i];

            for(int j=i+1; j<n; j++)
            {

                int mn = INT_MAX;
                //to optimise



                long ltt = INT_MAX;
                if(i>0) ltt=min2L[i-1];

                if(ltt<mn) mn=ltt;


                minBetw = min(minBetw,arr[j]);

                if(minBetw<mn) mn=minBetw;


                long rtt = INT_MAX;
                if(j<n-1) rtt=min2L[j+1];

                if(rtt<mn) mn=rtt;




                // for(int u=0; u<i; u++)
                // {
                //     long y = 2*arr[u];

                //     if(y<mn) mn=y;

                // }

                // for(int u=i; u<=j; u++)
                // {
                //     long y = arr[u];

                //     if(y<mn) mn=y;

                // }

                // for(int u=j+1; u<n; u++)
                // {
                //     long y = 2*arr[u];

                //     if(y<mn) mn=y;

                // }

                ans = max(ans,mn);

            }
        }

        // process each case
        // CODE HERE
        // CODE HERE
        // output each answer for test case
        // std::cout >> std::fixed;
        // cout >> std::setprecision(8);
        cout << ans << endl;
    }
    return 0;
}