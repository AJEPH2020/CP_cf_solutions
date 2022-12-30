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
#include <numeric>
// #include <boost/math/common_factor.hpp>

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
        int l; cin >> l;
        int r; cin >> r;
        // int k; cin >> k;

        // map<int,int> mp;

        // vector<int> arr;
        // for(int i=0; i<n; i++)
        // {
        //     int x; cin >> x;
        //     // mp[x]=i;
        //     arr.push_back(x);
        // }

        auto ans = 0;
        // auto it=mp.begin();
        // for(int i=0; i<k; i++)
        // {
        //     arr[it->second] = 1000000000;

        //     it++;
        // }

        // vector<long> min2L (n, 0);
        // min2L[0]=2*arr[0];
        // for(int i=1; i<n; i++)
        // {
        //     if(2*arr[i] < min2L[i-1]) min2L[i] = 2*arr[i];
        //     else min2L[i] = min2L[i-1];
        // }

        // vector<long> min2R (n, 0);
        // min2R[n-1]=2*arr[n-1];
        // for(int i=n-2; i>=0; i--)
        // {
        //     if(2*arr[i] < min2R[i+1]) min2R[i] = 2*arr[i];
        //     else min2R[i] = min2R[i+1];
        // }

        for(int i=l; i<=r; i++)
        {

            // int minBetw = arr[i];

            for(int j=i+1; j<=r; j++)
            {

                for(int k=j+1; k<=r; k++)
                {
                    if( std::lcm( std::lcm(i,j) , k ) >= i + j + k) ans++;
                }

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