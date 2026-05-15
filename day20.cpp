// #include <iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     int nums[n] ={1,2,3,4};
//     int multiply = 1;
//     int newsum = 0;
//     int ans[n];

//     for(int i =0; i <n;i++){
//         multiply *=nums[i];
        
//     }
//     for(int i =0;i <n;i++){
//         ans[i] = multiply/nums[i];
//     }
//     for(int i =0;i<n;i++){
//         cout << ans[i]<<endl;
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     int nums[n] ={1,2,3,4};
//     int ans[n];
//     int ls=1;
//     for(int i =0;i <n;i++){
//         ans[i] = ls;
//         ls *= nums[i];
//     }
//     int rs=1;
//     for(int i =n-1; i >=0;i--){
//         ans[i] *= rs;
//         rs *= nums[i];
//     }
//     for (int i = 0; i < n; i++) {
//         cout << ans[i] << " ";
//     }


// }