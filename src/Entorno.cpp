#include "Entorno.h"

#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>


Entorno::Entorno(Config config)
    : windowHeight(config.getWindowHeight()), 
      windowWidth(config.getWindowWidth()), 
      FPS(config.getFPS()), 
      gameTitle(config.getTitle()) {}

void Entorno::iniciarEntorno(){
    al_init();
    try
    {
        this->display = al_create_display(this->windowHeight, this->windowWidth);
    }
    catch(const std::exception& e)
    {
        cerr << e.what() << '\n';
    }
}

void Entorno::cerrarEntorno(){
    try
    {
        al_destroy_display(this->display);
    }
    catch(const std::exception& e)
    {
        cerr << e.what() << '\n';
    }
}

void Entorno::testAllegro(Config config)
{
    // Initialize Allegro

    al_init();
    if (!al_init())
    {
        cerr << "Failed to initialize Allegro!" << endl;
        throw runtime_error("Failed to initialize Allegro!");
    }

    // Crea un temporizador que se dispara después de 5 segundos
    ALLEGRO_TIMER* timer = al_create_timer(5.0);

    // Inicia el temporizador
    al_start_timer(timer);

    al_start_timer(timer);
    al_init_primitives_addon();
    al_init_ttf_addon();
    al_init_font_addon();

    // Create a display
    ALLEGRO_DISPLAY *display = al_create_display(config.getWindowHeight(), config.getWindowWidth());
    if (!display)
    {
        cerr << "Failed to create display!" << endl;
        throw runtime_error("Failed to create display!");
    }

    // Create an event queue
    ALLEGRO_EVENT_QUEUE *eventQueue = al_create_event_queue();
    if (!eventQueue)
    {
        cerr << "Failed to create event queue!" << endl;
        al_destroy_display(display);
        throw runtime_error("Failed to create event queue!");
    }

    // Register display events
    al_register_event_source(eventQueue, al_get_display_event_source(display));
    al_register_event_source(eventQueue, al_get_timer_event_source(timer));

    // Main loop
    bool running = true;
    
    do {


        // Clear the display
        al_clear_to_color(al_map_rgb(0, 0, 0));

        // Draw something
        al_draw_filled_rectangle(100, 100, 200, 200, al_map_rgb(255, 0, 0));

        // Flip the display
        al_flip_display();

        ALLEGRO_EVENT event;
        al_wait_for_event(eventQueue, &event);


    if (event.type == ALLEGRO_EVENT_DISPLAY_CLOSE || event.type == ALLEGRO_EVENT_TIMER)
        {
            running = false;
        }

    } while (running); // Add a semicolon here

    // Destruye el temporizador
    al_destroy_timer(timer);

    // Destroy the event queue
    al_destroy_event_queue(eventQueue);

    // Destroy the display
    al_destroy_display(display);
}

Entorno::~Entorno()
{

}