#include "Window.hpp"

Window::Window() : m_desktopSize(1920, 1280)
{
	this->Create();

}

Window::~Window()
{

	std::cout << "Window was closed" << std::endl;
}


void Window::Create()
{
	m_renderWindow.create(sf::VideoMode(m_desktopSize.x, m_desktopSize.y), "Space Shooter", sf::Style::None);

}

void Window::Destroy()
{
	m_renderWindow.close();
}

void Window::Update()
{
	sf::Event m_event;
		while (m_renderWindow.pollEvent(m_event))
	{
		if (m_event.type == sf::Event::Closed ||( m_event.type == sf::Event::KeyPressed && m_event.key.code == sf::Keyboard::F5))
		{				
			m_renderWindow.close();
		}
	}

}

void Window::RenderWindow()
{
	m_renderWindow.clear(sf::Color::Black);

	this->Draw();
	m_renderWindow.display();
}

void Window::Draw()
{
	sf::Sprite sprite;
	sf::Texture texture;
	texture.loadFromFile("./Sprites/Background/Map_01_1536x2048.png");
	texture.setSmooth(true);
	sprite.setTexture(texture);
	
	sprite.setOrigin(0, texture.getSize().y);
	sprite.setPosition(0, 1280);
	float scalex = 1920.f / texture.getSize().x;
	sprite.setScale(scalex, 0.7f);
	m_renderWindow.draw(sprite);
}


sf::RenderWindow& Window::GetRenderWindow()
{
	return m_renderWindow;
}
