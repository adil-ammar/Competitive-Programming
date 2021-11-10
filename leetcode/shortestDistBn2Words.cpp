#include<bits/stdc++.h>
using namespace std;

int shortestDistance(vector<string>& wordsDict, string word1, string word2) {
      
    vector<string>::iterator itr;
    int w1 = -1, w2 = -1, result = INT_MAX;
        
    for(int i = 0; i < wordsDict.size(); i++){
        if(word1 == wordsDict[i])
            w1 = i;
        else if(word2 == wordsDict[i])
            w2 = i;
          
        if(w1 != -1 && w2 != -1) result = min(result, abs(w1-w2));
     }
     return result;
}

int main(){
    vector<string> v = {"practice", "makes", "perfect", "coding", "makes"};
    string word1 = "coding", word2 = "makes";
    cout<<shortestDistance(v, word1, word2)<<endl;

    word1 = "coding";
    word2 = "practice";
    cout<<shortestDistance(v, word1, word2)<<endl;
    return 0;
}
