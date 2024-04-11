#ifndef ENTORNO_H
#define ENTORNO_H

#pragma once

#include "Config.h"
#include <string>
#include <allegro5/allegro.h> // Add the missing include directive
#include <allegro5/allegro_font.h>

class Entorno

{
public:
    Entorno(Config config);
    void testAllegro(Config config); // Add the missing function definition
    void iniciarEntorno(); //Inits graphic envoroiment
    void cerrarEntorno(); //Closes graphic envoroiment
    void escribirTitulo(); //Closes graphic envoroiment
    ~Entorno();
private:
    int windowHeight;
    int windowWidth;
    int FPS;
    const char *gameTitle;

    ALLEGRO_DISPLAY *display;
    ALLEGRO_FONT *font; // Añade esta línea
};

#endif