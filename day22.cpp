// #include <iostream>
// #include <vector>
// using namespace std;

// int binarySearch(const vector<int>& arr, int tar) {
//     int st = 0;
//     int end = arr.size() - 1;

//     while (st <= end) {
//         int mid = st + (end - st) / 2;

//         if (tar > arr[mid]) {
//             st = mid + 1;
//         }
//         else if (tar < arr[mid]) {
//             end = mid - 1;
//         }
//         else {
//             return mid;
//         }
//     }

//     return -1;
// }

// int main() {

//     vector<int> arr1 = {-1,0,3,4,5,9,12};

//     cout << "Answer = "
//          << binarySearch(arr1, 12)
//          << endl;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int x =10;
//     int* ptr = &x;
//     cout << x<<endl;
//     cout << &x<<endl;
//     cout << ptr<<endl;
//     cout << *ptr;

// }

// #include <iostream>
// using namespace std;
// int main(){
//     int x= 5;
//     int* ptr =&x;
//     *ptr = 20;
//     cout << x;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int arr[4] = {10,20,30,40};
//     for(int i=0; i <4;i++){
//         int* ptr = arr +i;
//         cout << *ptr << endl;
//     }
// }

// #include  <iostream>
// using namespace std;
// void swap(int* a, int* b){
//     int temp = *a;
//     *a=*b;
//     *b=temp;
// }
// int main(){
//     int a =10;
//     int b =20;
//     swap(&a,&b);
//     cout << a<<endl;
//     cout << b<<endl;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5] = {4,9,2,15,7};
//     int max= *arr;
    
//     for(int i =0;i<5;i++){
//         int current = *(arr+i);
//         if(current > max){
//             max = current;
//         }
        
//     }
//     cout << max<<endl;
// }