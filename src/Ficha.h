/*
 * Ficha.h
 *
 *  Created on: 1 mar 2024
 *      Author: Sergio Orgaz Bravo
 */

#ifndef SRC_FICHA_H_
#define SRC_FICHA_H_
#include "Coordenada.h"

class Ficha {

	Coordenada pos;

public:
	Ficha();

	//Métodos

	virtual ~Ficha();
};

#endif /* SRC_FICHA_H_ */
