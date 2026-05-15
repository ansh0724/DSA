// #include <iostream>
// using namespace std;
// int main(){
//     int arr[] ={7,1,5,3,6,4};
//     int maxprofit=0;
//     int bestbuy=arr[0];
//     for(int i =0;i <6;i++){
//         if(arr[i] > bestbuy){
//             maxprofit = max(maxprofit, arr[i]-bestbuy );

//         }
//         bestbuy=min(bestbuy,arr[i]);
//     }
//     cout << maxprofit;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int height[] = {1, 8, 6, 20, 5, 4, 8, 3, 7};
//     int n = sizeof(height) / sizeof(height[0]); 
    
//     int maxwater = 0;
    

//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             int width = j - i;
//             int minHeight = min(height[i], height[j]);
//             maxwater = max(maxwater, minHeight * width);
//         }
//     }
//     cout << maxwater;
// }


#include <iostream>
using namespace std;
int main(){
    int height[] = {1, 8, 12, 2, 5, 4, 8, 3, 7};
    int n = sizeof(height) / sizeof(height[0]); 
    int maxwater = 0;
    

    
}