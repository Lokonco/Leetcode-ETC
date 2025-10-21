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
<<<<<<< HEAD:LeetCode/LC3330.cpp
        return total +1;
=======
        return total + 1;
>>>>>>> 67c90cb63d8458cb89f0d01f7b4bf60e0679c0bd:LC3330.cpp
    }
};git 
