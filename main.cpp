#include "Game.hpp"

int main()
{
    Game game;

    while (game.RenderWindowIsOpen())
    {
        game.Update();
        game.Render();
    }


    return 0;
}