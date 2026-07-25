class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // how can we detect anagrams?
        // call std::sort and it will return it in the form.
        // cat, tac, act -> act, act, act.
        // so this could be our "key"
        // our values could be the index of the vector to push to.

        // make a vector of strings (returning entire bucket)
        // go through the strs arr
        // sort the current word
        // look at the map and see if the sorted word is a key
        // if it is, then push the regular word at main_bucket[i]
        // if it is not, then push the new sorted wrod bucket to the end of the arrray,
        // get that index of that new bucket (size - 1)
        // make an entry in the map of sorted -> bucket_index.
        // this should wokr.

        unordered_map<string, size_t> indices{};
        vector<vector<string>> anagrams{};

        for (const auto &str : strs) {
            auto sorted{str};
            std::sort(sorted.begin(), sorted.end()); 

            auto it{indices.find(sorted)};
            if (it != indices.end()) {
                anagrams[it->second].push_back(str);
            } else {
                anagrams.push_back(vector<string>{});
                auto i{anagrams.size() - 1};
                anagrams[i].push_back(str);
                indices[sorted] = i;
            }
        }

        return anagrams;
    }
};
