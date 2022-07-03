#include "Omni.h"

//Private functions
void Omni::initialize()
{
	//Initialize variables
	this->window = nullptr;

	//Initialize window
	this->videoMode.height = 500;
	this->videoMode.width = 500;

	this->window = new sf::RenderWindow(sf::VideoMode(1000, 1000), "OmniXV0 By OmniXV0", sf::Style::Close | sf::Style::Resize);

	this->window->setMouseCursorVisible(false);

	this->window->setFramerateLimit(100);

	//Initialize intro music
	if (!this->omnixv0buffer.loadFromFile("OmniXV0 - OmniXV0.wav"))
	{
		//Error
	}
	this->omnixv0sound.setBuffer(omnixv0buffer);
	this->omnixv0sound.play();

	//Initialize fonts
	if (!this->omnifont.loadFromFile("OmniNihil.otf"))
	{
		//Error
	}

	//Intro and Outro
	this->VOlihiNAnimation.setRadius(300.0f);
	this->VOlihiNAnimation.setPosition(200.0f, 200.0f);
	this->VOlihiNAnimation.setFillColor(sf::Color::White);

	this->OmniXV0Animation.setRadius(130.0f);
	this->OmniXV0Animation.setPosition(370.0f, 370.0f);
	this->OmniXV0Animation.setFillColor(sf::Color::Black);

	this->omnibackground.setSize(sf::Vector2f(1000.0f, 1000.0f));
	this->omnibackground.setPosition(0.0f, 0.0f);
	this->omnibackground.setFillColor(sf::Color::Black);

	//Initialize text
	this->omnixv0text.setString("OmniXV0");
	this->omnixv0text.setFont(this->omnifont);
	this->omnixv0text.setFillColor(sf::Color::Black);
	this->omnixv0text.setStyle(sf::Text::Bold);
	this->omnixv0text.setCharacterSize(150);
	this->omnixv0text.setPosition(210, 70);

	this->byomnixv0text.setString("By");
	this->byomnixv0text.setFont(this->omnifont);
	this->byomnixv0text.setFillColor(sf::Color::Black);
	this->byomnixv0text.setStyle(sf::Text::Bold);
	this->byomnixv0text.setCharacterSize(100);
	this->byomnixv0text.setPosition(440, 240);

	this->poweredbysfmltext.setString("Powered by SFML");
	this->poweredbysfmltext.setFont(this->omnifont);
	this->poweredbysfmltext.setFillColor(sf::Color::Black);
	this->poweredbysfmltext.setStyle(sf::Text::Bold);
	this->poweredbysfmltext.setCharacterSize(30);
	this->poweredbysfmltext.setPosition(10, 950);

	this->copyrightomnixv0text.setString("(c) OmniXV0 2021");
	this->copyrightomnixv0text.setFont(this->omnifont);
	this->copyrightomnixv0text.setFillColor(sf::Color::Black);
	this->copyrightomnixv0text.setStyle(sf::Text::Bold);
	this->copyrightomnixv0text.setCharacterSize(30);
	this->copyrightomnixv0text.setPosition(750, 950);

	this->gameovertext.setString("Game Over");
	this->gameovertext.setFont(this->omnifont);
	this->gameovertext.setFillColor(sf::Color::Black);
	this->gameovertext.setStyle(sf::Text::Bold);
	this->gameovertext.setCharacterSize(100);
	this->gameovertext.setPosition(270, 200);

	this->youwintext.setString("You Win");
	this->youwintext.setFont(this->omnifont);
	this->youwintext.setFillColor(sf::Color::Black);
	this->youwintext.setStyle(sf::Text::Bold);
	this->youwintext.setCharacterSize(100);
	this->youwintext.setPosition(320, 200);

	//Initialize Objects
	this->VOlihiN.setRadius(100.0f);
	this->VOlihiN.setOrigin(-400.0f, -400.0f);
	this->VOlihiN.setFillColor(sf::Color::Black);

	this->OmniXV0.setRadius(40.0f);
	this->OmniXV0.setOrigin(-460.0f, -460.0f);
	this->OmniXV0.setFillColor(sf::Color::White);

	this->Nihil.setRadius(30.0f);
	this->Nihil.setOrigin(30.0f, 20.0f);
	this->Nihil.setFillColor(sf::Color::White);

	this->Nihil01.setRadius(13.0f);
	this->Nihil01.setOrigin(13.0f, 3.0f);
	this->Nihil01.setFillColor(sf::Color::Black);

	this->Nihil02.setRadius(33.0f);
	this->Nihil02.setOrigin(33.0f, 23.0f);
	this->Nihil02.setFillColor(sf::Color::Black);

	this->Enemies_0.setRadius(50);
	this->Enemies_0.setPosition(sf::Vector2f(455.f, -100.f));
	this->Enemies_0.setFillColor(sf::Color::Red);

	this->Enemies_1.setRadius(50);
	this->Enemies_1.setPosition(sf::Vector2f(-100.f, -150.f));
	this->Enemies_1.setFillColor(sf::Color::Red);

	this->Enemies_2.setRadius(50);
	this->Enemies_2.setPosition(sf::Vector2f(950.f, -150.f));
	this->Enemies_2.setFillColor(sf::Color::Red);

	this->Enemies_3.setRadius(50);
	this->Enemies_3.setPosition(sf::Vector2f(-150.f, 100.f));
	this->Enemies_3.setFillColor(sf::Color::Red);

	this->Enemies_4.setRadius(50);
	this->Enemies_4.setPosition(sf::Vector2f(1050.f, 100.f));
	this->Enemies_4.setFillColor(sf::Color::Red);

	this->Enemies_5.setRadius(50);
	this->Enemies_5.setPosition(sf::Vector2f(-150.f, 850.f));
	this->Enemies_5.setFillColor(sf::Color::Red);

	this->Enemies_6.setRadius(50);
	this->Enemies_6.setPosition(sf::Vector2f(1050.f, 850.f));
	this->Enemies_6.setFillColor(sf::Color::Red);

	this->Enemies_7.setRadius(50);
	this->Enemies_7.setPosition(sf::Vector2f(-50.f, 1100.f));
	this->Enemies_7.setFillColor(sf::Color::Red);

	this->Enemies_8.setRadius(50);
	this->Enemies_8.setPosition(sf::Vector2f(950.f, 1100.f));
	this->Enemies_8.setFillColor(sf::Color::Red);

	this->Enemies_9.setRadius(50);
	this->Enemies_9.setPosition(sf::Vector2f(455.f, 1100.f));
	this->Enemies_9.setFillColor(sf::Color::Red);
}

//Constructors / Destructors
Omni::Omni()
{
	this->initialize();
}

Omni::~Omni()
{
	delete this->window;
}

//Accessors
const bool Omni::running() const
{
	return this->window->isOpen();
}

const bool Omni::getEndGame() const
{
	return this->endGame;
}

//Public functions
void Omni::update()
{
	sf::View view = this->window->getDefaultView();
	//Event polling
	while (this->window->pollEvent(this->event))
	{
		switch (this->event.type)
		{
		case sf::Event::Closed:
			this->window->close();
			break;
		case sf::Event::KeyPressed:
			if (this->event.key.code == sf::Keyboard::Escape)
				this->window->close();
			break;
		}
		if (event.type == sf::Event::Resized) {
			// resize my view
			view.setSize({
					static_cast<float>(event.size.width),
					static_cast<float>(event.size.height)
				});
			this->window->setView(view);
			// and align shape
		}
	}

	//Intro animation/splash screen

	if (state == 0)
	{
		framesCounter++;
		
		// Intro
		if (framesCounter == 1000)
		{
			state = 1;

			//Initialize game music
			if (!this->omnibuffer.loadFromFile("OmniXV0 - OmniXV0 Loop.wav"))
			{
				//Error
			}
			this->omnisound.setBuffer(omnibuffer);
			this->omnisound.play();
			this->omnisound.setLoop(true);
		}
	}

	//Game update logic

	if (state == 1)
	{
		//Main menu
		if (isInMenu)
		{
			framesCounter++;
			Nihil.setPosition(sf::Mouse::getPosition(*this->window).x, sf::Mouse::getPosition(*this->window).y);
			Nihil01.setPosition(sf::Mouse::getPosition(*this->window).x, sf::Mouse::getPosition(*this->window).y);
			Nihil02.setPosition(sf::Mouse::getPosition(*this->window).x, sf::Mouse::getPosition(*this->window).y);

			if (sf::Mouse::isButtonPressed(sf::Mouse::Left) || sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
			{
				isInMenu = false;
			}
		}

		//Inside game

		else if (!gameOver)
		{
			if (youWin)
			{
				//Outro animation
				this->omnisound.stop();

				//Initialize outro music
				framesCounter++;
				Nihil.setPosition(sf::Mouse::getPosition(*this->window).x, sf::Mouse::getPosition(*this->window).y);
				Nihil01.setPosition(sf::Mouse::getPosition(*this->window).x, sf::Mouse::getPosition(*this->window).y);
				Nihil02.setPosition(sf::Mouse::getPosition(*this->window).x, sf::Mouse::getPosition(*this->window).y);

				if (framesCounter == 2000)
				{
					if (!this->volihinbuffer.loadFromFile("OmniXV0 - 0VOlihiN.wav"))
					{
						//Error
					}
					this->volihinsound.setBuffer(volihinbuffer);
					this->volihinsound.play();
				}
			}
			else
			{
				framesCounter++;
				Nihil.setPosition(sf::Mouse::getPosition(*this->window).x, sf::Mouse::getPosition(*this->window).y);
				Nihil01.setPosition(sf::Mouse::getPosition(*this->window).x, sf::Mouse::getPosition(*this->window).y);
				Nihil02.setPosition(sf::Mouse::getPosition(*this->window).x, sf::Mouse::getPosition(*this->window).y);

				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Backspace))
				{
					isInMenu = true;

					//all enemies return to their original positions
					isEnemies_0Shot = false;
					isEnemies_1Shot = false;
					isEnemies_2Shot = false;
					isEnemies_3Shot = false;
					isEnemies_4Shot = false;
					isEnemies_5Shot = false;
					isEnemies_6Shot = false;
					isEnemies_7Shot = false;
					isEnemies_8Shot = false;
					isEnemies_9Shot = false;

					Enemies_0.setPosition(Vector2f(455.0f, -100.0f));
					Enemies_0.move(0.0f, 5.0f);

					Enemies_1.setPosition(Vector2f(-100.0f, -150.0f));
					Enemies_1.move(4.0f, 5.0f);

					Enemies_2.setPosition(Vector2f(950.0f, -150.0f));
					Enemies_2.move(-4.0f, 5.0f);

					Enemies_3.setPosition(Vector2f(-150.0f, 100.0f));
					Enemies_3.move(5.0f, 3.0f);

					Enemies_4.setPosition(Vector2f(1050.0f, 100.0f));
					Enemies_4.move(-5.0f, 3.0f);

					Enemies_5.setPosition(Vector2f(-150.0f, 850.0f));
					Enemies_5.move(5.0f, -3.0f);

					Enemies_6.setPosition(Vector2f(1050.0f, 850.0f));
					Enemies_6.move(-5.0f, -3.0f);

					Enemies_7.setPosition(Vector2f(-50.0f, 1100.0f));
					Enemies_7.move(4.0f, -5.0f);

					Enemies_8.setPosition(Vector2f(950.0f, 1100.0f));
					Enemies_8.move(-4.0f, -5.0f);

					Enemies_9.setPosition(Vector2f(455.0f, 1100.0f));
					Enemies_9.move(0.0f, -5.0f);
				}

				//Enemies shoot

				else isEnemies_0Shot = true;

				if (isEnemies_0Shot)
				{
					Enemies_0.move(0.0f, 5.0f);
					if (Nihil.getPosition().x, Nihil.getPosition().y, Nihil.getGlobalBounds().intersects(Enemies_0.getGlobalBounds()))
					{
						if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
						{
							isEnemies_1Shot = true;
							Enemies_0.setPosition(Vector2f(-10000.0f, -10000.0f));
							Enemies_0.move(0.0f, 0.0f);
						}
					}
				}
				if (isEnemies_1Shot)
				{
					Enemies_1.move(4.0f, 5.0f);
					if (Nihil.getPosition().x, Nihil.getPosition().y, Nihil.getGlobalBounds().intersects(Enemies_1.getGlobalBounds()))
					{
						if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
						{
							isEnemies_2Shot = true;
							Enemies_1.setPosition(Vector2f(-10000.0f, -10000.0f));
							Enemies_1.move(0.0f, 0.0f);
						}
					}
				}
				if (isEnemies_2Shot)
				{
					Enemies_2.move(-4.0f, 5.0f);
					if (Nihil.getPosition().x, Nihil.getPosition().y, Nihil.getGlobalBounds().intersects(Enemies_2.getGlobalBounds()))
					{
						if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
						{
							isEnemies_3Shot = true;
							Enemies_2.setPosition(Vector2f(-10000.0f, -10000.0f));
							Enemies_2.move(0.0f, 0.0f);
						}
					}
				}
				if (isEnemies_3Shot)
				{
					Enemies_3.move(5.0f, 3.0f);
					if (Nihil.getPosition().x, Nihil.getPosition().y, Nihil.getGlobalBounds().intersects(Enemies_3.getGlobalBounds()))
					{
						if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
						{
							isEnemies_4Shot = true;
							Enemies_3.setPosition(Vector2f(-10000.0f, -10000.0f));
							Enemies_3.move(0.0f, 0.0f);
						}
					}
				}
				if (isEnemies_4Shot)
				{
					Enemies_4.move(-5.0f, 3.0f);
					if (Nihil.getPosition().x, Nihil.getPosition().y, Nihil.getGlobalBounds().intersects(Enemies_4.getGlobalBounds()))
					{
						if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
						{
							isEnemies_5Shot = true;
							Enemies_4.setPosition(Vector2f(-10000.0f, -10000.0f));
							Enemies_4.move(0.0f, 0.0f);
						}
					}
				}
				if (isEnemies_5Shot)
				{
					Enemies_5.move(5.0f, -3.0f);
					if (Nihil.getPosition().x, Nihil.getPosition().y, Nihil.getGlobalBounds().intersects(Enemies_5.getGlobalBounds()))
					{
						if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
						{
							isEnemies_6Shot = true;
							Enemies_5.setPosition(Vector2f(-10000.0f, -10000.0f));
							Enemies_5.move(0.0f, 0.0f);
						}
					}
				}
				if (isEnemies_6Shot)
				{
					Enemies_6.move(-5.0f, -3.0f);
					if (Nihil.getPosition().x, Nihil.getPosition().y, Nihil.getGlobalBounds().intersects(Enemies_6.getGlobalBounds()))
					{
						if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
						{
							isEnemies_7Shot = true;
							Enemies_6.setPosition(Vector2f(-10000.0f, -10000.0f));
							Enemies_6.move(0.0f, 0.0f);
						}
					}
				}
				if (isEnemies_7Shot)
				{
					Enemies_7.move(4.0f, -5.0f);
					if (Nihil.getPosition().x, Nihil.getPosition().y, Nihil.getGlobalBounds().intersects(Enemies_7.getGlobalBounds()))
					{
						if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
						{
							isEnemies_8Shot = true;
							Enemies_7.setPosition(Vector2f(-10000.0f, -10000.0f));
							Enemies_7.move(0.0f, 0.0f);
						}
					}
				}
				if (isEnemies_8Shot)
				{
					Enemies_8.move(-4.0f, -5.0f);
					if (Nihil.getPosition().x, Nihil.getPosition().y, Nihil.getGlobalBounds().intersects(Enemies_8.getGlobalBounds()))
					{
						if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
						{
							isEnemies_9Shot = true;
							Enemies_8.setPosition(Vector2f(-10000.0f, -10000.0f));
							Enemies_8.move(0.0f, 0.0f);
						}
					}
				}
				if (isEnemies_9Shot)
				{
					Enemies_9.move(0.0f, -5.0f);
					if (Nihil.getPosition().x, Nihil.getPosition().y, Nihil.getGlobalBounds().intersects(Enemies_9.getGlobalBounds()))
					{
						if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
						{
							Enemies_9.setPosition(Vector2f(-10000.0f, -10000.0f));
							Enemies_9.move(0.0f, 0.0f);

							youWin = true;
						}
					}
				}
				if (OmniXV0.getPosition().x, OmniXV0.getPosition().y, OmniXV0.getGlobalBounds().intersects(Enemies_0.getGlobalBounds()))
				{
					gameOver = true;
				}
				if (OmniXV0.getPosition().x, OmniXV0.getPosition().y, OmniXV0.getGlobalBounds().intersects(Enemies_1.getGlobalBounds()))
				{
					gameOver = true;
				}
				if (OmniXV0.getPosition().x, OmniXV0.getPosition().y, OmniXV0.getGlobalBounds().intersects(Enemies_2.getGlobalBounds()))
				{
					gameOver = true;
				}
				if (OmniXV0.getPosition().x, OmniXV0.getPosition().y, OmniXV0.getGlobalBounds().intersects(Enemies_3.getGlobalBounds()))
				{
					gameOver = true;
				}
				if (OmniXV0.getPosition().x, OmniXV0.getPosition().y, OmniXV0.getGlobalBounds().intersects(Enemies_4.getGlobalBounds()))
				{
					gameOver = true;
				}
				if (OmniXV0.getPosition().x, OmniXV0.getPosition().y, OmniXV0.getGlobalBounds().intersects(Enemies_5.getGlobalBounds()))
				{
					gameOver = true;
				}
				if (OmniXV0.getPosition().x, OmniXV0.getPosition().y, OmniXV0.getGlobalBounds().intersects(Enemies_6.getGlobalBounds()))
				{
					gameOver = true;
				}
				if (OmniXV0.getPosition().x, OmniXV0.getPosition().y, OmniXV0.getGlobalBounds().intersects(Enemies_7.getGlobalBounds()))
				{
					gameOver = true;
				}
				if (OmniXV0.getPosition().x, OmniXV0.getPosition().y, OmniXV0.getGlobalBounds().intersects(Enemies_8.getGlobalBounds()))
				{
					gameOver = true;
				}
				if (OmniXV0.getPosition().x, OmniXV0.getPosition().y, OmniXV0.getGlobalBounds().intersects(Enemies_9.getGlobalBounds()))
				{
					gameOver = true;
				}
			}
		}
		else if (sf::Mouse::isButtonPressed(sf::Mouse::Left) || sf::Keyboard::isKeyPressed(sf::Keyboard::Backspace))
		{
			//Restart

			gameOver = false;

			//all enemies return to their original positions
			isEnemies_0Shot = false;
			isEnemies_1Shot = false;
			isEnemies_2Shot = false;
			isEnemies_3Shot = false;
			isEnemies_4Shot = false;
			isEnemies_5Shot = false;
			isEnemies_6Shot = false;
			isEnemies_7Shot = false;
			isEnemies_8Shot = false;
			isEnemies_9Shot = false;

			Enemies_0.setPosition(Vector2f(455.0f, -100.0f));
			Enemies_0.move(0.0f, 5.0f);

			Enemies_1.setPosition(Vector2f(-100.0f, -150.0f));
			Enemies_1.move(4.0f, 5.0f);

			Enemies_2.setPosition(Vector2f(950.0f, -150.0f));
			Enemies_2.move(-4.0f, 5.0f);

			Enemies_3.setPosition(Vector2f(-150.0f, 100.0f));
			Enemies_3.move(5.0f, 3.0f);

			Enemies_4.setPosition(Vector2f(1050.0f, 100.0f));
			Enemies_4.move(-5.0f, 3.0f);

			Enemies_5.setPosition(Vector2f(-150.0f, 850.0f));
			Enemies_5.move(5.0f, -3.0f);

			Enemies_6.setPosition(Vector2f(1050.0f, 850.0f));
			Enemies_6.move(-5.0f, -3.0f);

			Enemies_7.setPosition(Vector2f(-50.0f, 1100.0f));
			Enemies_7.move(4.0f, -5.0f);

			Enemies_8.setPosition(Vector2f(950.0f, 1100.0f));
			Enemies_8.move(-4.0f, -5.0f);

			Enemies_9.setPosition(Vector2f(455.0f, 1100.0f));
			Enemies_9.move(0.0f, -5.0f);

		}
	}
}

void Omni::render()
{
	//Intro animation/splash screen

	if (state == 0)
	{
		this->window->clear(sf::Color::Black);
		this->window->draw(omnibackground);
		this->window->draw(VOlihiNAnimation);
		this->window->draw(OmniXV0Animation);
		this->window->display();
	}
	if (framesCounter == 500)
	{
		this->window->clear(sf::Color::White);
		this->omnibackground.setFillColor(sf::Color::White);
		this->VOlihiNAnimation.setFillColor(sf::Color::Black);
		this->OmniXV0Animation.setFillColor(sf::Color::White);
		this->window->display();
	}

	//Game update logic

	if (state == 1)
	{
		//Main menu

		if (isInMenu)
		{
			this->window->clear(sf::Color::White);
			this->VOlihiNAnimation.setFillColor(sf::Color::White);
			this->window->draw(omnixv0text);
			this->window->draw(byomnixv0text);
			this->window->draw(poweredbysfmltext);
			this->window->draw(copyrightomnixv0text);

			this->window->draw(Nihil02);
			this->window->draw(Nihil);
			this->window->draw(Nihil01);
			this->window->draw(VOlihiN);
			this->window->draw(OmniXV0);
			this->window->display();
		}

		//Inside game

		else if (!gameOver)
		{

			if (youWin)
			{
				//Victory screen
				this->window->clear(sf::Color::White);
				this->window->draw(omnibackground);
				this->window->draw(VOlihiNAnimation);
				this->window->draw(OmniXV0Animation);
				this->window->draw(youwintext);
				this->window->draw(poweredbysfmltext);
				this->window->draw(copyrightomnixv0text);

				this->window->draw(Nihil02);
				this->window->draw(Nihil);
				this->window->draw(Nihil01);
				this->window->draw(VOlihiN);
				this->window->draw(OmniXV0);
				this->window->display();

				if (framesCounter == 2000)
				{
					this->window->clear(sf::Color::White);
					this->VOlihiNAnimation.setFillColor(sf::Color::Black);
					this->OmniXV0Animation.setFillColor(sf::Color::White);
					this->youwintext.setFillColor(sf::Color::Black);
					this->youwintext.setPosition(330, 250);
					this->poweredbysfmltext.setFillColor(sf::Color::White);
					this->copyrightomnixv0text.setFillColor(sf::Color::White);
					this->Nihil02.setFillColor(sf::Color::White);
					this->Nihil.setFillColor(sf::Color::White);
					this->Nihil01.setFillColor(sf::Color::White);
					this->VOlihiN.setFillColor(sf::Color::White);
					this->window->display();
				}
				if (framesCounter == 2500)
				{
					this->window->clear(sf::Color::Black);
					this->omnibackground.setFillColor(sf::Color::Black);
					this->VOlihiNAnimation.setFillColor(sf::Color::White);
					this->OmniXV0Animation.setFillColor(sf::Color::Black);
					this->youwintext.setFillColor(sf::Color::White);
					this->poweredbysfmltext.setFillColor(sf::Color::Black);
					this->copyrightomnixv0text.setFillColor(sf::Color::Black);
					this->Nihil02.setFillColor(sf::Color::Black);
					this->Nihil.setFillColor(sf::Color::Black);
					this->Nihil01.setFillColor(sf::Color::Black);
					this->VOlihiN.setFillColor(sf::Color::Black);
					this->OmniXV0.setFillColor(sf::Color::Black);
					this->window->display();
				}
				if (framesCounter == 3000)
				{
					this->window->close();
				}
			}
			else
			{
				this->window->clear(sf::Color::White);
				this->window->draw(Enemies_0);
				this->window->draw(Enemies_1);
				this->window->draw(Enemies_2);
				this->window->draw(Enemies_3);
				this->window->draw(Enemies_4);
				this->window->draw(Enemies_5);
				this->window->draw(Enemies_6);
				this->window->draw(Enemies_7);
				this->window->draw(Enemies_8);
				this->window->draw(Enemies_9);
				this->window->draw(poweredbysfmltext);
				this->window->draw(copyrightomnixv0text);
				this->window->draw(Nihil02);
				this->window->draw(Nihil);
				this->window->draw(Nihil01);
				this->window->draw(VOlihiN);
				this->window->draw(OmniXV0);
				this->window->display();
			}
		}
		else
		{
			//Game over screen

			Nihil.setPosition(sf::Mouse::getPosition(*this->window).x, sf::Mouse::getPosition(*this->window).y);
			Nihil01.setPosition(sf::Mouse::getPosition(*this->window).x, sf::Mouse::getPosition(*this->window).y);
			Nihil02.setPosition(sf::Mouse::getPosition(*this->window).x, sf::Mouse::getPosition(*this->window).y);

			this->window->clear(sf::Color::White);
			this->window->draw(gameovertext);
			this->window->draw(poweredbysfmltext);
			this->window->draw(copyrightomnixv0text);
			this->window->draw(Nihil02);
			this->window->draw(Nihil);
			this->window->draw(Nihil01);
			this->window->draw(VOlihiN);
			this->window->draw(OmniXV0);
			this->window->display();
		}
	}
}