
// //Ques1
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string input;
//     string input2;
//     cout << "Enter your input-1: ";
//     cin >> input;
//     cout << "Enter your input-2: ";
//     cin >> input2;
//     if(input.length() != input2.length()){
//         cout << "No" << endl;
//         return 0;
//     }
//     string temp = input + input;
//     if(temp.find(input2) != string::npos){
//         cout << "Yes, it is a rotation" << endl;
//     }else{
//         cout << "Not a  rotation" << endl;
//     }
// }

// //QUES find longest word
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     string input;
//     cout << "Enter you sentence: ";
//     // cin >> input;
//     getline(cin, input);
//     // cout << input;
//     int count = 0;
//     int maxlength = 0;
//     string currentword ="";
//     string longest = "";
//     for (int i = 0; i < input.length(); i++)
//     {
//         if (input[i] != ' ')
//         {
//             currentword +=input[i];
//             count++;
//         }else{
//             if(count > maxlength){
//                 maxlength = count;
//                 longest = currentword;
//             }
//             count = 0;
//             currentword = "";
//         }
    
//     }
//     if(count >  maxlength){
//         maxlength=count;
//         longest = currentword;
//     }
//     cout << maxlength<< endl;
//     cout << longest<< endl;
// }


//QUES: isomorphic strings

// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string s1;
//     cout << "Enter first word: ";
//     cin >> s1;
//     string s2;
//     cout << "Enter second word: ";
//     cin >> s2;
//     bool isomorphic = true;
//     if(s1.length() != s2.length()){
//         isomorphic = false;
//         cout << "No, It's not isomorphic!!!";
//         return 0;
//     }
//     for(int i =0;i < s1.length();i++){
//         for(int j =0; j <i; j++){
//             if(s1[i] == s1[j] && s2[i] != s2[j]){
//                 isomorphic = false;
//                 break;
//             }

//             if(s1[i] != s1[j] &&  s2[i] == s2[j]){
//                 isomorphic =  false;
//                 break;
//             }
//         }
//         if(!isomorphic){
//             break;
//         }
//     }
//     if(isomorphic){
//         cout << "Yes, It's Isomorphic!!!";
//     }else{
//         cout << "No, It's not!!!";
//     }

// }
