#include<bits/stdc++.h>

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first 
#define ss second
#define setBits(x) builtin_popcount(x)
using namespace std;
const int N=1e3+2,MOD=1e9+7;

int main()
{
vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int maxval;
        bool ans;
        for(int i=0;i<n;i++){
            int val=candies[i];
            maxval=max(maxval,val);
        }
        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies>=maxval){
                
            }
            else{
                ans=0;
                return ans;
            }
        }
    }
 return 0;
}