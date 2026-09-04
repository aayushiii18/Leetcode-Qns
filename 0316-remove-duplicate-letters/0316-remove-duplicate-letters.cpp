class Solution {
public:
    string removeDuplicateLetters(string s) {
        stack<char> st;
        int freq[26] = {0};
        bool present[26] = {false};

        for(char c : s)
            freq[c-'a']++;

        for(char c : s) {
            freq[c-'a']--;

            if(present[c-'a'])
                continue;

            while(!st.empty() && st.top() > c && freq[st.top()-'a'] > 0) {
                present[st.top()-'a'] = false;
                st.pop();
            }

            st.push(c);
            present[c-'a'] = true;
        }

        string ans;
        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};