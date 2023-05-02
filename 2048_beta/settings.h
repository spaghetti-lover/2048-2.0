#pragma once
class Settings {
public:
	bool music;
	bool sfx;
	bool theme; //1 la vang, 0 la xanh
	bool fullscreen;
	Settings(bool _music = true, bool _sfx = true, bool _theme = true, bool _fullscreen = true) {
		this->music = _music;
		this->sfx = _sfx;
		this->theme = _theme;
		this->fullscreen = _fullscreen;
	}
};