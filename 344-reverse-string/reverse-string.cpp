class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int st =0;
        int e=n-1;
        while(st < e){
    s[st] ^= s[e];
    s[e] ^= s[st];
    s[st] ^= s[e];
    st++; e--;
}

    }
};