#include "HomeTheaterFacade.h"
#include "Amplifier.h"
#include "Tuner.h"
#include "DvdPlayer.h"
#include "CdPlayer.h"
#include "Projector.h"
#include "TheaterLights.h"
#include "Screen.h"
#include "PopcornPopper.h"

int main()
{
    Amplifier* amp = new Amplifier("Top-O-Line Amplifier");
    Tuner* tuner = new Tuner("Top-O-Line AM/FM Tuner", *amp);
    DvdPlayer* dvd = new DvdPlayer("Top-O-Line DVD Player", *amp);
    CdPlayer* cd = new CdPlayer("Top-O-Line CD Player", *amp);
    Projector* projector = new Projector("Top-O-Line Projector", *dvd);
    TheaterLights* lights = new TheaterLights("Theater Ceiling Lights");
    Screen* screen = new Screen("Theater Screen");
    PopcornPopper* popper = new PopcornPopper("Popcorn Popper");

    HomeTheaterFacade homeTheater(amp, tuner, dvd, cd, projector, lights, screen, popper);
    homeTheater.watchMovie("Raiders of the Lost Ark");
    homeTheater.endMovie();

    delete amp;
    delete tuner;
    delete dvd;
    delete cd;
    delete projector;
    delete lights;
    delete screen;
    delete popper;

    return 0;
}