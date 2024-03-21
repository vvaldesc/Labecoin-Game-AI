#include <iostream>
#include "Config.h"
#include "constants.h"
#include "Prueba.h"

#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>


using namespace std;

int main() {
    
    Prueba p;
    p.saludar();
    Config config;
    config.readXml();
    cout << "Hola mundoe" << FAV_NUM << endl;

    // Initialize Allegro
    al_init();
    al_init_primitives_addon();
    al_init_font_addon();
    al_init_ttf_addon();

    // Create a display
    ALLEGRO_DISPLAY* display = al_create_display(800, 600);
    if (!display) {
        cerr << "Failed to create display!" << endl;
        return 1;
    }

    // Main loop
    while (true) {
        // Clear the display
        al_clear_to_color(al_map_rgb(0, 0, 0));

        // Draw something
        al_draw_filled_rectangle(100, 100, 200, 200, al_map_rgb(255, 0, 0));

        // Flip the display
        al_flip_display();
    }

    // Destroy the display
    al_destroy_display(display);

    return 0;
}

