class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        //logic here is they have a gcd only when (str1+str2)==(str2+str1)
        return str1 + str2 == str2 + str1 ? str1.substr(0,gcd(str1.size(),str2.size())) : "";
        
    }
};