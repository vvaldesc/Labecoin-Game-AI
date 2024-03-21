#ifndef ROBOT_H
#define ROBOT_H

#include "Ficha.h"

// Humanizar los sleeps de cada movimiento
#include <random>
#include <iostream>

using namespace std;

const int toleranciaDificultad = 3;

#pragma once

class Robot
{

private:
    string id;
    int dificultad;
    Ficha fr;

public:
    static const float dificultades[];

    Robot();

    int getDificultad() const;
    void setDificultad(int dificultad);
    const Ficha& getFr() const;
    void setFr(const Ficha &fr);
    const string &getId() const;
    void setId(const string &id);

    float getSleep(int toleranciaDificultad);

    virtual ~Robot();
};

#endif