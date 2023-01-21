class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string>temp;
        vector<string>ip;
        get_ip_addresses(temp,ip,s,0);
        return ip;
    }
    void get_ip_addresses(vector<string>&temp,vector<string>&ip,string &s,int index)
    {
        if(index==s.length() && temp.size()==4)
        {
            string validip=temp[0]+'.'+temp[1]+'.'+temp[2]+'.'+temp[3];
            ip.push_back(validip);
            return;
        }
        string tmpstr="";
        for(int i=index;i<s.length() && temp.size()<4;i++)
        {
            //if(s[i]-'0'>9)continue;
            tmpstr+=s[i];
            int tempint=stoi(tmpstr);
            if(0<=tempint && tempint<=255)
            {
                temp.push_back(tmpstr);
                get_ip_addresses(temp,ip,s,i+1);
                temp.pop_back();
            }
            if(tempint<=0 ||tempint>255)
                break;
        }
    }
};