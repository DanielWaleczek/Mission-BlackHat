#ifndef TIMERS_H_INCLUDED
#define TIMERS_H_INCLUDED

//CREATING EVENT QUEUE
if(DEBUG) cmdGray cout<<"\n  Creating event queue...";
event_queue = al_create_event_queue();
if(!event_queue)
    ExitGame("Failed to create event_queue!");

//CREATING TIMERS
if(DEBUG) cout<<"\n  Creating timer_timer...";
timer_timer = al_create_timer(1 / FPS);
if(!timer_timer)
    ExitGame("Failed to create timer_timer!");

if(DEBUG) cout<<"\n  Creating timer_longtimer...";
timer_longtimer = al_create_timer(1 / LongFPS);
if(!timer_longtimer)
    ExitGame("Failed to create timer_longtimer!");

//REGISTERING EVENT_SOURCES
if(DEBUG) cout<<"\n  Registering event sources...";
if(DEBUG) cout<<"\n    Registering keyboard event source...";
al_register_event_source(event_queue, al_get_keyboard_event_source());
if(DEBUG) cout<<"\n    Registering mouse event source...";
al_register_event_source(event_queue, al_get_mouse_event_source());
if(JoystickInstalled)
{
    //!Do not use that if joystick is not installed because "Assertion Failed" will stop the game!
    if(DEBUG) cout<<"\n    Registering joystick event source...";
    al_register_event_source(event_queue, al_get_joystick_event_source());
}
if(DEBUG) cout<<"\n    Registering timer event source for timer_timer...";
al_register_event_source(event_queue, al_get_timer_event_source(timer_timer));
if(DEBUG) cout<<"\n    Registering timer event source for timer_animtimer...";
al_register_event_source(event_queue, al_get_timer_event_source(timer_longtimer));
if(DEBUG) cout<<"\n    Registering display event source...";
al_register_event_source(event_queue, al_get_display_event_source(display));

#endif // TIMERS_H_INCLUDED
