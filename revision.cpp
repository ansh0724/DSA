// // check which number is divisible bby  3;
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter number you want to check:-";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << "numbers:\n";
//     for(int i =0; i < n; i++){
//         cin >> arr[i];
//     }
//     int m=0;
//     int arr3[n];
//     for(int i =0; i <= n; i++){
//         if(arr[i]%3 == 0){
//             arr3[m] = arr[i];
//             m++;
//         }
//     }
//     for(int i =0; i < m; i++){
//         cout << arr3[i] << " ";
//     }
//     cout << endl;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     string input;
//     cout << "Enter your word: ";
//     cin >> input;
//     int count =0;
//     char vowels[] = {'a', 'e','i','o','u'};
//     int len2 = sizeof(vowels)/sizeof(vowels[0]);
//     int len = input.length();
//     for(int i =0; i < len; i++){
//         input[i]= tolower(input[i]);
//         for(int j =0; j < len2;j++){
//             if(input[i] == vowels[j]){
//                 count++;
//             }
//         }
//     }
//     cout << count << endl;
//     return 0;
// }

// number to bbinnary

// #include <iostream>
// using namespace std;

// int numToBinary(int decNum){

//     int  pow = 1;
//     int ans =0;
//     while(decNum > 0){
//         int rem = decNum%2;
//         decNum = decNum/2;
//         ans += rem*pow;
//         pow = pow*10;
//     }
//     return ans;
// }
// int main(){
//     int decNum;
//     cout << "Enter your number: ";
//     cin >> decNum;
//     cout << numToBinary(decNum) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int binNum;
//     cin >> binNum;
//     int sum =0,pow =1;
//     while(binNum > 0){
//         int rem = binNum%10;
//         sum += rem*pow;
//         binNum = binNum/10;
//         pow *=2;
//     }
//     cout << sum << endl;
// }

// //find character with max freq

// #include <iostream>
// using namespace std;
// int main(){
//     string input;
//     cout << "Enter your word: ";
//     cin >> input;
//     int len = input.length();
//     char letter;
//     int count =0;
//     int maxCount =0;
//     for(int i =0; i < len;i++){
//         count =0;
//         for(int j =0; j < len;j++){
//             if(input[i] == input[j]){
//                 count ++;

//             }
//             if(count > maxCount){
//                 maxCount = count;
//                 letter = input[i];
//             }
//         }
//     }
//     cout << maxCount<< endl;
//     cout << letter;

// }

// //find rotation of two strings

// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string input1;
//     string input2;
//     do{
//         cout << "Enter your first word: ";
//         cin >> input1;
//         cout << "Enter your second word: ";
//         cin >> input2;

//     }while(input1.length() != input2.length());

//     string strSum = input1+input1;
//     if(strSum.find(input2) != std::string::npos){
//         std :: cout << "Found!"<< std::endl;
//     }else{
//         std:: cout << "Not Found";
//     }
// }

// //Find longest word in a sentence...
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string input;
//     cout << "Enter Your Sentence: ";
//     getline(cin, input);

//     int count =0;
//     int maxcount =0;
//     for(int i =0; i < input.length();i++){

//         if(input[i] == ' '){
//             if(count > maxcount){
//                 maxcount = count;
//             }
//             count = 0;
//         }else{
//             count ++;
//         }
//     }
//     if(count > maxcount){
//         maxcount = count;
//     }
//     cout << maxcount;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string input1;
//     string input2;
//     cout << "Enter your input1: ";
//     cin >> input1;
//     cout << "Enter your input2: ";
//     cin >> input2;
//     if(input1.length() != input2.length()){
//     cout << "No, input length not same...";
//     return 0;
// }
//     bool match = true;
//     for(int i =1; i < input1.length();i++){
//         for(int j = 0; j <i; j++ ){
//             if(input1[i] == input1[j] && input2[i] != input2[j]){
//                 match = false;
//             }
//             if(input1[i] != input1[j] && input2[i] == input2[j]){
//                 match = false;
//             }
//         }
//     }
//     if(match){
//         cout << "yes" << endl;
//     }else{
//         cout << "No";
//     }

// }

// kadane algorithem

// #include <iostream>
// using namespace std;
// int kadane(int arr[], int n){
//     int sum =0;
//     int maxsum =arr[0];
//     for(int i =0; i<n;i++){
//         sum +=arr[i];
//         if(sum < 0){
//             sum = 0;
//         }
//         if(sum > maxsum){
//             maxsum = sum;
//         }
//     }
//     return maxsum;
// }
// int main()
// {
//     int n;
//     cout << "Enter number of input you want: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter you input: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int result = kadane(arr,n);
//     cout << result;
// }