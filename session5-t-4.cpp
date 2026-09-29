#include <iostream>
using namespace std;

class MusicPlayer
{
public:
    virtual void play(string song)
    {
        cout << "Playing: " << song;
    }
};

class SpotifyPlayer : public MusicPlayer
{
public:
    void play(string song) override
    {
        cout << "Streaming on Spotify: " << song;
    }
};

int main()
{
    MusicPlayer *player;

    SpotifyPlayer spotify;

    player = &spotify;

    player->play("Perfect");
}