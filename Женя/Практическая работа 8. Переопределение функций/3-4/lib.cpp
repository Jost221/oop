#include "lib.h"

Herbivores::Herbivores(){
    this->len_arm = NULL;
    this->len_neck = NULL;
}

Herbivores::Herbivores(float len_arm, int len_neck, int count_teeth){
    this->len_arm = len_arm;
    this->len_neck = len_neck;
    this->count_teeth = count_teeth;
}

void Herbivores::speak() const{
    cout << "RRRRRRRRR" << endl;
}

void Herbivores::speak(string words) const{
    bool flag = 1;
    for(int i=0; i < words.length(); i++){
        if(words[i] != 'R'){
            flag = 0;
            break;
        }
    }
    if(!flag){
        cout << "dinosourus can speck onli RRRRRRRRRRRR" << endl;
    } else {
        cout << words << endl;
    }
}

float Herbivores::getLenArm() const{
    return this->len_arm;
}

int Herbivores::getLenNeck() const{
    return this->len_neck;
}

void Herbivores::setLenArm(float len_arm){
    this->len_arm = len_arm;
}

void Herbivores::setLenNeck(int len_neck){
    this->len_neck = len_neck;
}