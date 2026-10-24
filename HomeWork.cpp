#include <iostream>
#include <string>
#include "Song.h"
#include "Podcast.h"
#include "Audiobook.h"

int main() {
    int choice;

    do {
        std::cout << "Select audio type:\n";
        std::cout << "1. Song\n";
        std::cout << "2. Podcast\n";
        std::cout << "3. Audiobook\n";
        std::cout << "0. Exit\n";
        std::cout << "> ";

        if (!(std::cin >> choice)) {
            break;
        }

        if (choice == 0) {
            break;
        }

        std::cin.ignore();

        Audio* audio = nullptr;

        switch (choice) {
        case 1: {
            std::string title, artist;
            std::cout << "Enter song title: ";
            std::getline(std::cin, title);
            std::cout << "Enter artist: ";
            std::getline(std::cin, artist);
            audio = new Song(title, artist);
            break;
        }
        case 2: {
            std::string host, topic;
            std::cout << "Enter host: ";
            std::getline(std::cin, host);
            std::cout << "Enter topic: ";
            std::getline(std::cin, topic);
            audio = new Podcast(host, topic);
            break;
        }
        case 3: {
            std::string bookTitle, author, voice;
            std::cout << "Enter book title: ";
            std::getline(std::cin, bookTitle);
            std::cout << "Enter author: ";
            std::getline(std::cin, author);
            std::cout << "Enter voice actor: ";
            std::getline(std::cin, voice);
            audio = new Audiobook(bookTitle, author, voice);
            break;
        }
        default:
            std::cout << "Invalid choice!\n";
            break;
        }

        if (audio != nullptr) {
            audio->Play();
            delete audio;
        }

    } while (choice != 0);
}