#include "Labecoin.h"

#include <thread>

Labecoin::Labecoin()
{
}

void Labecoin::init()
{
    // Initialize the Labecoin

    // CLASE CON TODA LA CONFIGURACION NECESARIA
    Config config;
    //config.readXml();
    //cout << config.toString() << endl;

    // CLASE DE COORDENADAS
    Coordenada coord = Coordenada(1, 2);
    Entorno entorno = Entorno();

    thread testAllegroThread([&]() {
        entorno.testAllegro(config);
    });

    thread monitorThread([&]() {
        // Espera a que el hilo testAllegro termine
        testAllegroThread.join();
        // Imprime el mensaje
        std::cout << "El proceso testAllegro ha finalizado." << std::endl;
    });

    // Espera a que el hilo de monitoreo termine
    monitorThread.join();

    cout << coord.toString() << endl;
}



Labecoin::~Labecoin()
{
}