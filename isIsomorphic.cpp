#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isIsomorphic(string s, string t)
{
    vector<int> v1(126, -1);
    vector<int> v2(126, -1);

    if (s.length() != t.length()){
        return false;
    }    

    for (int i = 0; i < s.length(); i++)
    {
        if (v1[s[i]] != v2[t[i]])
        {
            return false;
        }
        else
        {
            v1[s[i]] = v2[t[i]] = i;
        }
    }
    return true;
}

int main()
{

    string s, t;
    cin >> s >> t;

    if (isIsomorphic(s, t)){
        cout << "strings are isomorphic" << endl;
    }
    else{
        cout << "strings are not isomorphic" << endl;
    }

    return 0;
}