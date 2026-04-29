// #include <iostream>
// #include <vector>
// using  namespace std;
// int main(){
// //     int arr[] = {3,-4,5,4,-1,7,-8};
// //     int n = sizeof(arr)/sizeof(arr[0]);
// //     int sum =0;
// //     int maxsum=arr[0];
// //     for(int i =0; i <n;i++){
// //         sum += arr[i];
// //         if(sum > maxsum){
// //             maxsum = sum;
// //         }
// //         if(sum < 0){
// //             sum =0;
// //         }
// //     }
// //     cout << maxsum;
// // }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     int arr[]={2,7,11,15};
//     int num1 =0;
//     int num2 =0;
//     int target = 26;
//     for(int i =0; i < 4;i++){
//         for(int j = 1;j <4;j++){
//             if(arr[i] + arr[j] == target){
//                 num1 = i+1;
//                 num2 = j+1;
//             }
//         }
//     }
//     cout << num1<< endl;
//     cout << num2<< endl;
// }

#include <iostream>
#include <vector>
using namespace std;
int main(){
    // int arr[]={2,7,11,15};
    vector<int> arr = {2,7,11,15};
    int num1 =0;
    int num2 =0;
    int target = 26;
    int n = arr.size();
    for(int i =0; i < n;i++){
        for(int j = 1;j <n;j++){
            if(arr[i] + arr[j] == target){
                num1 = i+1;
                num2 = j+1;
                break;
            }
        }
    }
    cout << num1<< endl;
    cout << num2<< endl;
}
