#include "systems/RenderSystem.h"

void RenderSystem::update(std::shared_ptr<sf::RenderWindow> w)
{
	std::cout << "RenderSystem update..." << std::endl;
	for (std::vector<Entity*>::iterator i = m_entities.begin(), e = m_entities.end(); i != e; i++)
	{
		for (int j = 0; j < (*i)->getComponents().size(); j++)
		{
			if ((*i)->getComponents().at(j)->getName() == "SpriteComponent")
			{
				SpriteComponent* tempSprite = static_cast<SpriteComponent*>((*i)->getComponents().at(j));
				for (int k = 0; k < (*i)->getComponents().size(); k++)
				{
					if ((*i)->getComponents().at(k)->getName() == "TransformComponent")
					{
						tempSprite->getSprite()->setPosition(static_cast<TransformComponent*>((*i)->getComponents().at(k))->getPosition());
					}
				}///update sprite position before draw
				w->draw(*(tempSprite->getSprite()));//wtf???
			}
		}
	}
}