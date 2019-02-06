////////////////////////////////////////////////////////////
//
// ButtonComponent.h 
// Created by Dale Sinnott
// 06/02/2019
//
////////////////////////////////////////////////////////////
#ifndef _BUTTONCOMPONENT_H_
#define _BUTTONCOMPONENT_H_

////////////////////////////////////////////////////////////
// Includes
////////////////////////////////////////////////////////////
///Frox
#include "components/Component.h"

class ButtonComponent : public Component
{
public:
	////////////////////////////////////////////////////////////
	/// Overloaded constructor
	////////////////////////////////////////////////////////////
	ButtonComponent() : Component("ButtonComponent")
	{
		m_clicked = false;
	}

	////////////////////////////////////////////////////////////
	/// Destructor
	////////////////////////////////////////////////////////////
	~ButtonComponent() { }

	////////////////////////////////////////////////////////////
	/// Getters/Setters
	////////////////////////////////////////////////////////////
	bool getClicked() { return m_clicked; }
	void setClicked(bool c) { m_clicked = c; }

private:
	////////////////////////////////////////////////////////////
	/// Member Variables
	////////////////////////////////////////////////////////////
	bool m_clicked;
	

};
#endif;