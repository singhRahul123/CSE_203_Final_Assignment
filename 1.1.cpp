#include<bits/stdc++.h>
#define sf(f)                            scanf("%d",&f)
#define pf(f)                            printf("%d\n",f)
#define PI                               3.1415926535897932385
#define size                             3000000
#define mp                               make_pair
#define pb                               push_back
#define one(x)                           __builtin_popcount(x)              ///int
#define onel(x)                          __builtin_popcountl(x)             ///long int
#define onell(x)                         __builtin_popcountll(x)            ///long long
using namespace std;
typedef long long ll;

///int dx[]= {-1,-1,0,0,1,1};
///int dy[]= {-1,0,-1,1,0,1};
///int dx[]= {0,0,1,-1};                 /*4 side move*/
///int dy[]= {-1,1,0,0};                 /*4 side move*/
///int dx[]= {1,1,0,-1,-1,-1,0,1};       /*8 side move*/
///int dy[]= {0,1,1,1,0,-1,-1,-1};       /*8 side move*/
///int dx[]={1,1,2,2,-1,-1,-2,-2};       /*knight move*/
///int dy[]={2,-2,1,-1,2,-2,1,-1};       /*knight move*/
///Always Remember   'A'=65,'Z'=90 'a'=97 'z'=122 '0'=48

void findposition(string & strng, string & substrng)
{
//cout<<*strng<<"  "<<*substrng<<endl;

    int sbl= substrng.length();
    int max= strng.length()- sbl +1;

    int i=0, j=0 ,k=0;

    for(i = 0, j = 0; strng[i]!='\0' && substrng[j]!='\0'; i++)
    {
        if(strng[i] == substrng[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }

    if(j == sbl)
        cout<<substrng<<"   found at position "<< i - j + 1<<" from :   "<<strng<<endl;
        //printf("%s found at position %d from %s \n\n",substrng,i-j+1,strng);
    else
        cout<<substrng<<"   not found from :   "<<strng<<endl;
        //printf("%s not found from %s\n\n",substrng,strng);

}
int main()
{
    string S="JOHN PAUL JONES", T="A THING OF BEAUTY IS A JOY FOREVER";
    string sb1="JO",sb2="JOY",sb3="A",sb4="THE";
/*
    findposition(&S,&sb1);
    findposition(&T,&sb1);
    findposition(&S,&sb2);
    findposition(&T,&sb2);
    findposition(&S,&sb3);
    findposition(&T,&sb3);
    findposition(&S,&sb4);
    findposition(&T,&sb4);
*/
    findposition(S,sb1);
    findposition(T,sb1);cout<<endl;
    findposition(S,sb2);
    findposition(T,sb2);cout<<endl;
    findposition(S,sb3);
    findposition(T,sb3);cout<<endl;
    findposition(S,sb4);
    findposition(T,sb4);cout<<endl;
    return 0;
}
