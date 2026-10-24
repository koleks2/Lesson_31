#pragma once
#include "Audio.h"

class Song : public Audio {
private:
    std::string title;
    std::string artist;
public:
    Song(std::string title, std::string artist) : title(title), artist(artist) {}

    void Play() const override {
        std::cout << "Playing song: " << title << " by " << artist << "\n";
    }
};