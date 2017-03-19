#ifndef INIT_H_INCLUDED
#define INIT_H_INCLUDED
//Initialization Module
//Game initialization
cout<<"\nInitializing Allegro5...";
#include "init/allegro.h"

cout<<"\nLoading fonts...";
#include "init/fonts.h"

cout<<"\nInitializing display...";
#include "init/display.h"

cout<<"\nInitializing and loading audio...";
#include "init/audio.h"

cout<<"\nLoading bitmaps...";
#include "init/bitmaps.h"

cout<<"\nLoading I/O devices...";
#include "init/iodevices.h"

cout<<"\nCreating timers...";
#include "init/timers.h"


MainMenu();

#endif // INIT_H_INCLUDED
