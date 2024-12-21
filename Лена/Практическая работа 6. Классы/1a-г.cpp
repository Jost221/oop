#include <iostream>

using namespace std;

class Flowers{

private:

    float len;
    int color;

public:

    Flowers(){}

    Flowers(int len){
        this->len = len;
    }

    Flowers(int color){
        this->color = color;
    }

    void speck(){
        cout << "fiew" << endl;
    }

    void specka(string word){
        if (word.length() > 0){
            cout << "flowers can spiack onli fiew" << endl;
        }
        cout << "fiew" << endl;
    }

    int get_len(){
        return this->len;
    }
};