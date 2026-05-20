// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     int arr[n] = {1,1,2,3,3,4,4,8,8};
//     int num =arr[0];
//     for(int i =0;i <=n;i++){
//         if(arr[i] != arr[i+1] && arr[i] != arr[i-1]){
//             num = arr[i];
//         }
//     }
//     cout << num;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int arr[] = {1,1,2,3,3,4,4,8,8};
//     int n = 9;

//     int st =0, end =n-1;
    
//     int ans = arr[0];
//     while(st<=end){
//         int mid = st + (end - st)/2;
//         if(arr[mid] != arr[mid -1] && arr[mid] != arr[mid+1]){
//             ans = arr[mid];
//             break;
//         }

//         if(mid%2 == 0){
//             if(arr[mid -1] == arr[mid]){
//                 end = mid -1;
//             }else{
//                 st = mid +1;
//             }
//         }else{
//             if(arr[mid -1] == arr[mid]){
//                 st = mid+1;
//             }else{
//                 end = mid -1;
//             }
//         }

//     }
//     cout << ans;
// }

