// Problem Link : https://leetcode.com/problems/number-of-different-integers-in-a-string/

class Solution {
public:
    int numDifferentIntegers(string word) {      
        int numDifferentIntegers(string word) {      
        unordered_set<string> st;
        for(int i=0;i<word.size();i++){
            if(isdigit(word[i])){
                string s="";
                int temp=i;
                while(isdigit(word[temp]))
                    s+=word[temp] , temp++ ;
                cout<<s<<endl;
                int k=0;
                while(s[k] == '0')
                    s.erase(k,1);
                st.insert(s);
                cout<<s<<endl;
                i=temp;                
            }
        }
        return st.size();
    }
    }
};
