/*
 * Coordenada.cpp
 *
 *  Created on: 15 abr. 2023
 *      Author: alumno
 */

#include "Coordenada.h"

Coordenada::Coordenada() {
	this->i=0;
	this->j=0;
}

Coordenada::Coordenada(int i, int j) {
	this->i=i;
	this->j=j;
}

int Coordenada::getI() const {
	return i;
}

void Coordenada::setI(int i) {
	this->i = i;
}

int Coordenada::getJ() const {
	return j;
}

void Coordenada::setJ(int j) {
	this->j = j;
}

std::vector<int> Coordenada::toVector(){
	std::vector<int> coordenada;
	coordenada.push_back(this->i);
	coordenada.push_back(this->j);
	return coordenada;
}

std::string Coordenada::toString(){
	return "(" + std::to_string(this->i) + ", " + std::to_string(this->j) + ")";
}

Coordenada::~Coordenada() {
	// TODO Auto-generated destructor stub
}

