class Solution {
public:
    string removeDuplicateLetters(string s) {

        stack<char> st;

        vector<int> last(26, 0);
        vector<bool> used(26, false);

        // Find last occurrence
        for (int i = 0; i < s.length(); i++) {
            last[s[i] - 'a'] = i;
        }

        for (int i = 0; i < s.length(); i++) {

            // Already present in stack
            if (used[s[i] - 'a'])
                continue;

            // Remove bigger characters if they occur again
            while (!st.empty() &&
                   st.top() > s[i] &&
                   last[st.top() - 'a'] > i) {

                used[st.top() - 'a'] = false;
                st.pop();
            }

            st.push(s[i]);
            used[s[i] - 'a'] = true;
        }

        // Convert stack to string
        string result = "";

        while (!st.empty()) {
            result.push_back(st.top());
            st.pop();
        }

        reverse(result.begin(), result.end());

        return result;
    }
};