// //QUES1: Find missing number
// #include <iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout << "Enter number of input you want:";
//     cin >> n;
//     int sum = n*(n+1)/2;
//     int orignal = 0;
//     int arr[n-1];
//     for(int i =0;i < n-1; i++){
//         cin >> arr[i];
//     }
//     int missing = 0;
//     for(int i =0; i <n-1;i++){
//         orignal += arr[i];
//     }
    
//     missing = sum - orignal;
//     if(missing == 0){
//         cout << "No missing number";
//     }else{
//         cout << "Missing number:" << missing;
//     }
// }

// //QUES2:Find Duplicate

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter you number of inputs:";
//     cin >> n;
//     int arr[n];
//     int count = 0;
//     int repeat = 0;
//     for(int i =0; i <n; i++){
//         cin >> arr[i];
//     }
//     for(int i =0; i <n-1;i++){
//         for(int j = i+1; j < n; j++){
//             if(arr[j] == arr[i]){
//                 repeat = arr[j];
//                 count++;
//             }
//         }
//         if(count == 1){
//             break;
//         }
//     }
//     cout << "Repeated number is:" << repeat << "\n";
//     cout << "Repeated " << count << " Times";
// }


// //QUES3: Maximum Difference (Brute Force)
// #include <iostream>
// using namespace std;
// int main(){
//     //First we will take input of how much number user want...
//     int n; 
//     cout << "Enter number of input you want:";
//     cin >> n;

//     //Then we will take all the input in array...
//     int arr[n];
//     for(int i =0; i <n; i++){
//         cin >> arr[i];
//     }

//     // Main part
//     int diff = 0;
//     int maxDiff = arr[1]-arr[0];
//     for(int i = 0; i < n-1;i++){
//         for(int j =i+1; j <n;j++){
//             diff = arr[j] - arr[i];
//             if(diff > maxDiff){
//                 maxDiff = diff;
//             }
//         }
//     }
//     cout << "Max Diffrence: "<< maxDiff;

// }
// // QUES3: sort all zero to the last and keep the order of nn zero number...
// #include <iostream>
// using namespace std;

// int main(){
//     int arr[5];
//     int n = 5;

//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }

//     int j = 0;

//     for(int i = 0; i < n; i++){
//         if(arr[i] != 0){
//             arr[j] = arr[i];
//             j++;
//         }
//     }

//     for(int i = j; i < n; i++){
//         arr[i] = 0;
//     }

//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
// }

//QUES6: Find First Non-Repeating Element

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter number of input: ";
//     cin >> n;
    
//     int arr[n];
//     for(int i = 0; i <n;i++){
//         cin >> arr[i];
//     }
//     for(int i =0; i <n;i++){
//         int count =0;
//         for(int j =0;j<n;j++){
//             if(arr[j] == arr[i]){
//                 count++;
//             }
//         }
//         if(count == 1){
//             cout << arr[i];
//             break;
//         }
//     }

// }