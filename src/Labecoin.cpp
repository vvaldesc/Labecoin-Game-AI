#include "Labecoin.h"

#include <thread>
#include <unistd.h>

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
    Entorno entorno = Entorno(config);

    /*thread testAllegroThread([&]() {
        entorno.testAllegro(config);
    });

    thread LabecoinThread([&]() {
        // Espera a que el hilo testAllegro termine
        testAllegroThread.join();
        // Imprime el mensaje
        cout << "El proceso testAllegro ha finalizado." << endl;

    });*/

    // Espera a que el hilo de monitoreo termine
    //LabecoinThread.join();

    entorno.testAllegro(config);
    cout << "El proceso testAllegro ha finalizado." << endl;
    entorno.iniciarEntorno();
    sleep(3);
    entorno.cerrarEntorno();
}



Labecoin::~Labecoin()
{
}