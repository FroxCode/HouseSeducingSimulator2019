////////////////////////////////////////////////////////////
//
// TextComponent.h (Simple text object/information)
// This component sets up a text object with a font, so its always ready for config
// Created by Dale Sinnott
// 08/01/2019
//
////////////////////////////////////////////////////////////
#ifndef _TEXTCOMPONENT_H_
#define _TEXTCOMPONENT_H_

////////////////////////////////////////////////////////////
// Includes
////////////////////////////////////////////////////////////
///Frox
#include "Component.h"

///SFML
#include "SFML/Graphics/Text.hpp"
#include "SFML/Graphics/Font.hpp"
#include "SFML/Graphics/Transform.hpp"

///C++
#include <iostream>

class TextComponent : public Component
{
public:
	////////////////////////////////////////////////////////////
	/// Overloaded constructor
	////////////////////////////////////////////////////////////
	TextComponent(std::string fontName = "assets/fonts/default.ttf") :
		Component("TextComponent"),
		m_fontName(fontName)
	{
		loadText();
	}

	////////////////////////////////////////////////////////////
	/// Destructor (for overriding virtual function in abstract 
	/// base Component)
	////////////////////////////////////////////////////////////
	~TextComponent() {}

	////////////////////////////////////////////////////////////
	/// Getters/Setters
	////////////////////////////////////////////////////////////
	void setText(sf::Text text) { m_text = std::make_shared<sf::Text>(text); }
	std::shared_ptr<sf::Text> getText() { return m_text; }

	void setFont(sf::Font font) { m_font = std::make_shared<sf::Font>(font); }
	std::shared_ptr<sf::Font> getFont() { return m_font; }

	void setFontName(std::string fontName) { m_fontName = fontName; }
	std::string getFontName() { return m_fontName; }

	void setString(std::string string) 
	{
		m_text->setString(string);
		m_text->setOrigin(m_text->getGlobalBounds().width / 2, m_text->getGlobalBounds().height / 2);
	}
	void setFillColor(sf::Color color)
	{
		m_text->setFillColor(color);
	}
	void setOutlineColor(sf::Color color)
	{
		m_text->setOutlineColor(color);
	}
	void setOutlineThickness(float thic)
	{
		m_text->setOutlineThickness(thic);
	}
	void setSize(sf::Vector2f size)
	{
		m_text->setScale(size);
	}
	void loadText()
	{
		m_text = std::make_shared<sf::Text>();
		m_font = std::make_shared<sf::Font>();
		if (!m_font->loadFromFile(m_fontName))
		{
			std::cout << "Unknown error occured loading file: " 
				+ m_fontName << std::endl;
		}
		else
		{
			m_text->setFont(*m_font);
			m_text->setCharacterSize(200);
		}
	}
private:
	////////////////////////////////////////////////////////////
	/// Member Variables
	////////////////////////////////////////////////////////////
	std::shared_ptr<sf::Text> m_text;
	std::shared_ptr<sf::Font> m_font; 
	std::string m_fontName;

	

};
#endif;