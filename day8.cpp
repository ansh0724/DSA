
//QUES1
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string hello;
//     cin >> hello;
//     int i =0;
//     int j = hello.length()-1;
//     while(i<j){
//         char temp = hello[i];
//         hello[i] = hello[j];
//         hello[j] = temp;
//         i++;
//         j--;
//     }
//     cout << hello;
// }


//QUES2
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string input;
//     cout << "Enter Your Word: ";
//     cin >> input;
//     int i =0;
//     int j = input.length()-1;
//     bool palindrome = true;
//     while(i<j){
//         if(input[i] != input[j]){
//             palindrome = false;
//             break;
//         }
//         i++;
//         j--;
//     }
//     if(palindrome){
//         cout << "Yes";
//     }else{
//         cout << "No it is not!!!";
//     }
// }


//QUES
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string input;
//     cout << "Enter your word to find vowels: ";
//     cin >> input;
//     string vowel = "aeiou";
//     string find;
//     int count =0;
//     int len2 = vowel.length();
//     int len = input.length();
//     for(int i = 0; i< len;i++){
//         // if(input[i] == )
//         if(input[i]>='A' && input[i] <= 'Z'){
//             input[i] = input[i] +32;
//         }
//         for(int j =0;j<len2;j++){
//             if(input[i] == vowel[j]){
//                 count ++;
//             }
//         }
//     }
//     cout << count;
// }


//QUES
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string s1,s2;
//     cin >> s1 >> s2;
//     // cout << s1 << s2;
//     if(s1.length() != s2.length()){
//         cout << "No";
//         // break;
//         return 0;
//     }
//     bool anagram = true;    
//     for(int i =0; i < s1.length();i++){
//         int count1=0;
//         int count2=0;
//         for(int j =0; j < s1.length();j++){
//             if(s1[j] == s1[i]){
//                 count1++;
//             }
//         }
//         for(int k=0; k < s2.length();k++){
//             if(s2[k]== s1[i]){
//                 count2++;
//             }
//         }
//         if(count1 != count2){
//             anagram = false;
//             break;
//         }
        
//     }
//     if(anagram){
//         cout << "Yes";
//     }else{
//         cout << "No";
//     }
// }

// //QUES: Remove dublicate
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string input;
//     cout << "Enter your input: ";
//     cin >> input;
//     for(int i =0; i <input.length();i++){
//         bool found = false;
//         for(int j =0; j <i; j++){
//             if(input[j] == input[i]){
//                 found = true;
//                 break;
//             }
//         }
//         if(!found){
//             cout << input[i];
//         }
//     }
// }

// //QUES: Find max frequency character

// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string input;
//     cout << "Enter Your Character: ";
//     cin >>  input;
//     int count =0;
//     int maxcount = 0;
//     char maxChar = input[0];
//     for(int i=0; i < input.length(); i++){
//         count =0;
//         for(int j =0; j < input.length(); j++){
//             if(input[j] == input[i]){
//                 count++;
//             }
//         }
//         if(count > maxcount){
//             maxcount =  count;
//             maxChar = input[i];
//         }
//     }
//     cout << maxChar;

// }

