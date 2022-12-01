class LongestSubstring {
 public:
  int lengthOfLS(string s) {
    int ans = 0;
    vector<int> count(128); //Using Vector
    int l = 0;
    for (int u = 0; u < s.length(); ++u) {
      ++count[s[u]];
      while (count[s[u]] > 1)
        --count[s[l++]];
      ans = max(ans, r - l + 1);
    }

    return ans;
  }
};
