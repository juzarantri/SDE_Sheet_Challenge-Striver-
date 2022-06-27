#include <bits/stdc++.h>
vector<string> solve(string s, vector<string>& wordDict,int start){
        vector<string> ans;
        if(start == s.length()) {ans.push_back(""); }
            
        for(int k = start; k < s.length(); k++){
            string prefix = s.substr(start,k-start+1);
            if(find(wordDict.begin(),wordDict.end(),prefix) != wordDict.end()){
                vector<string> suffixes = solve(s,wordDict,k+1);
                for(string suffix : suffixes){
                    ans.push_back(prefix + (suffix == "" ? "" : " ") + suffix);
                }
            }
            
        }
        return ans;
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        return solve(s,wordDict,0);
    }