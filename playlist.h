#ifndef PLAYLIST_H
#define PLAYLIST_H

// define your classes here...

class playlist{
public:
    //Constructor
    playlist(int n);

    //Destructor
    ~playlist();

    // Adds song
    void add(std::string song);

    // Plays song
    void play(int n);

    //Erases song
    void erase(int n);
    
private:
    int max_size;
    int num_songs;
    bool in_list{};
    std::string* songs = {};
};

#endif