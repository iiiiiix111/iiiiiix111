#include<iostream>
#include<string>
#include<set>
#include<unordered_set>
#include<unordered_map>
#include<cmath>
using std::cin,std::cout,std::string,
std::set,std::unordered_set,std::unordered_map;

int num(const string &s,unordered_map<string,int> &s2)
{
    set<string>s1;
    int sum=0;
    for (int i=s.size();i>0;i--)
    {
        for (int j=0;j<s.size();j++) {
            if (s2.find(s.substr(j,i))!=s2.end())
                sum+=s2[s.substr(j,i)];
            else
            s1.insert(s.substr(j,i));
        }
    }
    s2[s]=sum+s1.size();
    return s2[s];
}
int main()
{
    int N;
    cin>>N;
    string s;
    string Str="-1";
    int flag;
    while (N--) {
        flag=0;
        Str="-1";
        cin >> s;
        unordered_map<string,int> s2(40);
        for (int i=2;i<=s.size();i++) {
            for (int j = 0; j+i <= s.size(); j++) {
                if (num(s.substr(j,i),s2) % 2 == 0) {
                    Str = s.substr(j,i);
                    flag = 1;
                    break;
                }
            }
            if (flag)
                break;
        }
        cout<<Str<<'\n';
    }

    return 0;
}