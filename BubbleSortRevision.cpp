// -------------------------: 21/07/2024       Sunday                   :----------------------------------\\

/*
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> BubbleSort( vector<int>&v){
 int n = v.size();
   // Bubble sort
    for(int j = 0; j < n-1 ;j++){  // n-1 passes
        // last jth elements are already at sorted position so no need to check them
        for( int i = 0; i < (n-j-1);i++){   //traverse
            if(v[i] > v[i+1]) swap(v[i],v[i+1]); // swap
        }   
    }            // TO  -> (n^2-n)/2  :: TC -> O(n^2)
    return v;     
  }
  int main(){
    vector<int>v =   // {10,20,10,40,50,30,50,20};
                   {50,40,30,20,10};
   
    // sort this vector using bubble sort algo
          int n = v.size();
          for(int j = 0; j < n-1;j++){
         for( int i = 0; i < (n-j-1);i++){
            if(v[i] > v[i+1]) swap(v[i],v[i+1]);
         }
             for(int i:v){
             cout<<i<<" ";
              }
              cout<<endl;
          }
    return 0;
  }

  

 // check whether the given array is sorted or not

 #include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> BubbleSort( vector<int>&v){
 int n = v.size();
   // Bubble sort
    for(int j = 0; j < n-1 ;j++){  // n-1 passes
        // last jth elements are already at sorted position so no need to check them
        for( int i = 0; i < (n-j-1);i++){   //traverse
            if(v[i] > v[i+1]) swap(v[i],v[i+1]); // swap
        }   
    }            // TO  -> (n^2-n)/2  :: TC -> O(n^2)
    return v;     
  }
  bool IsArrSorted( vector<int>&vec){
     int n = vec.size();
        bool chek = false;
         for(int i= 0;i<n-1;i++){
            if(vec[i]<vec[i+1]){
             chek = true;
              break;
             }
         }
        return chek;
  }
  int main(){
    vector<int>v =    {10,20,10,40,50,30,50,20};
      vector<int>vec = BubbleSort(v);
        cout<<IsArrSorted(vec);
    return 0;
  }

  

//  // efficeient and optimized code
// #include <bits/stdc++.h>
//  using namespace std;
//  int main(){
//     vector<int>v =    {10,40,30,50,20};
                   
   
     
//           int n = v.size();
//        for(int j = 0; j < n-1;j++){
//         bool chek = false;
//          for( int i = 0; i < (n-j-1);i++){
//             if(v[i] > v[i+1]){
//              swap(v[i],v[i+1]);
//               chek = true;
//             }
            
//          }
          
             
//               if(chek == false )
//               break;
//               for(int i:v){
//              cout<<i<<" ";
//               }
//               cout<<endl;
//           }


//     return 0;
//   }

*/

// --: que- sort a string in decreasing order of values associated after removal of values samller than x


/*
#include <bits/stdc++.h>
 using namespace std;
  int main(){
    string s = "azyzxbdjkx";
     string str ;
      for(int i = 0; i< s.size();i++){
        if(s[i] >='x') str.push_back( s[i]);
      }

     string st = str;
      int n = str.size();
       for( int i = 0 ;i< n-1; i++){
         bool chek = true;
          for( int j = 0; j < (n-j-1) ;j++){
             if(st[i] <= st[i+1]){
               swap(st[i],st[i+1]);
                chek = false;
             }
              if(chek == true ) 
               break;
          }
       }


       cout<<st;


    return 0;
  }

  
// push zeroes to end not necessary maintaining relative order of ther elements
 
 
 #include <bits/stdc++.h>
 using namespace std;
  int main(){
     int count =0;
    vector<int>v = {5,0,1,2,0,0,0,4,0,3};
     int n = v.size();
      for( int i = 0; i < n-1; i++){
         //bool chek = false;
         for( int j = 0; j < (n-i-1);j++){
            if(v[j]==0 && v[j+1] != 0){
             swap(v[j],v[j+1]);
              //chek = false;
             
            }
         }
        //  if( chek == true )
        //   break;
           count++;
      }
            
      for(int i:v){
        cout<<i<<" ";
      }

    cout<<count;
    return 0;
  }

  
  

 // Sort the array in descending order using bubble sort

#include <bits/stdc++.h>
 using namespace std;
  vector<int> BubbleSortDecOrder( vector<int>&v){
     int n = v.size();
      for( int i = 0; i <n-1; i++){  // 
         bool check = true ;
          for( int j = 0; j < (n-i-1); j++){
            if(v[j] < v[j+1]){
               swap(v[j],v[j+1]);
                check = false;
            }
          }
           if( check == true) 
            break;
      }
      return v;
  }
  int main(){
   vector<int>v = {5,2,6,9,4,8,1,4};
    vector<int>vec = BubbleSortDecOrder(v);
       for(int i: vec){
        cout<<i<<" ";
       }



    return 0;
  }
 
*/


// chek whether the given array is almost sorted (elements are atomost one position away)

#include <bits/stdc++.h>
 using namespace std;
 
  int main(){
   vector<int>v = {1,2,4,3,6};
    int n = v.size();
       
        for(int i = 0; i<n-1;i++){  // fully sorted
           if(v[i]>v[i+1]){
             swap(v[i],v[i+1]);
           }
            else continue;
        }
        vector<int>vec = v;

       for(int i = 0; i<n-1;i++){
           if(vec[i]>vec[i+1]){
             cout<<"no, arr is not almost sorted.";
              break;
           }
            if( i == n-2 ) cout<< "yes, arr is almost sorted";
       }
    
    return 0;
  }
 
