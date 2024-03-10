#include "Game.hpp"

Game::Game() : m_elapsedTime(0), m_frames(120), m_sec(1)
{
	m_frameTime = m_sec / m_frames; 
	m_elapsedClock.restart();

}

Game::~Game()
{
	std::cout << "Game was closed" << std::endl;
}

void Game::Update()
{
	
	if (m_elapsedTime > m_frameTime)
	{
		m_window.Update();
		m_elapsedTime -= m_frameTime;
	}

	this->ResetElapsedClock();
}

void Game::Render()
{
	m_window.RenderWindow();
}

bool Game::RenderWindowIsOpen()
{
	return m_window.GetRenderWindow().isOpen();
}

void Game::ResetElapsedClock()
{
	m_elapsedTime += m_elapsedClock.restart().asSeconds();
}
