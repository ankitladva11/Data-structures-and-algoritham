class Solution {
public:
   bool detectCapitalUse(string word) {
        int n=word.size();
        if (n==1)return 1;
        int s=97,e=122;
        int f1=0,f2=1;
         for(int i=0;i<n;i++){
            if (word[i]>60 && word[i]<=90){
                f1+=1;
            }
        }
        for(int i=1;i<n;i++){
            if (word[i]<97 || word[i]>122){
                f2=0;
            }
        }
        if(f2 || f1==n)
       {return 1;} 
       else{
           return 0;
       }
    }
};