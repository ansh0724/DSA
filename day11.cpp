// #include <iostream>
// using namespace std;
// int main(){
//     int  i = 1;
//     int n =30;
//     int sum =0;
//     while( i <= n){
//         sum +=i;
//         i++;
//     }
//     cout << sum;
// // }
// #include <iostream>
// using namespace std;
// int main(){
//     int i;
//     int n;
//     int sum =0;
//     cout << "Enter your number: ";
//     cin >> n;
//     for(int i =0; i <=n; i++){
//         if(i%3 == 0){
//             sum +=i;
//         }
//     }
//     cout << sum;
// }
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int n =4;
//     for(int i =0;i <=n;i++){
//         for(int j =1; j <=n;j++){
//             cout << j<< " ";
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n =3;
//     char letter ='a';
//     for(int i =0;i <n;i++){
//         for(int j =0; j <n;j++){
//             cout << letter;
//             letter ++;
//         }
//         cout << endl;
//     }
// }    


// #include <iostream>
// using namespace std;
// int main(){
//     int n =4;
//     for(int i =0;i <n;i++){
//         for(int j =0;j<=i;j++){
//             cout << "*" ;
//         }
//         cout << endl;
//     }
    
// }    


// #include <iostream>
// using namespace std;
// int main(){
//     int n =4;
//     // int num =1;
//     for(int i =0; i <=n; i++){
//         for(int j =1; j <=i; j++){
//             cout << j;
//             // num ++;
//         }
//         cout << endl;
//     }
    
// }    


// #include <iostream>
// using namespace std;
// int main(){
//     int n =4;
//     for(int i =0; i <4;i++){
//         for(int j = i+1; j >0;j--){
//             cout << j;
//         }
//         cout << endl;
//     }
    
// }    


// #include <iostream>
// using namespace std;
// int main(){
//     int n =4;
//     int num =1;
//     for(int i =0; i <=4;i++){
//         for(int j = 1; j <= i; j++){
//             cout << num;
//             num ++;
//         }
//         cout << endl;
//     }
    
// }    


// #include <iostream>
// using namespace std;
// int main(){
//     int n =4;

//     for(int i =1; i <=4;i++){
//         for(int j =1; j <i;j++){
//             cout << " ";
//         }
//         for(int k = 1; k <= n-i+1;k++){
//             cout << i;
//         }
//         cout << endl;
//     }
    
// }    

// #include <iostream>
// using namespace std;

// int main() {
//     int n=4;

//     // Row Loop
//     for (int i = 1; i <= n; i++) {
        
//         // 1. General Space Logic: (Total rows - Current row)
//         for (int j = 1; j <= n - i; j++) {
//             cout << " ";
//         }

//         // 2. General Number Logic: (Print from 1 to Current row)
//         for (int k = 1; k <= i; k++) {
//             cout << k;
//         }
//         for(int l = 1; l < i;l++){
//             cout << l;
//         }

//         cout << endl;
//     }

//     return 0;
// } 


// #include <iostream>
// using namespace std;
// int main(){
//     int n =0;
//     for(int i =1; i < n-i;i++ ){
//         cout << " ";
//     }
//     cout << "*";
// }