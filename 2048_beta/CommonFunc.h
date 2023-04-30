#pragma once
//Bien mau
const SDL_Color CYAN_COLOR = { 0, 255, 255 };
const SDL_Color BLUE_COLOR = { 0, 0, 255 };
const SDL_Color ORANGE_COLOR = { 255, 165, 0 };
const SDL_Color YELLOW_COLOR = { 255, 255, 0 };
const SDL_Color LIME_COLOR = { 0, 255, 0 };
const SDL_Color PURPLE_COLOR = { 128, 0, 128 };
const SDL_Color RED_COLOR = { 255, 0, 0 };
const SDL_Color WHITE_COLOR = { 255, 255, 255 };
const SDL_Color BLACK_COLOR = { 0, 0, 0 };
const SDL_Color GREEN_COLOR = { 0, 128, 0 };
const SDL_Color BROWN_COLOR = { 143, 122, 102 };
const SDL_Color HEAVY_BROWN_COLOR = { 119,110,101 };
const SDL_Color DEFAULT_COLOR = BLACK_COLOR;
//Bien man hinh
const int SCREEN_WIDTH = 900;
const int SCREEN_HEIGHT = 500;


//Bien thong tin tro choi
const std::string BACKGROUND = "2048_Data/background.png";
const std::string BACKGROUND_MENU = "2048_Data/background menu.jpg";

const int FPS = 60;
//Khoi chay cau hinh do hoa
void init(SDL_Window*& window, SDL_Renderer*& renderer);

SDL_Texture* loadTexture(const std::string& path, SDL_Renderer*& renderer);

void loadFont(TTF_Font*& gFont);

void loadPicture(SDL_Texture** gTexture, SDL_Renderer*& renderer);

void setPositionOfPicture(SDL_Rect* picure);

void Render_Copy(SDL_Renderer*& renderer, SDL_Texture** Texture, SDL_Rect* RectPicture, int** matran, const int& mode, const int& player);

void freeTexture(LTexture& renderTexture);

void freeWindowAndRenderer(SDL_Window*& window, SDL_Renderer*& renderer);

//Load ma tran
void loadMatrix(std::fstream& file, int** matrix, bool& isDataEmpty);

void saveMatrix(int** matrix);

//Xu ly file, am thanh
int loadFile(std::fstream& file);

void loadMusic(Mix_Music*& gMusic, const char* path);

void loadSound(Mix_Chunk*& gSFX);

void freeSoundEffects(Mix_Chunk*& gSFX);

void freeMusic(Mix_Music*& gMusic);

void freeFont(TTF_Font*& gFont);
//Cap nhat diem
void saveScore(const int& highscore, const std::string& path);

//Xu ly event
void setupButton(LButton& button, const std::string& title, const int& x, const int& y, SDL_Renderer*& renderer, TTF_Font*& gFont);

void freeButtons(LButton& button);
















void quit();