#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    //initializations
    unordered_set<char> set_char;
    int result = 0, i = 0, j = 0, n = s.size();
        
        
    while(j < n){
        if(set_char.count(s[j]) == 0){
            set_char.insert(s[j]);
            result = max(result, (int)set_char.size());
            j++;
        }
        else{
            set_char.erase(s[i]);
            i++;
        }
    }
    return result;
}


int main()
{
    string s = "aabaabbababa";
    cout << "The input String is " << s << endl;
    int length = lengthOfLongestSubstring(s);
     
    cout<<"The length of the longest non-repeating character "
        <<"substring is "
        << length<< "\n";
}
