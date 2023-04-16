#include <stdio.h>
#include <iostream>
#include <array>

using namespace std;

struct mystruc {
    unsigned int a = 10;
    unsigned int b = 6;
    unsigned int c = 7;
    unsigned int d = 8;
};


void fill_structs(mystruc* arr1, int* arr2, int l)
{
    //*yashika
    //mystruc* arr[l];
    int i{ 0 };
    while(4*i<l)
    {
        //mystruc* arr[i] = yashika;
        arr1[i].a = arr2[4*i];
        arr1[i].b = arr2[4*i+1];
        arr1[i].c = arr2[4*i+2];
        arr1[i].d = arr2[4*i+3];
        i++;
    }
    //return 0;
}



int main() {
    mystruc p[5];
    int q[5]{ 1,2,3,4,5 };
    fill_structs(p,q, 5);
    cout << p[0].a << endl;
    cout << p[1].a << endl;
    cout << p[1].b << endl;
    cout << p[3].a << endl;
    cout << p[4].a << endl;

}