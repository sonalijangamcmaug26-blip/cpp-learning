// #include <iostream>
// using namespace std;
// int main(){
//     int i; int j;
//     int arr[5][5] ={
//         {1,2,3,4,5}, {5,4,3,2,1}
//     };
//     for(i=0;i<=5;i++){
//         for(j=0;j<=5;j++){
//             cout<<arr[i][j]<<endl;
//         }

//     }
//     return 0;
// } 

  





// FOR EACH LOOP 

// #include <iostream>
// using namespace std;
// int main(){
//     string cars[] = {"honda","volvo","audi","supra"};
//     for(string car : cars){
//         cout<< car <<endl;

//     }
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,2,3,2,3};
//     int duplicates[5];
//     int j = 0;
//     for(int i = 0; i<5; i++){
//         for(int k=i+1; k<5; k++){
//             if(arr[i]==arr[k]){
//                 duplicates[j]=arr[i];
//                 j++;
//                 break;
//             }
//         }
//     }
//     cout<< "Duplicate values"<<endl;
//     for(int i = 0; i < j; i++){
//         cout<<duplicates[i]<<" "<<endl;

//     }

//     return 0;








// }
    
#include <iostream>
using namespace std;
int main(){
    int arr[4] = {1,2,2,3};
    int duplicate[4]; // array for storing the dupliacte
    int j = 0; // indec of the duplicate array

    for(int i = 0; i<5; i++){ // 1st loop to iterate over the array
        for(int k = i+1; k<5; k++){ // inner loop to iterate after 1st loop but with the second element
            if(arr[i]==arr[k]){ // as matching element found
                duplicate[j]= arr[i]; // push the found element into the duplicate array
                j++;                  // increment j eg j[0] stores the matched element then move the pointer to j[1]
                break;                // found so break  
            }
        }
    }

    for(int i = 0; i<j; i++){  // this is to print the dupliacte array and is not related tp the upper loops
        cout<<duplicate[i]<<" "<<endl; 
    }
}