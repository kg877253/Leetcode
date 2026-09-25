class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;

        int freq[26] = {0};

        for (int i = 0; i < s.size(); i++) {
            int alphabet = s[i] - 'a';
            int alphabet2 = t[i] - 'a';
            freq[alphabet]++;
            freq[alphabet2]--;
        }

        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0)
                return false;
        }
        return true;
    }
};