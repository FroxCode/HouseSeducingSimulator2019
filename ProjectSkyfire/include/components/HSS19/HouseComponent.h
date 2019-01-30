////////////////////////////////////////////////////////////
//
// HouseComponent.h (Simple 2D velocity)
// Created by Dale Sinnott
// 08/01/2019
//
////////////////////////////////////////////////////////////
#ifndef _HOUSECOMPONENT_H_
#define _HOUSECOMPONENT_H_

////////////////////////////////////////////////////////////
// Includes
////////////////////////////////////////////////////////////
///Frox
#include "components/Component.h"

///SFML
#include"SFML/Graphics/Transform.hpp"

class HouseComponent : public Component
{
public:
	////////////////////////////////////////////////////////////
	/// Overloaded constructor
	////////////////////////////////////////////////////////////
	HouseComponent() : Component("HouseComponent") 
	{
			
	}

	////////////////////////////////////////////////////////////
	/// Destructor
	////////////////////////////////////////////////////////////
	~HouseComponent() { }

	////////////////////////////////////////////////////////////
	/// Getters/Setters
	////////////////////////////////////////////////////////////

	const std::string getSpritePath() { return M_SPRITE; }
	const std::string getBackgroundPath() { return M_BACKGROUND; }

	const std::string getHouseName() { return M_NAME; }
	const std::string getAge() { return M_AGE; }
	const std::string getArchitecture() { return M_ARCHITECTURE; }
	const std::string* getTraits() { return M_TRAITS; }

	const std::string* getQuestions() { return D_QUESTIONS; }
	const std::string* getQuestionOneAnswers() { return B_QUESTION_ONE_ANSWERS; }
	const std::string* getQuestionTwoAnswers() { return B_QUESTION_TWO_ANSWERS; }
	const std::string* getQuestionThreeAnswers() { return B_QUESTION_THREE_ANSWERS; }


	/// -3, -2 = Bad
	/// -1, 0, 1 = Neutral
	/// 2, 3 = Good
	const std::string getImpression() 
	{ 
		if(m_mood <= -2)
			return D_IMPRESSION[0];
		else if (m_mood <= 1)
			return D_IMPRESSION[1];
		else
			return D_IMPRESSION[2];
	}
	const std::string getPickedReaction() 
	{ 
		if (m_mood <= -2)
			return D_PICK_REACTION[0];
		else if (m_mood <= 1)
			return D_PICK_REACTION[1];
		else
			return D_PICK_REACTION[2];
	}
	void adjustMood(int amount) { m_mood += amount; }
	
	void setMood(int mood) { m_mood = mood; }
	int getMood() { return m_mood; }

	void setDatedStatus(bool state) { m_dated = state; }
	bool isDated() { return m_dated; }

private:
	////////////////////////////////////////////////////////////
	/// Member Variables
	////////////////////////////////////////////////////////////
	const std::string M_SPRITE; ///PATH (Member Var)
	const std::string M_BACKGROUND; ///PATH

	///House Properties
	const std::string M_NAME;
	const std::string M_AGE;
	const std::string M_ARCHITECTURE;
	const std::string M_TRAITS[6];

	const std::string D_QUESTIONS[3]; ///Dialogue
	const std::string B_QUESTION_ONE_ANSWERS[3]; ///Button
	const std::string B_QUESTION_TWO_ANSWERS[3];
	const std::string B_QUESTION_THREE_ANSWERS[3];

	const std::string D_IMPRESSION[3];
	const std::string D_PICK_REACTION[3];

	int m_mood;
	bool m_dated;



};
#endif;