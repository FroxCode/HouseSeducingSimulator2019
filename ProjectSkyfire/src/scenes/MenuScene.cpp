//Created by Dale Sinnott
#include "scenes/MenuScene.h"

MenuScene::MenuScene(std::string name) :
	Scene(name), m_background("background"), m_playButton("playButton")
{
	initialise();
}

void MenuScene::initialise()
{
	std::cout << "Menu init" << std::endl;
	changeScene = false;

	m_background.addComponent(new TransformComponent());
	m_background.addComponent(new SpriteComponent(backgroundPath));

	m_playButton.addComponent(new TransformComponent(buttonPosition));
	m_playButton.addComponent(new SpriteComponent(buttonPath));
	m_playButton.addComponent(new ButtonComponent());
	m_playButton.addComponent(new BoxColliderComponent());
	static_cast<BoxColliderComponent*>(m_playButton.getComponents().at(3))->setBox(sf::FloatRect(0, 0, 300, 175));///hard and magic numbers but its fine until i figure out a more elegant solution
	m_playButton.addComponent(new TextComponent());
	static_cast<TextComponent*>(m_playButton.getComponents().at(4))->setString(m_playButtonText);
	static_cast<TextComponent*>(m_playButton.getComponents().at(4))->setFillColor(sf::Color(0,0,0,255));

	renderSystem.addEntity(&m_background);
	renderSystem.addEntity(&m_playButton);

	controlSystem.addEntity(&m_playButton);
}
void MenuScene::update(sf::Event* e)
{
	controlSystem.update(e);
}
void MenuScene::render(std::shared_ptr<sf::RenderWindow> &window)
{
	renderSystem.update(window);
}