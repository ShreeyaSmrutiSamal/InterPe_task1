#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int randomnumber;
int userinput;
void askNumber();
void clear();
int main(){
    srand((unsigned) time(NULL));
    randomnumber = rand() %99;
    askNumber();
    if(userinput == randomnumber){
        cout << "You are Winner !" << endl;
        cout << "Number is" << randomnumber << "!" << endl;
    }
    return 0;
}
void askNumber(){
    do{
clear();
cout << "Enter your Number" << endl;
cout << "Guess number is" << randomnumber << endl;
cin >> userinput;
    }
    while(userinput != randomnumber);
}
void clear() {
      cout << "\x1B[2J\x1B[H";
}