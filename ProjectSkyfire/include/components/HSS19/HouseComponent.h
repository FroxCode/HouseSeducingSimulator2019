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
///C++
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

///Frox
#include "components/Component.h"

///SFML
#include"SFML/Graphics/Transform.hpp"

#include "Dialogue.h"
class HouseComponent : public Component
{
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
	std::vector<std::string> M_TRAITS;
	std::vector<std::string> D_QUESTIONS; ///Dialogue
	std::vector<std::string> B_QUESTION_ONE_ANSWERS; ///Button
	std::vector<std::string> B_QUESTION_TWO_ANSWERS;
	std::vector<std::string> B_QUESTION_THREE_ANSWERS;
	std::vector<std::string> D_IMPRESSION;
	std::vector<std::string> D_PICK_REACTION;

	int m_mood;
	bool m_dated;

public:
	////////////////////////////////////////////////////////////
	/// Overloaded constructor
	////////////////////////////////////////////////////////////
	HouseComponent(std::string sprite, std::string background, 
		std::string name, std::string age, std::string architecture, 
		std::vector<std::string> traits, std::vector<std::string> questions, std::vector<std::string> answersOne,
		std::vector<std::string> answersTwo, std::vector<std::string> answersThree, 
		std::vector<std::string> impressions, std::vector<std::string> pickReactions) : Component("HouseComponent")
	{
		m_dated = m_mood = 0;
		M_SPRITE = sprite; 
		M_BACKGROUND = background;
		M_NAME = name;
		M_AGE = age;
		M_ARCHITECTURE = architecture;
		setTraits(traits);
		setQuestions(questions);
		setQuestionOneAnswers(answersOne);
		setQuestionTwoAnswers(answersTwo);
		setQuestionThreeAnswers(answersThree);
		setImpressions(impressions);
		setPickReactions(pickReactions);
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
	const std::vector<std::string> getTraits() { return M_TRAITS; }
	void setTraits(std::vector<std::string> s) { M_TRAITS = s; }

	//Dialogue
	const std::vector<std::string> getQuestions() { return D_QUESTIONS; }
	void setQuestions(std::vector<std::string> s) {	D_QUESTIONS = s; }
	const std::vector<std::string> getQuestionOneAnswers() { return B_QUESTION_ONE_ANSWERS; }
	void setQuestionOneAnswers(std::vector<std::string> s) { B_QUESTION_ONE_ANSWERS = s; }
	const std::vector<std::string> getQuestionTwoAnswers() { return B_QUESTION_TWO_ANSWERS; }
	void setQuestionTwoAnswers(std::vector<std::string> s) { B_QUESTION_TWO_ANSWERS = s; }
	const std::vector<std::string> getQuestionThreeAnswers() { return B_QUESTION_THREE_ANSWERS; }
	void setQuestionThreeAnswers(std::vector<std::string> s) { B_QUESTION_THREE_ANSWERS = s; }

	/// -3, -2 = Bad
	/// -1, 0, 1 = Neutral
	/// 2, 3 = Good
	std::vector<std::string> getImpressions() { return D_IMPRESSION; }
	void setImpressions(std::vector<std::string> s) { D_IMPRESSION = s; }
	std::vector<std::string> getPickedReactions() { return D_PICK_REACTION;	}
	void setPickReactions(std::vector<std::string> s) {	D_PICK_REACTION = s; }

	void adjustMood(int amount) { m_mood += amount; }
	void setMood(int mood) { m_mood = mood; }
	int getMood() { return m_mood; }
	void setDatedStatus(bool state) { m_dated = state; }
	bool isDated() { return m_dated; }
};
#endif;