#ifndef CONSTANTS_HPP
#define CONSTANTS_HPP

#include <SFML/Graphics.hpp>
#include <iostream>

const int CELL_SIZE = 120;
const int dCELL_SIZE = 120;

const int WINDOW_WIDTH = 1920;
const int WINDOW_HEIGHT = 1080;

const int BULLET_MOVEMENT_FACTOR = 6;

const float INTITIAL_SPAWN_RATE = 10.0;
const float MAX_SPAWN_RATE = 2.0;
const float DECREAMENT_RATE = 0.2;
const int SPAWN_START_POSITION = WINDOW_WIDTH - CELL_SIZE;

const int PREDATOR_RHINOMAN_HEALTH = 300;
const float PREDATOR_RHINOMAN_SPEED = 0.5;

const int PREDATOR_SNAKEMAN_HEALTH = 50;
const float PREDATOR_SNAKEMAN_SPEED = 2;

const int PREDATOR_ALIENMAN_HEALTH = 100;
const float PREDATOR_ALIENMAN_SPEED = 1;

const float PREDATOR_COLLISION_DELAY = 2.5;
const int PREDATOR_MOVEMENT_FACTOR = 50;

const int GUNNER_ATTACK_POWER = 12;
const float GUNNER_ATTACK_SPEED = 2;
const float GUNNER_BULLET_SPEED = 600;

const int CANNONSHOOTER_ATTACK_POWER = 44;
const float CANNONSHOOTER_ATTACK_SPEED = 6;
const float CANNONSHOOTER_BULLET_SPEED = 500;

const int BASIC_PREDATOR_HEALTH = 100;
const float BASIC_PREDATOR_SPEED = 2.0f;

const int INITIAL_GOLD = 300;

const float MENU_buttonWidth = 400.0;
const float MENU_buttonHeight = 150.0;
const float MENU_spacing = 50.0;
const float topLeftX = 950;
const float topLeftY = 550;

const int BACK_BUTTON_X = 20;
const int BACK_BUTTON_Y = 940;
const int FONT_MEDIUM = 44;
const int HIGHSCORE_TEXT_X = 1280;
const int HIGHSCORE_TEXT_Y = 280;
const int MAX_NUMBER_OF_SCORES_SHOWN = 10;

const int FONT_LARGE = 72;
const int FONT_SMALL = 36;
const int NAMEENTRYSCREEN_X = 600;
const int NAMEENTRYSCREEN_Y = 400;

const int GAMEOVER_X = 650;
const int GAMEOVER_Y = 200;
const int GAMEOVER_SPACING = 100;
const int GAMEOVER_X_TITLE = 600;

const int GOLD_TEXT_X = 500;
const int GOLD_TEXT_Y = 20;
const int GOLD_TEXT_SPACING = 100;

const int SCORE_TEXT_X = 1100;
const int SCORE_TEXT_Y = 20;

const int GUNNER_CARD_X = 90;
const int GUNNER_CARD_Y = 300;

const int CANNON_CARD_X = 90;
const int CANNON_CARD_Y = 600;

const int PAUSE_BTN_X = WINDOW_WIDTH - CELL_SIZE;
const int PAUSE_BTN_Y = 0;

const int PAUSE_START_X = 700;
const int PAUSE_START_Y = 250;
const int PAUSE_dY = 200;
const int PAUSE_SPACING = 50;

const int GRID_OFFSET_ROWS = 1;
const int GRID_OFFSET_COLS = 3;
const int GRID_ROWS = 7;
const int GRID_COLS = 13;

const int GUNNER_PRICE = 50;
const int CANNONSHOOTER_PRICE = 100;

const int GOLD_REWARD_AMOUNT = 50;
const int SCORE_REWARD_AMOUNT = 100;

const int GAME_LOGO_X = 60;
const int GAME_LOGO_Y = 30;

const std::string IMG_HIGHSCORE_SCREEN = "../Pirates Vs Predators/assets/highscore_screen.png";
const std::string IMG_BACK_BUTTON = "../Pirates Vs Predators/assets/back_button.png";
const std::string IMG_BULLET = "../Pirates Vs Predators/assets/bullet.png";
const std::string IMG_CANNONBALL = "../Pirates Vs Predators/assets/cannonball.png";
const std::string IMG_BATTLEGROUND_GRID = "../Pirates Vs Predators/assets/battleground_background.png";
const std::string FONT_TTF_FILE = "../Pirates Vs Predators/assets/custom_font.ttf";
const std::string IMG_GUNNER_CARD = "../Pirates Vs Predators/assets/gunner_card.png";
const std::string IMG_CANNON_CARD = "../Pirates Vs Predators/assets/cannon_card.png";
const std::string IMG_PAUSE_BTN = "../Pirates Vs Predators/assets/pause_button.png";
const std::string IMG_RESUME_BTN = "../Pirates Vs Predators/assets/resume_button.png";
const std::string IMG_RESTART_BTN = "../Pirates Vs Predators/assets/restart_button.png";
const std::string IMG_RETURN_TO_MENU_BTN = "../Pirates Vs Predators/assets/quit_button_small.png";
const std::string IMG_GUNNER_SPRITE = "../Pirates Vs Predators/assets/gunner.png";
const std::string IMG_CANNONSHOOTER_SPRITE = "../Pirates Vs Predators/assets/cannonshooter.png";
const std::string IMG_EMPTY_WOOD1 = "../Pirates Vs Predators/assets/empty_wood.png";
const std::string IMG_EMPTY_WOOD2 = "../Pirates Vs Predators/assets/empty_wood_other.png";
const std::string IMG_PREDATOR_RHINOMAN = "../Pirates Vs Predators/assets/rhinoman.png";
const std::string IMG_PREDATOR_ALIENMAN = "../Pirates Vs Predators/assets/alienman.png";
const std::string IMG_PREDATOR_SNAKEMAN = "../Pirates Vs Predators/assets/snakeman.png";
const std::string IMG_TREASURE_CHEST = "../Pirates Vs Predators/assets/treasure_chest.png";
const std::string IMG_GAME_LOGO = "../Pirates Vs Predators/assets/game_logo.png";
const std::string IMG_INSTRUCTIONS_SCREEN = "../Pirates Vs Predators/assets/instructions_screen.png";
const std::string IMG_MENUSCREEN = "../Pirates Vs Predators/assets/menuscreen.png";
const std::string IMG_START_BUTTON = "../Pirates Vs Predators/assets/start_button.png";
const std::string IMG_QUIT_BUTTON = "../Pirates Vs Predators/assets/quit_button.png";
const std::string IMG_INSTRUCTION_BUTTON = "../Pirates Vs Predators/assets/instructions_button.png";
const std::string IMG_HIGHSCORE_BUTTON = "../Pirates Vs Predators/assets/highscore_button.png";
const std::string IMG_CURSOR = "../Pirates Vs Predators/assets/cursor.png";
const std::string FILE_HIGHSCORE = "../Pirates Vs Predators/assets/highscores.txt";

void loadTexture (sf::Texture &texture, const std::string &filePath);
void loadFont (sf::Font &font, const std::string &filePath);

#endif // CONSTANTS_HPP
