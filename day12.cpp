// #include <iostream>
// using namespace std;
// int main(){
//     int n = 64;
//     while(n%2==0){
//         n = n/2;
//     }
//     if(n ==1){
//         cout << "yes";
//     }else{
//         cout << "No";
//     }
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter number of input= ";
//     cin >> n;

//     int values[n];
//     for(int i =0; i < n;i++){
//         cin >> values[i];
//     }
//     // int number =values[0];
//     int maxnumber = values[0];
//     int minnumber = values[0];
//     for(int j =1;j <n;j++ ){
//         if(values[j] > maxnumber ){
//             maxnumber = values[j];
//         }
//         if(minnumber > values[j]){
//             minnumber = values[j];
//         }
//     }
//     cout << endl;
//     cout << maxnumber << endl;
//     cout << minnumber;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter number of input= ";
//     cin >> n;

//     int values[n];
//     for(int i =0; i < n;i++){
//         cin >> values[i];
//     }
//     // int number =values[0];
//     int maxnumber = values[0];
//     int minnumber = values[0];
//     int maxidx = 0;
//     int minidx = 0;
//     for(int j =1;j <n;j++ ){
//         if(values[j] > maxnumber ){
//             maxnumber = values[j];
//             maxidx=j;
//         }
//         if(minnumber > values[j]){
//             minnumber = values[j];
//             minidx=j;
//         }
//     }
//     int temp = values[maxidx];
//     values[maxidx] =  values[minidx];
//     values[minidx] = temp;
//     cout << endl;
//     cout << maxnumber << endl;
//     cout << minnumber<< endl;
//     for(int i =0; i < n;i++){
//         cout << values[i]<<" ";
//     }
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter number of input= ";
//     cin >> n;

//     int values[n];
//     for(int i =0; i < n;i++){
//         cin >> values[i];
//     }
    
//     int find;
//     cout << "Which number you want too find: ";
//     cin >> find;

//     bool got = false;
//     int index = 0;
//     for(int i =0; i <n;i++){
//         if(values[i] == find){
//             got = true;
//             index= i+1;
//             break;
//         }
//     }
//     if(got){
//         cout << "Yes its there!!!";
//         cout << index;
//     }else{
//         cout << "No  its Not...";
//         cout << "-1";
//     }
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter number of input= ";
//     cin >> n;

//     int values[n];
//     for(int i =0; i < n;i++){
//         cin >> values[i];
//     }
//     int unqvalues[n];
//     int unqcount = 0;
//     for(int i =0;i <n;i++){
//         bool isdubli = false;
//         for(int j =0; j < unqcount; j++){
//             if(values[i] == unqvalues[j]){
//                 isdubli = true;
//                 break;
//             }
//         }
//         if(!isdubli){
//             unqvalues[unqcount] = values[i];
//             unqcount++;
//         }
//     }
    
    
//     for(int i=0;i<n;i++){
//         cout << unqvalues[i] << " ";
//     }


// }


// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter number of input for array1= ";
//     cin >> n;

//     int arr1[n];
//     for(int i =0; i < n;i++){
//         cin >> arr1[i];
//     }


//     int m;
//     cout << "Enter number of input for array2= ";
//     cin >> m;

//     int arr2[m];
//     for(int i =0; i < m;i++){
//         cin >> arr2[i];
//     }
//     int intersection[n];
//     int intercount = 0;
//     for(int i =0;i <n;i++){
//         bool  find = false;
//         for(int j =0; j <m;j++){
//             if(arr1[i] == arr2[j]){
//                 find = true;
//                 break;
//             }
//         }
//         if(!find){
//             intersection[intercount] = arr1[i];
//             intercount++;
//         }
//     }
//     for(int i =0;i <intercount;i++){
//         cout << intersection[i];
//     }
// }