#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

map<char, int> charToNum; // map to store the correspondence between character and number
list<string> words; // vector to store the words in the equation

bool isValid(list<int>& nums) {
    // function to check if a mapping of characters to numbers is valid
    for (int i = 0; i < words.size() - 1; i++) {
        int sum = 0;
        for (char c : words[i]) {
            sum = sum * 10 + nums[charToNum[c]];
        }
        if (sum != nums[charToNum[words[i][0]]]) {
            // if the number starts with 0 and has more than one digit, it's not valid
            if (words[i][0] == 'A' && sum != 0) {
                return false;
            }
            else {
                return false;
            }
        }
    }
    // check if the last word is valid
    int sum = 0;
    for (char c : words[words.size() - 1]) {
        sum = sum * 10 + nums[charToNum[c]];
    }
    if (sum != nums[charToNum[words[words.size() - 1][0]]]) {
        // if the number starts with 0 and has more than one digit, it's not valid
        if (words[words.size() - 1][0] == 'A' && sum != 0) {
            return false;
        }
        else {
            return false;
        }
    }
    return true;
}

int main() {
    while (true) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }
        charToNum.clear();
        words.clear();
        for (int i = 0; i < n; i++) {
            string word;
            cin >> word;
            words.push_back(word);
            for (char c : word) {
                charToNum[c] = -1;
            }
        }
        int num = 0;
        for (auto& p : charToNum) {
            p.second = num;
            num++;
        }
        int count = 0;
        list<int> nums(num);
        for (int i = 0; i < 10; i++) {
            nums[0] = i;
            for (int j = 1; j < num; j++) {
                nums[j] = (nums[j - 1] + 1) % 10;
                if (nums[j] == nums[j - 1]) {
                    nums[j] = (nums[j] + 1) % 10;
                }
            }
            do {
                if (isValid(nums)) {
                    count++;
                }
            } while (next_permutation(nums.begin(), nums.end()));
        }
        cout << count << endl;
    }
    return 0;
}
