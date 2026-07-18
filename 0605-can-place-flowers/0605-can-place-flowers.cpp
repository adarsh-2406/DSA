class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0 ;
        int size = flowerbed.size();
        if(size == 1 && flowerbed[0] == 0) return true;
        
        for(int i = 0 ; i < size ; i++){
            if(count >= n) return true;

            if(i == 0 && size > 1 && flowerbed[i] == 0 && flowerbed[i+1] == 0) {
                flowerbed[i] = 1 ;
                count++;
            }
            else if(i == size - 1 && flowerbed[i] == 0 && flowerbed[i-1] ==0) {
                flowerbed[i] = 1 ;
                count++;
            }
            else if(( i > 0 && i < size - 1) && flowerbed[i] == 0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0) {
                flowerbed[i] = 1;
                count++;

            }
        }
        return count >= n;
    }
};