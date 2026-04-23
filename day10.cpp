// //QUES1: Find maximum subarray sum...
// #include <iostream>
// using namespace std;
// int main(){
//     // Specify the length of array...
//     int n;
//     cout << "How many input you want: ";
//     cin >> n;

//     //Take input in array form...
//     int values[n];
//     for(int i =0; i < n; i++){
//         cin >> values[i];
//     }

//     //specify current sum and maxsum...
//     int currentsum = 0;
//     int maxsum = values[0];

//     //Heart of the ques looping and comparing the sumation...
//     for(int i =0;i < n;i++){
//         currentsum += values[i];
//         if(currentsum > maxsum){
//             maxsum = currentsum;
//         }
//         if(currentsum < 0){
//             currentsum = 0;
            
//         }
//     }
//     cout << maxsum;
// }

// //QUES2: Longest sunarray with sum =K...

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter number of input you want: ";
//     cin >> n;


//     int values[n];
//     for(int i =0; i < n;i++){
//         cin >> values[i];
//     }

//     int k;
//     cout << "Enter number you want to compare: ";
//     cin >> k;
//     int length = 0;
//     int maxlength = 0;
//     for(int i = 0; i< n;i++){
//         int sum = 0;
//         for(int j =i; j < n;j++){
//             sum += values[j];
//             if(sum == k){
//                 length = j-i+1;
//                 if(length > maxlength){
//                     maxlength = length;
//                 }
//             }
//         }
//     }
//     cout << maxlength;
// }

// //Make previous code more optimised by storing sum...

// #include <iostream>
// #include <unordered_map>
// using namespace std;
// int main(){
//     int k;
//     cout << "Enter value of K: ";
//     cin >> k;


//     int size;
//     cout << "Enter size of array: ";
//     cin >> size;


//     int values[size];
//     for(int i =0; i<size; i++){
//         cin >> values[i];
//     }

//     int sum = 0;
//     int length = 0;
//     int maxlength = 0;
//     unordered_map<int,int> mp;
//     for(int i =0; i < size;i++){
//         sum += values[i];
//         if(sum == k){
//             maxlength = i+1;
//         }
//         if(mp.find(sum-k) != mp.end()){
//             int length = i -mp[sum-k];
//             if(length > maxlength){
//                 maxlength = length;
//             }
//         }
//         if(mp.find(sum) == mp.end()){
//             mp[sum] = i;
//         }
//     }
//     cout << maxlength;
// }


