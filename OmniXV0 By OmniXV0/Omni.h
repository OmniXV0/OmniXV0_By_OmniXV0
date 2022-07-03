#pragma once

#include<iostream>

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

/*
	Game engine class
*/

using namespace sf;

class Omni
{
public:
	//Constructor / Destructor
	Omni();
	virtual ~Omni();

	//Accessors
	const bool running() const;
	const bool getEndGame() const;

	//Functions
	void update();
	void render();

private:
	//Variables
	//Window
	sf::RenderWindow* window;
	sf::VideoMode videoMode;
	sf::Event event;

	int state;
	int framesCounter;

	//Resources
	sf::Font omnifont;
	sf::SoundBuffer omnibuffer;
	sf::Sound omnisound;
	sf::Sound omnixv0sound;
	sf::SoundBuffer omnixv0buffer;
	sf::Sound volihinsound;
	sf::SoundBuffer volihinbuffer;

	//Text
	sf::Text omnixv0text;
	sf::Text byomnixv0text;
	sf::Text copyrightomnixv0text;
	sf::Text poweredbysfmltext;
	sf::Text gameovertext;
	sf::Text youwintext;

	//Game logic
	bool endGame = false;
	bool isInMenu = true;
	bool gameOver = false;
	bool youWin = false;

	bool isEnemies_0Shot;
	bool isEnemies_1Shot;
	bool isEnemies_2Shot;
	bool isEnemies_3Shot;
	bool isEnemies_4Shot;
	bool isEnemies_5Shot;
	bool isEnemies_6Shot;
	bool isEnemies_7Shot;
	bool isEnemies_8Shot;
	bool isEnemies_9Shot;

	//Intro and Outro
	sf::CircleShape VOlihiNAnimation;
	sf::CircleShape OmniXV0Animation;

	sf::RectangleShape omnibackground;

	//Game objects
	sf::CircleShape Enemies_0;
	sf::CircleShape Enemies_1;
	sf::CircleShape Enemies_2;
	sf::CircleShape Enemies_3;
	sf::CircleShape Enemies_4;
	sf::CircleShape Enemies_5;
	sf::CircleShape Enemies_6;
	sf::CircleShape Enemies_7;
	sf::CircleShape Enemies_8;
	sf::CircleShape Enemies_9;

	sf::CircleShape VOlihiN;
	sf::CircleShape OmniXV0;
	sf::CircleShape Nihil;
	sf::CircleShape Nihil01;
	sf::CircleShape Nihil02;

	//Private functions
	void initialize();

};
