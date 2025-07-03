using namespace std;
class Solution {
public:
    int possibleStringCount(string word) {
        int total = 0;
        for(int i = 1; i < word.length(); i++){
            if(word[i-1] == word[i]){
                total++;
            }
        }
    }
};
