#pragma once

#include "Window.hpp"
class Game
{
public:
	Game();
	~Game();

	void Update();
	void Render();

	bool RenderWindowIsOpen();
	void ResetElapsedClock();

private:

	Window m_window;
	
	
	
	//Time
	sf::Clock m_elapsedClock;
	float m_elapsedTime;
	float m_frameTime;
	float m_frames;
	float m_sec;

};
