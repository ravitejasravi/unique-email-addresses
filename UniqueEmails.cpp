class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        
        unordered_map<string, int> mp;
        int count = 0;

        for(int i = 0; i < emails.size(); i++) {

            string temp = "";
            bool plus = false, at = false;

            for(int j = 0; j < emails[i].length(); j++) {
                
                if(plus && emails[i][j] != '@')
                    continue;

                else if(emails[i][j] == '+')
                    plus = true;

                else if((emails[i][j] != '.' && !plus) || at) {
                    temp += emails[i][j];

                    if(emails[i][j] == '@')
                        at = true;

                }
                
                else if(plus) {j--, plus = false;}

            }

            if(mp[temp] == 0) {
                count++;
                mp[temp]++;
            }

        }
        
        return count;

    }
};