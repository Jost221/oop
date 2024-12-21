#include <iostream>

using namespace std;

class Dinosourus{

private:

    float len_arm;
    int len_neck;

public:

    Dinosourus(){

    }

    Dinosourus(int len_arm){
        this->len_arm = len_arm;
    }

    Dinosourus(int len_neck){
        this->len_neck = len_neck;
    }

    void RRRRRRRRRRR(){
        cout << "RRRRRRRRRRRR" << endl;
    }

    void RRRRRRRRRRR(string word){
        if (word.length() > 0){
            cout << "dinosourus can speck onli RRRRRRRRRRRR" << endl;
        }
        cout << "RRRRRRRRRRRR" << endl;
    }

    int get_len_arm(){
        return this->len_arm;
    }
};