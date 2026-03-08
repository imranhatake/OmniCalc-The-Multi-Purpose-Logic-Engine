#include<iostream>
using namespace std;
int main(){
    int M;
    cout<<"Enter your marks";
    cin >> M;
    if (M>=80)
    {
        cout<<"Grade: A+";
    }
    else if (M>=70)
    {
        cout<<"Grade: A";

    }
    else if (M>=60)
    {
        cout<<"Grade: A-";

    }
    else if (M>=33)
    {
        cout<<"Grade: F";
    }
    

}