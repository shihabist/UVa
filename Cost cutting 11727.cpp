#include <bits/stdc++.h>

#define dbug(x) cout << '>' << #x << ':' << x << endl
#define clr(x, v) memset(x, v, sizeof(x))
#define clr1(x) memset(x, 1, sizeof(x))
#define clr0(x) memset(x, 0, sizeof(x))
#define clrn(x) memset(x, '\0', sizeof(x))

#define eef else if
#define inpi inputt[i]
#define sf scanf
#define pf printf
#define i64 long long
#define ui64 unsigned long long

#define sqr(a) ((a)*(a))
#define PI          3.141592653589793
#define pi          (2.0*acos(0.0))
#define MAX 200000
#define pcount(num)  __builtin_popcount(num)
#define ALL(x) x.begin(), x.end()
#define sz size()
#define pb push_back
#define popb pop_back
#define mp make_pair
#define fi first
#define se second
#define Contains(X,item) ((X).find(item) != (X).end())
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ff(i,s,e) for(int i=(s);i<(int)(e);i++)
#define FORIT(i, m) for (__typeof((m).begin()) i=(m).begin(); i!=(m).end(); ++i)
#define FAST ios_base::sync_with_stdio(0)
#define ps(x) cout<<"Case "<<++x<<": "
#define pcs(x) pf("Case %d: ", ++x)
#define newl '\n'
#define inf (1<<29)
#define MOD 1000000007
#define MX 1000002

using namespace std;
template<class T1> void deb(T1 e){cout<<e<<endl;}
template<class T1,class T2> void deb(T1 e1,T2 e2){cout<<e1<<" "<<e2<<endl;}
template<class T1,class T2,class T3> void deb(T1 e1,T2 e2,T3 e3){cout<<e1<<" "<<e2<<" "<<e3<<endl;}
template<class T1,class T2,class T3,class T4> void deb(T1 e1,T2 e2,T3 e3,T4 e4){cout<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<endl;}
template<class T1,class T2,class T3,class T4,class T5> void deb(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5){cout<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<" "<<e5<<endl;}
template<class T1,class T2,class T3,class T4,class T5,class T6> void deb(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5,T6 e6){cout<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<" "<<e5<<" "<<e6<<endl;}

///int rrr[]={1,0,-1,0};int ccc[]={0,1,0,-1}; //4 Direction
///int rrr[]={1,1,0,-1,-1,-1,0,1};int ccc[]={0,1,1,1,0,-1,-1,-1};//8 direction
///int rrr[]={2,1,-1,-2,-2,-1,1,2};int ccc[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
///int rrr[]={2,1,-1,-2,-1,1};int ccc[]={0,1,1,0,-1,-1}; //Hexagonal Direction
///int month[]={31,28,31,30,31,30,31,31,30,31,30,31}; //month

int BigMod(i64 B,i64 P,i64 M){
    i64 R=1; while(P>0)      {
        if(P%2==1){R=(R*B)%M;}P/=2;B=(B*B)%M;}
        return (int)R;} /// (B^P)%M

int main()
{
    FAST;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    int a[3], kase = 0, t;
    cin>>t;
    while(t--)
    {
        cin>>a[0]>>a[1]>>a[2];
        sort(a, a+3);
        ps(kase);
        cout<<a[1]<<newl;

    }

    return 0;
}
