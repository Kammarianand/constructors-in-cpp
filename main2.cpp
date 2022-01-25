#include<iostream>
using namespace std;
class base{
      int a[100],n;
      public:
      base(void);
};
base :: base(void){
    n = 5;
   int a[n] = {10,85,99,50,1000};

   int i,max = 0;
          cout<<"the array is "<<endl;
          for ( i = 0; i < 5; i++)
          {
            cout<<a[i]<<endl;
          }
    for ( i = 0; i < n; i++)
    {
        if(a[i]>max){
            max = a[i];
        }
    }
    cout<<"the maximum number in array is "<<max<<endl;
      
}
int main(){
    base obj;
    return 0;
}