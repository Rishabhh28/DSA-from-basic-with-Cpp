#include <bits/stdc++.h>
using namespace std;
void pattern(int n){
// *
// **
// ***
// ****
// *****
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}
void pattern2(int n){
// 1
// 12
// 123
// 1234
// 12345

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
        }
        
        cout<<endl;
    }
    
}
void pattern3(int n){
// 1
// 22
// 333
// 4444
// 55555

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<i;
        }
        
        cout<<endl;
    }
    
}
void pattern4(int n){

// * * * * * 
// * * * * 
// * * * 
// * * 
// * 
    for (int i = n ; i>0 ; i --){
        for (int j = 0; j < i; j++){
            cout<<"* ";

        } 
        cout<<endl;
    }
}
void pattern5(int n){
// 12345
// 1234
// 123
// 12
// 1
    for(int i = n; i > 0; i--){
        for(int j = 1; j <=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
}   
void pattern6(int n){

//         * 
//       * * * 
//     * * * * * 
//   * * * * * * * 
// * * * * * * * * * 

    for (int i = 0; i < n; i ++){
        for(int k = 0; k < (n-i-1); k++){
            cout<<"  ";
        }
        for (int j = 0 ; j < (2*i+1); j++){
            cout<<"* ";
        }
        // for(int k = 0; k< (n-i-1); k++){
        //     cout<<"  ";
        // } 
        //using this loop will give same output as without using it in the respect to patter, just in case of using this case it will print the extra spaces after the start 
        cout<<endl;
    }
}

void pattern7(int n){

// * * * * * * * * * 
//   * * * * * * * 
//     * * * * * 
//       * * * 
//         * 

    for (int i = n ; i >0; i--){
        for (int k = 1 ; k < (n-i+1) ; k++){
            cout<<"  ";
        }
        for(int j = 0 ; j<(i*2-1); j ++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern7_1(int n){
    for (int i = 0; i < n ; i ++){
        for (int k = 0 ; k < i; k ++){
            cout<<"  ";
        }
        for (int j = 0; j < (2*n - (2*i+1)); j++){
            cout<<"* ";
        }
        for (int k = 0 ; k < i; k ++){
            cout<<"  ";
        }
        cout<<endl;
    }
}
void pattern8(int n){

//         * 
//       * * * 
//     * * * * * 
//   * * * * * * * 
// * * * * * * * * * 
// * * * * * * * * * 
//   * * * * * * *   
//     * * * * *     
//       * * *       
//         *        

    for (int i = 0; i < n; i ++){
        for(int k = 0; k < (n-i-1); k++){
            cout<<"  ";
        }
        for (int j = 0 ; j < (2*i+1); j++){
            cout<<"* ";
        }
        // for(int k = 0; k< (n-i-1); k++){
        //     cout<<"  ";
        // } 
        //using this loop will give same output as without using it in the respect to patter, just in case of using this case it will print the extra spaces after the start 
        cout<<endl;
    }
    for (int i = 0; i < n ; i ++){
        for (int k = 0 ; k < i; k ++){
            cout<<"  ";
        }
        for (int j = 0; j < (2*n - (2*i+1)); j++){
            cout<<"* ";
        }
        for (int k = 0 ; k < i; k ++){
            cout<<"  ";
        }
        cout<<endl;
    }
}
void pattern9(int n){
    for(int i = 1 ; i <= (2*n - 1); i ++){
    

// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 
        int star = i;
        if(i > n){ star = (2*n -i);}
        for(int j = 0; j < star; j ++){
            cout<<"* "; 
        }
        cout<<endl;
    }
}
void pattern10(int n){

    int start = 1;
    for(int i = 0 ; i < n; i ++){
        if (i % 2 == 0){start = 1;}
        else start = 0;
        for(int j = 0; j <= i; j++){
            cout<<start<<" ";
            start = 1- start;
        }
        cout<<endl;
    }
}
void pattern11(int n){
// 1                 1 
// 1 2             2 1 
// 1 2 3         3 2 1 
// 1 2 3 4     4 3 2 1 
// 1 2 3 4 5 5 4 3 2 1 

    int spcae = (2*(n-1));
    for (int i = 1; i<=n; i ++){
        //numbers
        for (int j = 1; j <=i; j ++){
            cout<<j<<" ";
        }
        for (int j = 1; j <= spcae; j ++){
            cout<<"  ";

        }
        for(int j = i ; j > 0; j --){
            cout<<j<<" ";
        }
        cout<<endl;
        spcae -=2 ;
    }
}

void pattern12(int n){

// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 

    int start = 1;
    for (int i = 1; i<=n; i ++){
        for (int j = 1; j<=  i ; j ++){
            cout<<start<<" ";
            start += 1;
        }
        cout<<endl;
    }
}

void pattern13(int n){
// A 
// A B 
// A B C 
// A B C D 
// A B C D E 

    for(int i = 0; i < n; i++){
        for (char ch = 'A'; ch<='A'+i; ch++){
            cout<<ch<<" ";

        }
        cout<<endl;
    }
}

void pattern14(int n){

// A B C D E 
// A B C D 
// A B C 
// A B 
// A 
    for(int i = 0; i < n; i ++){
        for(char ch = 'A'; ch<'A'+(n-i); ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern15(int n){

// A 
// B B 
// C C C 
// D D D D 
// E E E E E 

    for (int i = 0; i < n; i ++){
        char ch = 'A' + i;
        for(int j = 0 ; j<= i; j ++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern16(int n){
    for (int i = 0; i < n; i++){
        //spcae
        for(int k = 0; k < n-i-1; k ++){
            cout<<"  ";
        }
        //alphabets
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j = 1 ; j <= 2*i+1; j ++){
            cout<<ch<<" ";
            if(j<=breakpoint) ch++;
            else ch--;
        }
        for(int k = 0; k < n-i-1; k ++){
            cout<<"  ";
        }
        cout<<endl;
    }
}
int main() {

    int n;
    cin>>n;
    // pattern(n);
    // pattern2(n);
    // pattern3(n);
    // pattern4(n);
    // pattern5(n);
    // pattern6(n);
    // pattern7(n);
    // pattern7_1(n);
    // pattern8(n);
    // pattern9(n); 
    // pattern10(n);  
    // pattern11(n);
    // pattern12(n);
    // pattern13(n);
    // pattern14(n);
    // pattern15(n);
    pattern16(n);

    return 0;
}

