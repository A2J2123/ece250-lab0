#include <iostream>
#include <string>
#include "playlist.h"

playlist::playlist(int n){
    songs = new std::string[n];
    num_songs = 0;
    max_size = n;
    for(int x=0; x<max_size; x++){
        songs[x]="";
    }

    std::cout << "success" << std::endl;
}

playlist::~playlist(){
    delete[] songs;
    max_size=0;
    songs = nullptr;
}

void playlist::add(std::string song){
    in_list=0;
    for(int x=0; x<max_size; x++){ //sets "in_list" to true if song is already in the playlist
        if(song == songs[x]){
            in_list=1;
        }
    }

    if(song == "Baby;Justin Bieber" || song.substr(0, song.find(';')) == "My Heart Will Go On" || in_list || num_songs>=max_size){
        std::cout << "can not insert " << song << std::endl;
    } else{
        for(int x=0; x<max_size; x++){ //adds song to playlist and set's "in_list" to true
            if(songs[x]==""){
                songs[x]=song;
                num_songs++;
                std::cout << "success" << std::endl;
                break;
            }
        }
    }
}

void playlist::play(int n){
    if(n<0 || n>=max_size || songs[n]==""){
        std::cout << "can not play " << n << std::endl;
    }else{
        std::cout << "played " << n << " " << songs[n] << std::endl;
    }
}

void playlist::erase(int n){
    if(n<0 || n>=max_size || songs[n]==""){
        std::cout << "can not erase " << n << std::endl;
    }else{
        for(int x = n; x<(max_size-1); x++){
            songs[x]=songs[x+1];
        }
        songs[max_size-1]="";
        num_songs--;
        std::cout << "success" << std::endl;
    }
}