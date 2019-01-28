////////////////////////////////////////////////////////////
//
// RenderSystem.h
// Created by Dale Sinnott
// 17/12/2018
//
////////////////////////////////////////////////////////////
#ifndef _RENDERSYSTEM_H_
#define _RENDERSYSTEM_H_

////////////////////////////////////////////////////////////
// Includes
////////////////////////////////////////////////////////////
///SFML
#include <SFML\Graphics.hpp>

///Frox
#include "System.h"
#include "components/SpriteComponent.h"
#include "components/TransformComponent.h"


class RenderSystem : public System
{
public:
	void update(std::shared_ptr<sf::RenderWindow> w);

};
#endif;