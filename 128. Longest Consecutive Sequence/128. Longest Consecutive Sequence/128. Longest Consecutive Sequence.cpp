int longestConsecutive(vector<int>& nums) {
    if (!nums.size()) { return 0; }
    unordered_map<int, int> m;
    int ans = 1, n;
    for (int i = 0; i < nums.size(); i++) {
        m[nums[i]] = 0;
    }
    for (auto i : m)
    {
        if (m.find(i.first + 1) != m.end() && !m[i.first + 1])
        {
            m[i.first] += 2;
        }
        else if (m.find(i.first + 1) != m.end())
        {
            m[i.first] += m[i.first + 1];
        }
        if (m.find(i.first - 1) != m.end() && !m[i.first - 1]) {
            if (m[i.first]) {
                m[i.first]--;
            }
            m[i.first] += 2;
        }
        else if (m.find(i.first - 1) != m.end()) {
            if (m[i.first]) {
                m[i.first]--;
            }
            m[i.first] += m[i.first - 1];
        }
        if (m[i.first] > ans) {
            ans = m[i.first];
        }
        n = i.first;
        while (m.find(n + 1) != m.end() && m[n + 1]) {
            m[n + 1] = m[n];
            n++;
        }
        n = i.first;
        while (m.find(n - 1) != m.end() && m[n - 1]) {
            m[n - 1] = m[n];
            n--;
        }
    }
    return ans;
}