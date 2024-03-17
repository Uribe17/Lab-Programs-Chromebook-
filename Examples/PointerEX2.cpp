#include <iostream>
using namespace std;

void toggle1(bool led){
    led = !led;
}

void toggle2(bool * led){
    (*led) = !(*led);
}

int main(){
    bool led1 = false;
    bool led2 = false;
    printf("Boolean values\t False = 0 \tTrue = 1\n\n");
    printf("Before Toggle\t led1 : %i \tled2: %i\n", led1, led2);

    toggle1(led1);
    toggle2(&led2);
    printf("After Toggle\t led1 : %i \tled2: %i\n", led1, led2);
}