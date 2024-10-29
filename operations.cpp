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

class Solution{
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n=operations.size();
        int x=0;
        for(int i=0;i<n;i++){
            string s=operations[i];
            if(operations[i]=="--X" || "X--"){
                x-=1
            }
            else if(operations[i]=="++X" || "X++"){
                x+=1
            }
    }
    return x;
    }
};
int main()
{
 return 0;
}