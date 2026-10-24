#pragma once
#include "Audio.h"

class Audiobook : public Audio {
private:
    std::string bookTitle;
    std::string author;
    std::string voice;
public:
    Audiobook(std::string bt, std::string a, std::string v)
        : bookTitle(bt), author(a), voice(v) {
    }

    void Play() const override {
        std::cout << "Listening to audiobook: " << bookTitle << " by " << author << ". Read by " << voice << ".\n";
    }
};