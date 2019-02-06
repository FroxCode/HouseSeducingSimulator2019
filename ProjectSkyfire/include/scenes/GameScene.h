////////////////////////////////////////////////////////////
//
// GameScene.h
// Created by Dale Sinnott
// 18/12/2018
//
////////////////////////////////////////////////////////////
#ifndef _GAMESCENE_H_
#define _GAMESCENE_H_

////////////////////////////////////////////////////////////
// Includes
////////////////////////////////////////////////////////////
///Frox
#include "Scene.h"
#include "systems/CollisionSystem.h"
#include "components/TextComponent.h"
#include "systems/RenderSystem.h"
#include "Dialogue.h"

class GameScene : public Scene
{
public:
	////////////////////////////////////////////////////////////
	/// Member functions
	////////////////////////////////////////////////////////////
	GameScene(std::string name);

	void initialise();
	void update(sf::Event* e);
	void render(std::shared_ptr<sf::RenderWindow> &window);

	enum GameStates { IN_DEALERSHIP, IN_DATE, END_SCREEN };
	enum DialogueStates {
		DateIntro, IntroResponse, 
		ThisOrThat, ThisOrThatResponse,
		GettingToKnowYou, GettingToKnowYouResponse, 
		OverallResponse
	};

	GameStates gameState = GameStates::IN_DEALERSHIP;
	DialogueStates dialogueState = DialogueStates::DateIntro;

	std::string fontName = "assets/fonts/default.ttf";

	sf::Vector2f leftPos = sf::Vector2f(50, 850);
	sf::Vector2f midPos = sf::Vector2f(650, 850);
	sf::Vector2f rightPos = sf::Vector2f(1250, 850);

	sf::Vector2f buttonScale = sf::Vector2f(0.75f, 0.25f);

	//////////////////////////////////SYSTEMS//////////////////////////////
	CollisionSystem m_collisionSystem;
	RenderSystem m_renderSystem;

	//////////////////////////////////ENTITIES/////////////////////////////
	Entity* m_currentHouse;
	Entity* m_currentBackground;
	Entity* m_realEstateAgent;
	Entity* m_dialogueBox;
	std::vector<Entity*> m_houses;
	int const MAX_HOUSES = 9;
	std::vector<Entity*> m_buttons;
	int const MAX_BUTTONS = 3;
};
#endif;