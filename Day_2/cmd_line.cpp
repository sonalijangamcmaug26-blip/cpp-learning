// #include <iostream>
// using namespace std;
// int main(int argc, char* argv[]){
//     cout<<"arguments"<<" "  << argc << "arguments"<<endl;
//     int i = 0;
//     while(i<argc){
//         cout<<"arguments"<< i+1 <<":"<<argv[i]<<endl;
//         i++;
//     }

// }


// #include <iostream>
// using namespace std;

// int main(int argc, char* argv[]) {
//     cout << "You have entered " << argc
//          << " arguments:" << endl;

//     // Using a while loop to 
//     // iterate through arguments
//     int i = 0;
//     while (i < argc) {
//         cout << "Argument " << i + 1 
//              << ": " << argv[i]
//              << endl;
//         i++;
//     }

//     return 0;
// }


#include <iostream>
using namespace std;
int main(){
    int a = 7;
    int b = 6;
    int temp = a;
    a = b;
    b = temp;
    cout<<  a  <<  " " <<   b   <<endl;
}
