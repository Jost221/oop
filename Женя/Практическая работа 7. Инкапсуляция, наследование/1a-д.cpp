#include <iostream>

using namespace std;

class Dinosourus{

private:

    int color;
    int period;

protected:

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

    int get_color(){
        return this->len_arm;
    }

    float get_period(){
        return this->period;
    }

    void set_color(int color){
        this->color = color;
    }

    void set_period(int period){
        this->period = period;
    }
};

class Herbivores: private Dinosourus{

    float len_beak;

    bool is_correct(int value){
        if(value < 1){
            return 0;
        }
        return 1;
    }

public:
    Herbivores(){}


    bool set_period_with_check(int value){
        if (is_correct(value)){
            set_period(value);
        }
    }
};

class Carnivores: protected Dinosourus{
private: // по последнему заданию переопределяем свойство базового класса
    Dinosourus::len_neck;
};

class Mononic: Carnivores, Herbivores{
    
};
