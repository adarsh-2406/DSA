class Solution {
public:
    int passwordStrength(string password) {
        int strength = 0;
        set<char>st(password.begin(),password.end());
        for(auto x : st){
            if(x >= 'a' && x <= 'z') strength++;
            else if(x >= 'A' && x<= 'Z') strength += 2;
            else if(x >= '0' && x<= '9') strength += 3;
            else strength += 5;
        }
        return strength;
        // for(int i=0 ; i<password.size(); i++){
        //     if(st.count(password[i]) == )
        //     if(password[i] >= 'a' && password[i] <= 'z') count++;
        // }
    }
};