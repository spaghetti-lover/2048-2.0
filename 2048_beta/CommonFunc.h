#pragma once
//Bien mau
const SDL_Color CYAN_COLOR = { 0, 255, 255 };
const SDL_Color BLUE_COLOR = { 31, 74, 111 };
const SDL_Color LIGHT_BLUE_COLOR = { 228, 242, 255 };
const SDL_Color ORANGE_COLOR = { 255, 165, 0 };
const SDL_Color YELLOW_COLOR = { 243, 234, 175 };
const SDL_Color LIME_COLOR = { 0, 255, 0 };
const SDL_Color RED_COLOR = { 255, 0, 0 };
const SDL_Color WHITE_COLOR = { 255, 255, 255 };
const SDL_Color BLACK_COLOR = { 0, 0, 0 };
const SDL_Color GREEN_COLOR = { 0, 128, 0 };
const SDL_Color BROWN_COLOR = { 119, 110, 101 };
const SDL_Color HEAVY_BROWN_COLOR = { 35, 32, 29 };
const SDL_Color DEFAULT_COLOR = BLACK_COLOR;
//Bien man hinh
const int SCREEN_WIDTH = 900;
const int SCREEN_HEIGHT = 500;


//Bien thong tin tro choi

//Bang 4x4
const std::string CLASSIC_BACKGROUND_BOARD = "2048_Data/classic.png";
const std::string BLUE_BACKGROUND_BOARD = "2048_Data/blue.png";
//Background
const std::string CLASSIC_BACKGROUND = "2048_Data/classic_background.jpg";
const std::string BLUE_BACKGROUND = "2048_Data/blue_background.jpg";

//Bang menu
const std::string BROWN_BACKGROUND_MENU = "2048_Data/brown_backgroundmenu.jpg";
const std::string BLUE_BACKGROUND_MENU = "2048_Data/blue_backgroundmenu.jpg";
//Cac o choi mau vang

const std::string CLASSIC_2 = "2048_Data/2.png";
const std::string CLASSIC_4 = "2048_Data/4.png";
const std::string CLASSIC_8 = "2048_Data/8.png";
const std::string CLASSIC_16 = "2048_Data/16.png";
const std::string CLASSIC_32 = "2048_Data/32.png";
const std::string CLASSIC_64 = "2048_Data/64.png";
const std::string CLASSIC_128 = "2048_Data/128.png";
const std::string CLASSIC_256 = "2048_Data/256.png";
const std::string CLASSIC_512 = "2048_Data/512.png";
const std::string CLASSIC_1024 = "2048_Data/1024.png";
const std::string CLASSIC_2048 = "2048_Data/2048.png";


//Cac o choi mau xanh

const std::string BLUE_2 = "2048_Data/blue_2.png";
const std::string BLUE_4 = "2048_Data/blue_4.png";
const std::string BLUE_8 = "2048_Data/blue_8.png";
const std::string BLUE_16 = "2048_Data/blue_16.png";
const std::string BLUE_32 = "2048_Data/blue_32.png";
const std::string BLUE_64 = "2048_Data/blue_64.png";
const std::string BLUE_128 = "2048_Data/blue_128.png";
const std::string BLUE_256 = "2048_Data/blue_256.png";
const std::string BLUE_512 = "2048_Data/blue_512.png";
const std::string BLUE_1024 = "2048_Data/blue_1024.png";
const std::string BLUE_2048 = "2048_Data/blue_2048.png";


const int FPS = 60;
//Khoi chay cau hinh do hoa
void init(SDL_Window*& window, SDL_Renderer*& renderer);

//Ham load texture
SDL_Texture* loadTexture(const std::string& path, SDL_Renderer*& renderer);

//Ham load font voi kich thuoc default la 32
void loadFont(TTF_Font*& gFont);

//Ham load anh
void loadPicture(SDL_Texture** gTexture, SDL_Renderer*& renderer);

//Ham dat anh tren window
void setPositionOfPicture(SDL_Rect* picure);

//Ham hien thi anh
void Render_Copy(SDL_Renderer*& renderer, SDL_Texture** Texture, SDL_Rect* RectPicture, int** matran, const int& mode, const int& player);

// Ham xoa texture
void freeTexture(LTexture& renderTexture);

//Ham xoa renderer + window
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