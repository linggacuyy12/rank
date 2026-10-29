#include <iostream>
using namespace std;
int main() {
    int skor = 90;
    if (skor >= 90){
      cout << " rank s "; 
    }else if (skor >= 80){
       cout << " rank a";
    }else if (skor >=70){
        cout << "rank b";
    }else if (skor >= 60){
        cout << "rank c";
    }else{
        cout << "rank d";
    }
}