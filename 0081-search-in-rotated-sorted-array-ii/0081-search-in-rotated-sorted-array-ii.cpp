class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target) return true;
            // check edge case for duplicate , aggr low , mid , high tino same ho jaayega toh hum check nhi kr payenge ki konsa part sorted hai;
             if(nums[low] == nums[mid] && nums[mid] == nums[high]){ 
                low++; 
                high--;
                continue;
            }
            if(nums[low] <= nums[mid]){ // checking left half sorted or not;
                if(nums[low] <= target && target<=nums[mid]){ // checking target lies in left or not;
                    high = mid-1;
                }
                else low = mid+1;
            }
            else{
                if(nums[mid]<=target && target<=nums[high]){ // checking target lies in right or not;
                    low = mid+1;
                }
                else high = mid-1;
            }
        }
        return false;
    }
};