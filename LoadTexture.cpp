#include "LoadTexture.hpp"

LoadTexture::LoadTexture(KindTexture& instance) : m_kind(instance)
{
	switch (m_kind)
	{
	case KindTexture::INTRO:
		m_stringKind = "INTRO";
		break;
	case KindTexture::MENU:
		m_stringKind = "MENU";
		break;
	case KindTexture::PLAYER:
		m_stringKind = "PLAYER";
		break;
	case KindTexture::LVL1:
		m_stringKind = "LVL1";
		break;
	case KindTexture::LVL2:
		m_stringKind = "LVL2";
		break;
	case KindTexture::LVL3:
		m_stringKind = "LVL3";
		break;
	case KindTexture::LVL4:
		m_stringKind = "LVL4";
		break;
	default:
		std::cout << ">> Switch Case m_kind LoadTexture.hpp failed <<" << std::endl;
		m_stringKind = "ERROR";
		break;
	}
}

LoadTexture::~LoadTexture()
{
	std::cout << m_stringKind << ": was delete" << std::endl;
}
