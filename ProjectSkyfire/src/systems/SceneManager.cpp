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
	if (m_currentScene == "Menu")
	{
		for (std::vector<Scene*>::iterator i = m_scenes.begin(), e = m_scenes.end(); i != e; i++) {
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
	else if (m_currentScene == "Game")
	{
		for (std::vector<Scene*>::iterator i = m_scenes.begin(), e = m_scenes.end(); i != e; i++) {
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
	if (m_currentScene == "Menu")
	{
		for (std::vector<Scene*>::iterator i = m_scenes.begin(), e = m_scenes.end(); i != e; i++) {
			if ((*i)->getName() == "Menu")
			{
				static_cast<MenuScene*>(*i)->render(m_window);
			}
		}
	}
	else if (m_currentScene == "Game")
	{
		for (std::vector<Scene*>::iterator i = m_scenes.begin(), e = m_scenes.end(); i != e; i++) {
			if ((*i)->getName() == "Game")
			{
				static_cast<GameScene*>(*i)->render(m_window);
			}
		}
	}
}
void SceneManager::setScene(std::string targetSceneName)
{
	m_scenes.clear();
	m_currentScene = targetSceneName;
	if (m_currentScene == "Menu")
	{
		m_menuScene = new MenuScene("Menu");
		m_scenes.push_back(m_menuScene);
	}
	else if (m_currentScene == "Game")
	{
		m_gameScene = new GameScene("Game");
		m_scenes.push_back(m_gameScene);
	}
}
