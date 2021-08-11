#include <iostream>

using namespace std;

int main(){
    string s;
    cin>>s;
    int a=0;
    for (int i = 0; i < s.size(); i++)
    {
       if (s[i]=='4'|| s[i]=='7')
       {
          a++;
       }
    }
    if (a==7||a==4)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
}