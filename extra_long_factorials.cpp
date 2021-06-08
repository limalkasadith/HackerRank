#include <bits/stdc++.h>
using namespace std;

//My Templates-----------------------
typedef long long ll;
typedef vector <int> vi;
typedef pair <int,int> pi;

#define F first
#define S secound
#define pb push_back
#define mp make_pair
#define FOR(i,n) for(int i=0; i<(n); i++)
#define REP(i,a,n) for(int i=(a); i<(n); i++)
#define DB(x) cout << #x": " << x << "\n"
#define P(x) cout << #x<< "\n"
#define printr(x) printf("%.3f\n",x)
//----------------------------------------

void extraLongFactorials(int n)   // factorial fuction using big Integers
{
    int num = 0, i, k, temp, rem = 0, count;
    vi bigInt(160);
    bigInt[0] = 1;
    count = 1; //digit count
    for(int num=1; num<=n; num++)
    {
        temp = 0;
        for(i=0; i<count; i++)
        {
            k = bigInt[i];
            temp = k*num + rem;
            if(temp < 10)
            {
                bigInt[i] = temp;
                rem = 0;
            }
            else
            {
                bigInt[i] = temp%10;
                rem = temp/10;
                if(i == count-1)
                    count++;
            }  
        }
    }
    for(auto i = bigInt.rbegin()+160-count; i != bigInt.rend(); i++)
        cout << *i;    
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    extraLongFactorials(n);

    return 0;
}


