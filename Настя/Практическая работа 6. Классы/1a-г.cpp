#include <iostream>

using namespace std;

class VeiewDisplay{

private:

    float diagonal;
    int model;

public:

    VeiewDisplay(){}

    VeiewDisplay(int diagonal){
        this->diagonal = diagonal;
    }

    VeiewDisplay(int model){
        this->model = model;
    }

    void speck(){
        cout << "psssssssssssssssshhhhhhhhhhhhhhhh" << endl;
    }

    void specka(string word){
        if (word.length() > 0){
            cout << "as VeiewDisplay have not speaker psssssssssssssssshhhhhhhhhhhhhhhh" << endl;
        }
        cout << "psssssssssssssssshhhhhhhhhhhhhhhh" << endl;
    }

    int get_diagonal(){
        return this->diagonal;
    }
};