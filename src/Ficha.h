/*
 * Ficha.h
 *
 *  Created on: 1 mar 2024
 *      Author: Sergio Orgaz Bravo
 */

#ifndef SRC_FICHA_H_
#define SRC_FICHA_H_

#include "Coordenada.h"

#include <string>
using namespace std;


class Ficha {

	Coordenada pos;

public:

	static const string movimientos [];

	Ficha();
	Ficha(Coordenada pos);

	const Coordenada& getPos() const;
	void setPos(const Coordenada &pos);

	void moverArriba();
	void moverAbajo();
	void moverDerecha();
	void moverIzquierda();

	virtual ~Ficha();

};

#endif /* SRC_FICHA_H_ */