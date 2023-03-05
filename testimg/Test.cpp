#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <unordered_set>
#include <chrono>

using namespace std;

// Loads words and leaves only 5-letter words with no repetitions,
// also leaving only single world among anagrams.
vector<string> LoadWords(const std::string& filename) {
    vector<string> words;
    unordered_set<string> seen;
    ifstream file(filename);
    while (!file.eof()) {
        string word;
        file >> word;
        if (word.length() != 5) continue;
        string tmp = word;
        sort(tmp.begin(), tmp.end());
        if (seen.count(tmp) == 0) {
            seen.insert(tmp);
            words.push_back(word);
        }
    }
    return words;
}

void OutputAllSets(const vector<vector<bool>> &can_construct,
                   const vector<string> &words,
                   const vector<int> &masks,
                   vector<int> &result,
                   int mask,
                   int start_from) {
    if (result.size() == 5) {
        for (int i = 0; i < 5; ++i) {
            cout << words[result[i]] << ' ';
        }
        cout << "\n";
        return;
    }
    for (int cur_word = start_from; cur_word < (int)words.size(); ++cur_word) {
        if (((mask & masks[cur_word]) == masks[cur_word]) && (result.size() == 4 || can_construct[3-result.size()][mask ^ masks[cur_word]])) {
            result.push_back(cur_word);
            OutputAllSets(can_construct, words, masks, result, mask ^ masks[cur_word], cur_word + 1);
            result.pop_back();
        }
    }
}

void Solve(const vector<string> &words) {
    vector<vector<bool>> can_construct(5, vector<bool>(1 << 26));
    vector<int> masks(words.size());
    for (int i = 0; i < (int) words.size(); ++i) {
        int mask = 0;
        for (auto c: words[i]) {
            mask |= 1 << (c - 'a');
        }
        masks[i] = mask;
        can_construct[0][mask] = true;
    }

    for (int cnt = 0; cnt < 4; ++cnt) {
        for (int mask = 0; mask < (1 << 26); ++mask) {
            if (!can_construct[cnt][mask]) continue;
            for (int i = 0; i < (int) words.size(); ++i) {
                if ((masks[i] & mask) == 0) {
                    can_construct[cnt + 1][masks[i] | mask] = true;
                }
            }
        }
    }

    cerr << "DP done\n";

    vector<int> result;
}
    int main() {
        // start the timer
        auto start = std::chrono::high_resolution_clock::now();
        vector<string> words = LoadWords(R"(words_alpha.txt)");
        Solve(words);
        // stop the timer
        auto stop = std::chrono::high_resolution_clock::now();
         //calculate the duration
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

        // print the duration
        std::cout << "Time taken: " << duration.count() << " microseconds" << std::endl;
        return 0;
    }
