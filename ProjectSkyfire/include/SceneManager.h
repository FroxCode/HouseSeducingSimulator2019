////////////////////////////////////////////////////////////
//
// Created by Dale Sinnott
//
////////////////////////////////////////////////////////////
#ifndef _SCENEMANAGER_H_
#define _SCENEMANAGER_H_
////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <SFML\Graphics.hpp>
#include <iostream>
#include <memory>
#include <string>
#include "scenes/Scene.h"
#include "scenes/MenuScene.h"
#include "scenes/GameScene.h"

class SceneManager
{
public:
	////////////////////////////////////////////////////////////
	/// Default constructor
	///
	////////////////////////////////////////////////////////////
	SceneManager();

	////////////////////////////////////////////////////////////
	/// Default destructor
	///
	////////////////////////////////////////////////////////////
	~SceneManager();

	void fixedUpdate(sf::Event* e);
	void render();
	void setScene(std::string targetSceneName);
	std::string currentScene;
	std::shared_ptr<sf::RenderWindow> window;
	std::vector<Scene*> scenes;
	void initialise(std::shared_ptr<sf::RenderWindow> &window);

private:
	std::shared_ptr<sf::RenderWindow> w;
	MenuScene* menuScene;
	GameScene* gameScene;
};
#endif;