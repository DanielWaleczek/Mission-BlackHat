#ifndef KEYBOARD_H_INCLUDED
#define KEYBOARD_H_INCLUDED

if(event.timer.source == timer_timer)
{
    al_get_keyboard_state(&keyboard_state);

    if(al_key_down(&keyboard_state, ALLEGRO_KEY_ESCAPE))
        Exit=true;
    else if(al_key_down(&keyboard_state, ALLEGRO_KEY_W))
        player1.y-=player1.speed;
    else if(al_key_down(&keyboard_state, ALLEGRO_KEY_A))
        player1.x-=player1.speed;
    else if(al_key_down(&keyboard_state, ALLEGRO_KEY_S))
        player1.y+=player1.speed;
    else if(al_key_down(&keyboard_state, ALLEGRO_KEY_D))
        player1.x+=player1.speed;
}

#endif // KEYBOARD_H_INCLUDED
