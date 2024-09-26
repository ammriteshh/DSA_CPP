class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> m1, m2; //two maps are created. these maps will store character mappings where m1 string's characters will mapped with t's characters and vice-versa
        if(s.size() != t.size()){
            return false;
        }
        for(int i=0; i<s.size();  i++){
            if(m1.find(s[i]) != m1.end()){ //if s[i] character exist in m1 map
                if(m1[s[i]] != t[i]){ //if s[i] is mapped in m1 and its mapped value is not t[i]
                    return false;
                }
            }
            else if(m2.find(t[i]) != m2.end()){
                if(m2[t[i]] != s[i]){
                    return false;
                }
            }
            else{
                //if s[i] and t[i] are not mapped, we'll map it s[i] to t[i] and t[i] to s[i]
                m1[s[i]] = t[i];
                m2[t[i]] = s[i];
            }
        }
        return true; //if after traversing all strings, there is no mismatch, then it is isomorphic{true}
    }
};