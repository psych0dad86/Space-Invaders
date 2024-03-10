#pragma once
#include "LoadTexture.hpp"

class Window
{
public:
	Window();
	~Window();

	void Update();
	void RenderWindow();
	void Draw();
	sf::RenderWindow& GetRenderWindow();



private:
	void Create();
	void Destroy();

	


	sf::RenderWindow m_renderWindow;
	

	sf::Vector2u m_desktopSize;

};

