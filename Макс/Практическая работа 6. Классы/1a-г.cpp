#include <iostream>

using namespace std;

class Insects{

private:

    float len;
    int color;

public:

    Insects(){}

    Insects(int len){
        this->len = len;
    }

    Insects(int color){
        this->color = color;
    }

    void speck(){
        cout << "vjuh" << endl;
    }

    void specka(string word){
        if (word.length() > 0){
            cout << "Insects can speck onli vjuh" << endl;
        }
        cout << "vjuh" << endl;
    }

    int get_len(){
        return this->len;
    }
};