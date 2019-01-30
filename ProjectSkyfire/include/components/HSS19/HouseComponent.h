////////////////////////////////////////////////////////////
//
// HouseComponent.h 
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
		m_dated = m_mood = 0;
		M_SPRITE; 
		M_BACKGROUND;

		M_NAME;
		M_AGE;
		M_ARCHITECTURE;
		M_TRAITS[6];

		D_QUESTIONS[3]; 
		B_QUESTION_ONE_ANSWERS[3];
		B_QUESTION_TWO_ANSWERS[3];
		B_QUESTION_THREE_ANSWERS[3];

		D_IMPRESSION[3];
		D_PICK_REACTION[3];
	}

	////////////////////////////////////////////////////////////
	/// Destructor
	////////////////////////////////////////////////////////////
	~HouseComponent() { }

	////////////////////////////////////////////////////////////
	/// Getters/Setters
	////////////////////////////////////////////////////////////
	
	//Sprites
	const std::string getSpritePath() { return M_SPRITE; }
	void setSpritePath(std::string s) { M_SPRITE = s; }

	const std::string getBackgroundPath() { return M_BACKGROUND; }
	void setBackgroundPath(std::string s) { M_BACKGROUND = s; }

	//Details
	const std::string getHouseName() { return M_NAME; }
	void setHouseName(std::string s) { M_NAME = s; }

	const std::string getAge() { return M_AGE; }
	void setAge(std::string s) { M_AGE = s; }

	const std::string getArchitecture() { return M_ARCHITECTURE; }
	void setArchitecture(std::string s) { M_ARCHITECTURE = s; }

	const std::string* getTraits() { return M_TRAITS; }
	void setTraits(std::string* s) { 
		for (int i = 0; i < M_TRAITS->length(); i++){ M_TRAITS[i] = s[i]; }
	}

	//Dialogue
	const std::string* getQuestions() { return D_QUESTIONS; }
	void setQuestions(std::string* s) {
		for (int i = 0; i < D_QUESTIONS->length(); i++) { D_QUESTIONS[i] = s[i]; }
	}
	const std::string* getQuestionOneAnswers() { return B_QUESTION_ONE_ANSWERS; }
	void setQuestionOneAnswers(std::string* s) {
		for (int i = 0; i < B_QUESTION_ONE_ANSWERS->length(); i++) { B_QUESTION_ONE_ANSWERS[i] = s[i]; }
	}
	const std::string* getQuestionTwoAnswers() { return B_QUESTION_TWO_ANSWERS; }
	void setQuestionTwoAnswers(std::string* s) {
		for (int i = 0; i < B_QUESTION_TWO_ANSWERS->length(); i++) { B_QUESTION_TWO_ANSWERS[i] = s[i]; }
	}
	const std::string* getQuestionThreeAnswers() { return B_QUESTION_THREE_ANSWERS; }
	void setQuestionThreeAnswers(std::string* s) {
		for (int i = 0; i < B_QUESTION_THREE_ANSWERS->length(); i++) { B_QUESTION_THREE_ANSWERS[i] = s[i]; }
	}

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
	std::string M_SPRITE; ///PATH (Member Var)
	std::string M_BACKGROUND; ///PATH

	///House Properties
	std::string M_NAME;
	std::string M_AGE;
	std::string M_ARCHITECTURE;
	std::string M_TRAITS[6];

	std::string D_QUESTIONS[3]; ///Dialogue
	std::string B_QUESTION_ONE_ANSWERS[3]; ///Button
	std::string B_QUESTION_TWO_ANSWERS[3];
	std::string B_QUESTION_THREE_ANSWERS[3];

	std::string D_IMPRESSION[3];
	std::string D_PICK_REACTION[3];

	int m_mood;
	bool m_dated;

};
#endif;