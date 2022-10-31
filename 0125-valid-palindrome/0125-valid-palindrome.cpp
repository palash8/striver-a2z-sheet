class Solution {
public:
    bool valid_character(char ch)
    { if((ch>='a' && ch<='z') ||(ch>='A' && ch<='Z')||(ch>='0' && ch<='9'))
        return true;
     else
         return false;
        
    }
 char to_lowercase(char ch){
  if((ch>='0' && ch <= '9' )||(ch>='a' && ch <= 'z')){
      return ch;
  }
  else{
      return ch-'A'+'a';    
  }
     }     
bool checkPalindrome(string s)
{
    // Write your code here.
    int i=0,e=s.length()-1;
    while(i<=e){
        if(s[i]!=s[e])
            return false;
        else
        {
            i++;
            e--;
        }
    
    }
    return true;
}   
bool isPalindrome(string s) {
        string temp="";
        //removes whitespaces and special characters
        for(int i=0;i<s.length();i++)
        {
            if(valid_character(s[i]))
                temp.push_back(s[i]);
        }
        //convert to lowercase
        for(int j=0;j<temp.length();j++)
            temp[j]=to_lowercase(temp[j]);
        //check for pallindrome
        return  checkPalindrome(temp);
        
        
    }
};