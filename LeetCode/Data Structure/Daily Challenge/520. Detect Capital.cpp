class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.length();
        int high=0,low=0;
        for(int i=0;i<n;i++){
               if (islower(word[i])){
                   low++;
        }else{
            high++;
        }
     }
     if(high==n or low==n or (isupper(word[0])and low==n-1)){
         return true;
     }else{
         return false;
     }
    }
};
