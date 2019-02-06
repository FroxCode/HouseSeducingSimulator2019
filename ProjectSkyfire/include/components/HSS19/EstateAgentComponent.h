////////////////////////////////////////////////////////////
//
// EstateAgentComponent.h 
// Created by Dale Sinnott
// 08/01/2019
//
////////////////////////////////////////////////////////////
#ifndef _ESTATEAGENTCOMPONENT_H_
#define _ESTATEAGENTCOMPONENT_H_

////////////////////////////////////////////////////////////
// Includes
////////////////////////////////////////////////////////////
///Frox
#include "components/Component.h"

class EstateAgentComponent : public Component
{
public:
	////////////////////////////////////////////////////////////
	/// Overloaded constructor
	////////////////////////////////////////////////////////////
	EstateAgentComponent(std::string sprite, std::string background, std::string welcome, std::string confirm, 
		std::string chooseDate) : Component("EstateAgentComponent"),M_SPRITE(sprite), M_BACKGROUND(background),
		D_WELCOME(welcome), B_CONFIRM(confirm), D_CHOOSE_DATE(chooseDate)
	{

	}

	////////////////////////////////////////////////////////////
	/// Destructor
	////////////////////////////////////////////////////////////
	~EstateAgentComponent() { }

	////////////////////////////////////////////////////////////
	/// Getters/Setters
	////////////////////////////////////////////////////////////
	std::string getSpritePath() { return M_SPRITE; }
	void setSpritePath(std::string s) { M_SPRITE = s; }

	std::string getBackgroundPath() { return M_BACKGROUND; }
	void setBackgroundPath(std::string s) { M_BACKGROUND = s; }


	std::string getWelcome() { return D_WELCOME; }
	void setWelcome(std::string s) { D_WELCOME = s; }

	std::string getConfirmBtnTxt() { return B_CONFIRM; }
	void setConfirmBtnTxt(std::string s) { B_CONFIRM = s; }

	std::string getChooseDateDialogue() { return D_CHOOSE_DATE; }
	void setChooseDateDialogue(std::string s) { D_CHOOSE_DATE = s; }

private:
	////////////////////////////////////////////////////////////
	/// Member Variables
	////////////////////////////////////////////////////////////
	std::string M_SPRITE; //PATH
	std::string M_BACKGROUND; //PATH

	std::string D_WELCOME; //DIALOGUE
	std::string B_CONFIRM; //BUTTON
	std::string D_CHOOSE_DATE; //DIALOGUE

};
#endif;