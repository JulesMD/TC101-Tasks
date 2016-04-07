#include <iostream>
#define s 20

using namespace std;

int vect[s];
int n;
int suma = 0;

int array(int vect[s], int a){
    for (int i = 1; i <= a; i++){
        cout <<vect[i]<<" ";
    }
    cout << endl;
}

int main(){
    cout<< "Define the size of the vector: ";
    cin>>n;
    for(int i = 1; i <= n; i++){
        cout<<"Values: ";
        cin>>vect[i];
    }
    for(int i = 1; i <= n; i++){
        if (vect[i]%3==0){
            suma = suma +vect[i];
        }
    }
    array(vect, n);
    cout<<"The sum of the numbers dividable by 3 equals  "<<suma<<endl;
}
