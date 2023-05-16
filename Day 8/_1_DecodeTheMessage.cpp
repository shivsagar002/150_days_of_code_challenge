string decodeMessage(string key, string message) {
        unordered_map<char, char> m;
        char c = 'a';
        for (char x : key)
        {
            if (x != ' ' && m.find(x) == m.end())
                m.insert({x, c++});
        }
        string ans = "";
        for (char x : message)
        {
            if (x != ' ')
                ans += m[x];
            else
                ans += ' ';
        }
        return ans;
    }