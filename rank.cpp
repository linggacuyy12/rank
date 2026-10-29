#include <iostream>
using namespace std;
int main() {
    int skor = 90;
    if (skor >= 90){
      cout << " rank s "; 
    }else if (skor >= 80){
       cout << " rank a";
    }else if (skor >=70){
        cout << "rank B";
    }else {
        cout << "rank c";
    }    
}