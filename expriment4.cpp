//Sanya Jaitly,22070123100
// Bitwise operation
// experiment 4a
#include<iostream>
using namespace std;
int main()
{
    int given,reset,set,set_ans,reset_ans;
    given = 35;
    set = 16;
    reset = 31;
    set_ans = given|set;
    reset_ans = reset & given;
    cout<<"set: "<<set_ans<<endl;
    cout<<"reset: "<<reset_ans<<endl;

}
/*Output:
set: 51
reset: 3
*/




//experiment 4b
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int i = 67;
    a = i>>3;            //shifting to right by 3 units
    b = i<<3;            // shifting to left by 3 units
    cout<<" Right shift by 3: "<<a<<endl; 
    cout<<" left shift by 3: "<<b<<endl;
    
}

/*
Output:
Right shift by 3: 8
left shift by 3: 536
*/




//experiment 4c
#include<iostream>
using namespace std;
int main()
{
    int bit_to_be_set,bit_to_be_reset,a1,a2;
    int a = 50;
    cout<<"Enter the bit to be reset: "<<endl;
    cin>>bit_to_be_reset;
    cout<<"Enter the bit to be set: "<<endl;
    cin>>bit_to_be_set;
    a1 = a|(1<<bit_to_be_reset);
    a2 = a|(1<<bit_to_be_set);
    cout<<"The reset bit is: "<<a1<<endl;
    cout<<"The set bit is: "<<a2<<endl;

}
/*Output:
Enter the bit to be reset: 
1
Enter the bit to be set: 
6
The reset bit is: 50
The set bit is: 114
*/