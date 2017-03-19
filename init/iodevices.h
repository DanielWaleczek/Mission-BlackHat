#ifndef IODEVICES_H_INCLUDED
#define IODEVICES_H_INCLUDED

cout<<"\nInstalling input devices...";

if(!al_install_keyboard())
    ExitGame("Failed to install keyboard!");
if(!al_install_mouse())
    ExitGame("Failed to install mouse!");
if(!al_install_joystick())
{
    cmdRed cout<<"\nFailed to install Joystick drivers!";
    JoystickInstalled = 0;
}
else//If drivers are installed.
{
    joystick = al_get_joystick(0);//Searching for joystick
    if(!joystick)//If joystick is not found
    {
        cmdGray cout<<"\n  Joystick not found.";
        JoystickInstalled = 0;//Joystick is disabled
    }
    else
    {
        cout<<"\n  Joystick found.";
        JoystickInstalled = 1;//Joystick is successfully installed and ready to use
    }
}

#endif // IODEVICES_H_INCLUDED
