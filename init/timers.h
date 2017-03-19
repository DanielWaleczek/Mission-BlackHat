#ifndef TIMERS_H_INCLUDED
#define TIMERS_H_INCLUDED

//CREATING EVENT QUEUE
cmdGray cout<<"\nCreating event queue...";
event_queue = al_create_event_queue();
if(!event_queue)
    ExitGame("Failed to create event_queue!");
//CREATING TIMERS
cout<<"\nCreating timers...";
timer_timer = al_create_timer(1 / FPS);
if(!timer_timer)
    ExitGame("Failed to create timer_timer!");
timer_animtimer = al_create_timer(1 / AnimFPS);
if(!timer_animtimer)
    ExitGame("Failed to create timer_animtimer!");

//REGISTERING EVENT_SOURCES
cout<<"\nRegistering event sources";
al_register_event_source(event_queue, al_get_keyboard_event_source());
al_register_event_source(event_queue, al_get_mouse_event_source());
if(JoystickInstalled)
{//!Do not use that if joystick is not installed because "Assertion Failed" will stop the game!
    al_register_event_source(event_queue, al_get_joystick_event_source());
}
al_register_event_source(event_queue, al_get_timer_event_source(timer_timer));
al_register_event_source(event_queue, al_get_timer_event_source(timer_animtimer));
al_register_event_source(event_queue, al_get_display_event_source(display));

#endif // TIMERS_H_INCLUDED
