#include "Labecoin.h"

Labecoin::Labecoin()
{
}

void Labecoin::init()
{
    // Initialize the Labecoin

    // CLASE CON TODA LA CONFIGURACION NECESARIA
    Config config;
    config.readXml();
    cout << config.toString() << endl;

    // CLASE DE COORDENADAS
    Coordenada coord = Coordenada(1, 2);
    cout << coord.toString() << endl;
}

Labecoin::~Labecoin()
{
}