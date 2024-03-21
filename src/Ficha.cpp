/*
 * Ficha.cpp
 *
 *  Created on: 1 mar 2024
 *      Author: Sergio Orgaz Bravo
 */

#include "Ficha.h"

Ficha::Ficha() {
	Coordenada c;
	pos=c;

}

const string Ficha::movimientos []={"AR","I","D","AB"};

Ficha::Ficha(Coordenada pos) {
	this->pos=pos;
}

const Coordenada& Ficha::getPos() const {
	return pos;
}

void Ficha::setPos(const Coordenada &pos) {
	this->pos = pos;
}

void Ficha::moverArriba() {
	this->pos.setI(pos.getI()+1);
}

void Ficha::moverAbajo() {
	this->pos.setI(pos.getI()-1);
}

void Ficha::moverDerecha() {
	this->pos.setJ(pos.getJ()+1);
}

void Ficha::moverIzquierda() {
	this->pos.setJ(pos.getJ()-1);
}


Ficha::~Ficha() {
}

