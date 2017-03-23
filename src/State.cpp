#include "State.hpp"

State::State () : bg (std::string ("./resources/img/ocean.jpg")) {
    quitRequested = false;
}

bool State::QuitRequested () {
    return quitRequested;
}

void State::LoadAssets () {

}

void State::Update (float dt) {
    quitRequested = SDL_QuitRequested ();
}

void State::Render () {
    bg.Render (0, 0);
}