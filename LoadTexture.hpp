#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp> 
#include <iostream>
#include <string>
#include <memory>

enum class KindTexture{INTRO,MENU, PLAYER, LVL1, LVL2, LVL3, LVL4};

class LoadTexture
{
public:
	LoadTexture(KindTexture& instance);
	~LoadTexture();

	//Loading Texture
	void LoadingTextureINTRO();
	void LoadingTextureMENU();
	void LoadingTexturePLAYER();
	void LoadingTextureLVL1();
	void LoadingTextureLVL2();
	void LoadingTextureLVL3();
	void LoadingTextureLVL4();


private:

	KindTexture m_kind;

	std::string m_stringKind;


};

