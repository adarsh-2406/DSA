class Solution {
public:
    int arrangeCoins(int n) {       
// using binary search;
//         long long low = 0, high = n;

//         while (low <= high) {
//             long long mid = low + (high - low) / 2;
//             long long coins = mid * (mid + 1) / 2;

//             if (coins == n)
//                 return mid;
//             else if (coins < n)
//                 low = mid + 1;
//             else
//                 high = mid - 1;
//         }

//         return high;
//     }
// };
// using AP; solve the equation;
        return  (sqrt(8.0*n +1) - 1)/2;
    }
};