// include libraries here (STL not allowed)
#include <iostream>
#include <string>
#include "playlist.h"


int main(int argc, char *argv[]){
    
    std::string command{};
    int max_size{};
    int n{};
    std::string song{};


    std::cin >> command;
    std::cin >> max_size;
    playlist P(max_size);

    do{
        std::cin >> command;

        if (command=="i") //adding song
        {
            std::getline(std::cin, song);
            song = song.substr(1);

            P.add(song);

        }else if (command=="p") //plays song - done
        {
            std::cin >> n;

            P.play(n);

        }else if (command=="e") //erases song - done
        {
            std::cin >> n;

            P.erase(n);

        }
    }while(command != "done");
    P.~playlist();
}