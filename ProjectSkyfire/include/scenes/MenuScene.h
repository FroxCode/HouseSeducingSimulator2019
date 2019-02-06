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

	Entity m_background;
	const std::string backgroundPath = "assets/sprites/backgrounds/mainMenu.png";

	Entity m_playButton;
	const std::string buttonPath = "assets/sprites/ui/button.png";
	sf::Vector2f buttonPosition = sf::Vector2f(960, 540);

	RenderSystem renderSystem;
	ControlSystem controlSystem;

	bool changeScene;

};
#endif;