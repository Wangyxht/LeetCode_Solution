#include<string>
#include<iostream>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0){
            return 0;
        }
        if(s.length()==1){
            return 1;
        }
        string ans;
        ans=s[0];
        int maxlen=0;
        for(int i=0;i+1<=s.length();++i){  
            int pos=ans.find(s[i+1]);          
            if(pos!=string::npos||s[i+1]==0){
                if(maxlen<=ans.length()){
                    maxlen=ans.length();
                }
                if(s[i+1]!='\0'){
                    if(s[i+1]==s[i]){
                        ans=s[i+1];
                    }
                    else{//此时s当中s[i+1]与ans中pos位置字符一致
                        
                        i=i-ans.length()+pos+1;//i指向原来ans中pos位置
                        ans=ans[pos+1];//ans变为原来pos位置下一个位置
                        //执行for语句中++i，ans与i同步
                    }
                }


            }
            else{
                ans+=s[i+1];
            }
            

        }
        return maxlen;
    }
};