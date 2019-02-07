//Created by Dale Sinnott
#include "SceneManager.h"
#include <iostream>

SceneManager::SceneManager()
{

}
SceneManager::~SceneManager()
{

}
void SceneManager::initialise(std::shared_ptr<sf::RenderWindow> &window)
{
	m_window = window;
	setScene("Menu");
}
void SceneManager::fixedUpdate(sf::Event* evt)
{
	if (currentScene == "Menu")
	{
		for (std::vector<Scene*>::iterator i = scenes.begin(), e = scenes.end(); i != e; i++) {
			if ((*i)->getName() == "Menu")
			{
				static_cast<MenuScene*>(*i)->update(evt);
				/*if (static_cast<MenuScene*>(*i)->boinker.playButtonPressed)
				{
					setScene("Game");
				}*/

				break;
			}
		}
	}
	else if (currentScene == "Game")
	{
		for (std::vector<Scene*>::iterator i = scenes.begin(), e = scenes.end(); i != e; i++) {
			if ((*i)->getName() == "Game")
			{
				static_cast<GameScene*>(*i)->update(evt);
				break;
			}
		}
	}
}
void SceneManager::render()
{
	if (currentScene == "Menu")
	{
		for (std::vector<Scene*>::iterator i = scenes.begin(), e = scenes.end(); i != e; i++) {
			if ((*i)->getName() == "Menu")
			{
				static_cast<MenuScene*>(*i)->render(window);
			}
		}
	}
	else if (currentScene == "Game")
	{
		for (std::vector<Scene*>::iterator i = scenes.begin(), e = scenes.end(); i != e; i++) {
			if ((*i)->getName() == "Game")
			{
				static_cast<GameScene*>(*i)->render(window);
			}
		}
	}
}
void SceneManager::setScene(std::string targetSceneName)
{
	scenes.clear();
	currentScene = targetSceneName;
	if (currentScene == "Menu")
	{
		menuScene = new MenuScene("Menu");
		scenes.push_back(menuScene);
	}
	else if (currentScene == "Game")
	{
		gameScene = new GameScene("Game");
		scenes.push_back(gameScene);
	}
}
