/*
 * Coordenada.h
 *
 *  Created on: 15 abr. 2023
 *      Author: alumno
 */

#ifndef COORDENADA_H_
#define COORDENADA_H_
#include <string>
#include <iostream>
using namespace std;
#include <vector>

class Coordenada {
	int i;
	int j;
public:
	Coordenada();

	Coordenada(int i, int j);

	int getI() const;
	void setI(int i);
	int getJ() const;
	void setJ(int j);
	//vector<int> toArray();


	virtual ~Coordenada();
};

#endif /* COORDENADA_H_ */
