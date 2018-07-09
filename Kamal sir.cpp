/**
    Bismillahir Rahmanir Rahim
    Md. Rakibul Islam
    Dept. of CSE, CoU
    **/
#include<bits/stdc++.h>
#define SQR(n) (n*n)
#define CHR getchar()
#define NL printf("\n")
#define PI 2.0*acos(0.0)
#define ll              long long int
#define ull             unsigned long long int
#define sc              scanf
#define gcd(a,b)        __gcd(a,b)
#define lcm(a,b)        ((a)*(b))/gcd(a,b)
#define pf              printf
#define MOD             1000000007
#define mx              123456789
#define Max(a,b) ((a>b)?a:b)
#define Min(a,b) ((a<b)?a:b)
#define ff first
#define D double
#define sz size()
#define ss second
#define PB push_back
#define MP make_pair
#define all(a) a.begin(),a.end()

#define _Max(a,b,c) Max(a,Max(b,c))
#define _Min(a,b,c) Min(a,Min(b,c))

#define BitCnt(a) __builtin_popcountll(a)
#define MEM(a,val) memset(a,val,sizeof(a))
using namespace std;
int main()
{
    string s, b;
    char d[100];
    int n, m, l, i, j, k, x1;
    string a[]= {"Archaeology", "Bengali", "English", "Anthropology", "Economics", "Public Administration", "Media & Journalism", "CSE", "ICT", "Law", "Math", "Physics", "Chemistry", "Statistics", "Pharmacy", "Finance and Banking", "Accounting and Information System", "Marketing"};
    //int c[]={"10", "11", "12"};
    cout<<"Enter Your Name :"<<" ";
    gets(d);
    cout<<"Enter Your Full Registration Number :"<<" ";
    cin>>s;
    cout<<"Name :"<<" ";
    for(int x3=0; x3<strlen(d); x3++)
    {
        cout<<d[x3];
    }
    cout<<endl;
    cout<<"Registration Number :"<<" "<<s<<endl;
    int t= s.size();
    int result=0, result1=0;
    //cout<<"Comilla University"<<endl;
    if(s[0]=='1')
    {
        for(i=1; i<=2; i++)
        {
            result = result * 10 + ( s[i] - '0' );
        }
        int x8=19;
        int x9=19-result;
        if(x9==1)
            cout<<"Honors"<<" "<<x9<<"st"<<" "<<"year"<<endl;
        else if(x9==2)
            cout<<"Honors"<<" "<<x9<<"nd"<<" "<<"year"<<endl;
        else if(x9==3)
            cout<<"Honors"<<" "<<x9<<"rd"<<" "<<"year"<<endl;
        else if(x9==4)
            cout<<"Honors"<<" "<<x9<<"th"<<" "<<"year"<<endl;
        else if(x9>4)
            cout<<"Honors completed"<<endl;
        else if(x9<0)
        {
            cout<<"This session is not yet admitted"<<endl;
            return 0;
        }

        //cout<<"Honors"<<x9<<endl;
        /*for(i=1; i<=2; i++)
        {
            result = result * 10 + ( s[i] - '0' );
        }*/
        //cout<<result<<endl;
        int x=result-1;
        int result1=0;
        if(x>=10)
            cout<<"Session:"<<" "<<"20"<<x<<"-"<<"20"<<result<<endl;
        else
            cout<<"Session:"<<" "<<"200"<<x<<"-"<<"200"<<result<<endl;
        for(i=3; i<=4; i++) //x1++)
        {
            result1=result1*10+(s[i]-'0');
        }
        cout<<"Departhment:"<<" "<<a[result1-1]<<endl;
        int result2=0;
        for(i=5; i<8; i++)
        {
            result2=result2*10+(s[i]-'0');
        }
        cout<<"Roll Number:"<<" "<<result2<<endl;
    }
    else if(s[0]=='2')
    {
        for(i=1; i<=2; i++)
        {
            result = result * 10 + ( s[i] - '0' );
        }
        int x8=19;
        int x9=19-result;
        if(x9==1)
            cout<<"Masters"<<" "<<x9<<"st year"<<endl;
        if(x9==2)
            cout<<"Masters"<<" "<<x9<<"nd year"<<endl;
        if(x9>2)
            cout<<"Masters completed"<<endl;
        else if(x9<0)
        {
            cout<<"This session is not yet admitted"<<endl;
            return 0;
        }
        //cout<<result<<endl;
        int x=result-1;
        int result1=0;
        if(x>=10)
            cout<<"Session:"<<" "<<"20"<<x<<"-"<<"20"<<result<<endl;
        else
            cout<<"Session:"<<" "<<"200"<<x<<"-"<<"200"<<result<<endl;
        for(i=3; i<=4; i++) //x1++)
        {
            result1=result1*10+(s[i]-'0');
        }
        cout<<"Department:"<<" "<<a[result1]<<endl;
        int result2=0;
        for(i=5; i<8; i++)
        {
            result2=result2*10+(s[i]-'0');
        }
        cout<<"Roll Number:"<<" "<<result2<<endl;
    }

    return 0;
}
