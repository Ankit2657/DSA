class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        string mapping[10] = {
            "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"
        };
        vector<string> result;
        result.push_back("");
        for (int d = 0; d < digits.size(); d++) {
            string letters = mapping[digits[d] - '0'];
            vector<string> temp;
            for (int i = 0; i < result.size(); i++) {
                for (int j = 0; j < letters.size(); j++) {
                    temp.push_back(result[i] + letters[j]);
                }
            }
            
            result = temp;
        }
        
        return result;
    }
};
