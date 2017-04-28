#ifndef KEYBOARD_H_INCLUDED
#define KEYBOARD_H_INCLUDED

if(event.timer.source == timer_timer)
{
    al_get_keyboard_state(&keyboard_state);

    if(al_key_down(&keyboard_state, ALLEGRO_KEY_ESCAPE))
        Exit=true;
    else if(al_key_down(&keyboard_state, ALLEGRO_KEY_F))
        ally.following = !ally.following;
    /*else if(al_key_down(&keyboard_state, ALLEGRO_KEY_W) && al_key_down(&keyboard_state, ALLEGRO_KEY_A))
    {
        player1.y-=player1.speed;
        player1.x-=player1.speed;
    }
    else if(al_key_down(&keyboard_state, ALLEGRO_KEY_W) && al_key_down(&keyboard_state, ALLEGRO_KEY_D))
    {
        player1.y-=player1.speed;
        player1.x+=player1.speed;
    }
    else if(al_key_down(&keyboard_state, ALLEGRO_KEY_S) && al_key_down(&keyboard_state, ALLEGRO_KEY_A))
    {
        player1.y+=player1.speed;
        player1.x-=player1.speed;
    }
    else if(al_key_down(&keyboard_state, ALLEGRO_KEY_S) && al_key_down(&keyboard_state, ALLEGRO_KEY_D))
    {
        player1.y+=player1.speed;
        player1.x+=player1.speed;
    }*/

    if(al_key_down(&keyboard_state, ALLEGRO_KEY_W))
        player1.y-=player1.speed;
    if(al_key_down(&keyboard_state, ALLEGRO_KEY_A))
        player1.x-=player1.speed;
    if(al_key_down(&keyboard_state, ALLEGRO_KEY_S))
        player1.y+=player1.speed;
    if(al_key_down(&keyboard_state, ALLEGRO_KEY_D))
        player1.x+=player1.speed;
    if(al_key_down(&keyboard_state, ALLEGRO_KEY_MINUS))
        player1.HP--;
    if(al_key_down(&keyboard_state, ALLEGRO_KEY_EQUALS))
        player1.HP++;
    if(al_key_down(&keyboard_state, ALLEGRO_KEY_SPACE))
        player1.shot=true;
}

#endif // KEYBOARD_H_INCLUDED
