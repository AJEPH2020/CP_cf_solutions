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
 

void check(){
    LL n; cin >> n;
    
    // cout << "----" << n << endl;

    map<LL,bool> mp;

    bool no = 0;

    LL j = 0;
    while(j<n){
        LL x; cin >> x;

        if(mp[x]==1)
        {
            cout << "NO" << endl;
            no = 1;
            break;
        }

        mp[x]=1;

        j++;
    }

    while(j<n){
        LL x; cin >> x;
        
        j++;
    }

    if(!no){
        cout << "YES" << endl;
    }

    return;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    LL T; cin >> T;
    for (auto case_num = 1; case_num <= T; ++ case_num) {

        // inputs
        
        check();

    }
    return 0;
}