#include "Robot.h"

Robot::Robot()
{
    this->dificultad = Robot::dificultades[0];
    this->id = "";
    Ficha f;
    this->fr = f;
}
// Facil a dificil
const float Robot::dificultades[] = {1.5, 1, 0.5};

int Robot::getDificultad() const
{
    return dificultad;
}

void Robot::setDificultad(int dificultad)
{
    this->dificultad = dificultad;
}

/*const Ficha& Robot::getFr() const {
    return fr;
}

void Robot::setFr(const Ficha &fr) {
    this->fr = fr;
}*/

const string &Robot::getId() const
{
    return id;
}

void Robot::setId(const string &id)
{
    this->id = id;
}

float Robot::getSleep(int toleranciaDificultad)
{
    int random = rand() % (toleranciaDificultad * (-1)) + toleranciaDificultad;
    return this->dificultad + (random / 10);
}

Robot::~Robot()
{
    // TODO Auto-generated destructor stub
}