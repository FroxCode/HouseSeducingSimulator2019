////////////////////////////////////////////////////////////
//
// MenuScene.h
// Created by Dale Sinnott
// 18/12/2018
//
////////////////////////////////////////////////////////////
#ifndef _MENUSCENE_H_
#define _MENUSCENE_H_

////////////////////////////////////////////////////////////
// Includes
////////////////////////////////////////////////////////////
///Frox
#include "Scene.h"
#include "Entity.h"
#include "Dialogue.h"

#include "systems/RenderSystem.h"
#include "systems/ControlSystem.h"
#include "systems/CollisionSystem.h"

#include "components/HSS19/ButtonComponent.h"

#include "components/BoxColliderComponent.h"
#include "components/SpriteComponent.h"
#include "components/TextComponent.h"
#include "components/MusicComponent.h"
#include "components/SoundComponent.h"
#include "components/TransformComponent.h"


class MenuScene : public Scene
{
public:
	MenuScene(std::string name);
	////////////////////////////////////////////////////////////
	/// Member functions
	////////////////////////////////////////////////////////////
	void initialise();
	void update(sf::Event* e);
	void render(std::shared_ptr<sf::RenderWindow> &window);

	Entity* m_background;
	Entity* m_playButton;

	RenderSystem renderSystem;
	ControlSystem controlSystem;
	CollisionSystem collisionSystem;

};
#endif;