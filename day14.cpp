// //pair sum finder

// #include <iostream>
// using namespace std;
// int main(){
//     int a =0;
//     int b =0;
//     int arr[] = {2,7,11,15};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int target = 13;
//     for(int i =0; i <n;i++){
//         for(int j = i+1; j <n; j++){
//             if(arr[i] + arr[j] == target){
//                 a= i+1;
//                 b = j+1;
//                 break;
//             }
//         }
//     }
//     cout << "(" << a << "," << b << ")";

// }

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> pairsum(vector<int> nums,int target){
//     vector<int> ans;
//     int n = nums.size();
//     for(int i =0; i <n;i++){
//         for(int j = i+1; j <n; j++){
//             if(nums[i] + nums[j] == target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//     return ans;
// }

// int main(){
//     vector<int> nums = {2,7,13,15};
//     int target = 9;
    
//     vector<int> ans = pairsum(nums, target);
//     cout << ans[0] <<"," << ans[1];
    
// }



// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int> nums = {1,2,2,1,1};
//     int maxCount = 0;
//     int maxelem = -1;
//     int n =nums.size();
//     for(int i =0;i<n;i++){
//         int count =0;
//         for(int j =0; j < n; j++){
//             if(nums[i] == nums[j]){
//                 count ++;
                
//             }
//         }
//         if(count > maxCount){
//             maxCount = count;
//             maxelem = nums[i];
//         }
//     }
//     cout << maxCount << endl;
//     cout << maxelem << endl;
// }



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int majelem(vector<int> nums){
    
    int n = nums.size();

    //sort
    sort(nums.begin(), nums.end());
    //freq count

    int freq =1, ans = nums[0];
    for(int i =1; i <n ; i++){
        // int count =0;
        if(nums[i] == nums[i-1]){
            freq++;
        }else{
            freq =1;
            ans = nums[i];
        }
        if(freq > n/2){
            return ans;
        }
    }
    return ans;
}
int main(){
    vector<int> nums = {2,2,1,1,1,2,2};
    cout << majelem(nums);
}