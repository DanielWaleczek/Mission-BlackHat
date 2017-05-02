#ifndef IODEVICES_H_INCLUDED
#define IODEVICES_H_INCLUDED

if(DEBUG) cout<<"\n  Installing drivers for keyboard...";
if(!al_install_keyboard())
    ExitGame("Failed to install drivers for keyboard!");

if(DEBUG) cout<<"\n  Installing drivers for mouse...";
if(!al_install_mouse())
    ExitGame("Failed to install drivers for keyboard!");

if(DEBUG) cout<<"\n  Installing drivers for joystick...";
if(!al_install_joystick())
{
    cmdRed cout<<"\n    Failed to install drivers for joystick!";
    JoystickInstalled = 0;
}
else//If drivers are installed.
{
    joystick = al_get_joystick(0);//Searching for joystick
    if(!joystick)//If joystick is not found
    {
        cmdGray cout<<"\n    Joystick not found.";
        JoystickInstalled = 0;//Joystick is disabled
    }
    else
    {
        cout<<"\n    Joystick found.";
        JoystickInstalled = 1;//Joystick is successfully installed and ready to use
    }
}

cursor = al_create_mouse_cursor(bitmap_crosshair, 0, 0);

#endif // IODEVICES_H_INCLUDED
