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
 


long long check(vector<long long> a, long long n){

    if (n==0)
    {
        return 0;
    }
    
    if (n==1)
    {
        if (a[0]>=0)
        {
            return a[0];
        }
        else
        {
            return -a[0];
        }
    }

    long long ptr1 = 0;
    long long ptr2 = 1;

    long long ans = 0;

    long long finalDif = a[n-1];

    while (ptr2<n)
    {
        // if (a[ptr1]==a[ptr2])
        // {
        //     ptr1++;
        //     ptr2++;
        // }
        // else 
        if (a[ptr1]>a[ptr2])
        {
            long long x = a[ptr1]-a[ptr2];
            ans += x;

            ptr1++;
            ptr2++;
        }
        else
        {

            long long x = a[ptr2]-a[ptr1];

            finalDif -= x;

            // a[ptr1]++;
            ans += x;

            ptr1++;
            ptr2++;

        }

        // cout << "subAns: " << ans << endl;

    }


    if (finalDif>=0)
    {
        ans += finalDif;
    }
    else
    {
        ans -= finalDif;
    }
    

    return ans;    


}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long noOfLocks; cin >> noOfLocks;
    vector<long long> a;
    for (long long i = 0; i < noOfLocks; i++)
    {
        long long x; cin >> x;
        a.push_back(x);
    }

    long long T; cin >> T;
    for (auto case_num = 1; case_num <= T; ++ case_num) {
        long long n; cin >> n;
        
        // process each case
        auto ans = check(a,n);
        // CODE HERE
        // CODE HERE
        // output each answer for test case
        // std::cout >> std::fixed;
        // cout >> std::setprecision(8);
        cout << ans << endl;
    }
    return 0;
}