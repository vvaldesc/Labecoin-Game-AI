/*
 * Robot.h
 *
 *  Created on: 1 mar 2024
 *      Author: Sergio Orgaz Bravo
 */

#ifndef SRC_ROBOT_H_
#define SRC_ROBOT_H_
#include "Ficha.h"
#include <iostream>
#include <random>
using namespace std;


const int toleranciaDificultad =3;

class Robot{

	string id;
	int dificultad;
	Ficha fr;

public:

	static const float dificultades [];

	Robot();

	int getDificultad() const;
	void setDificultad(int dificultad);
	const Ficha& getFr() const;
	void setFr(const Ficha &fr);
	const string& getId() const;
	void setId(const string &id);

	float getSleep(int toleranciaDificultad);

	virtual ~Robot();

};

#endif /* SRC_ROBOT_H_ */
