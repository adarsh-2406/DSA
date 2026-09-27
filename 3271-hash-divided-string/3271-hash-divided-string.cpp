class Solution {
public:
    string stringHash(string s, int k) {
        string result = "";
        int a = k;
        int sum = 0;
        for(int i= 0; i<s.size();i++){
            if(a !=0 ){
                sum += s[i] - 'a';
                a--;
            }
            else {
                result += sum%26 + 'a';
                a = k;
                sum = s[i] - 'a';
                a--;
            }

        }
        result += sum%26 + 'a';
        return result;
    }
};