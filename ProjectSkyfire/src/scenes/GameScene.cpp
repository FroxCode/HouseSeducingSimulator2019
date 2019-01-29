#include "scenes/GameScene.h"
void GameScene::initialise()
{
	
}
void GameScene::update(sf::Event* e)
{
	switch (gameState)
	{
	case GameScene::IN_DEALERSHIP:

		break;
	case GameScene::IN_DATE:

		break;
	case GameScene::END_SCREEN:

		break;
	default:
		break;
	}
}
void GameScene::render(std::shared_ptr<sf::RenderWindow> &window)
{

}