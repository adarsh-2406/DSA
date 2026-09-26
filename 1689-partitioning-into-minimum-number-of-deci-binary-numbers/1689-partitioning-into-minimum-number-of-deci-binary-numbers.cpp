class Solution {
public:
    int minPartitions(string n) {
        char a = *max_element(n.begin() , n.end());
        int b = a - '0';
        return b;
    }
};