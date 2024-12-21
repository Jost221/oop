#pragma once
#include<iostream>

using namespace std;


class Dinosourus{
protected:
    float len_arm;
    int len_neck;

public:
    virtual void speak() const;
    virtual void speak(string) const;

    virtual float getLenArm() const;
    virtual int getLenNeck() const;
    
    virtual void setLenArm() const;
    virtual void setLenNeck() const;
};

class Herbivores: public Dinosourus{
protected:
    int count_teeth;

public:
    Herbivores();
    Herbivores(float, int, int);

    void speak() const;
    void speak(string) const;
    
    float getLenArm() const;
    int getLenNeck() const;
    
    void setLenArm(float);
    void setLenNeck(int);
};
