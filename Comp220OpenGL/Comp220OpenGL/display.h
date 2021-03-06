#ifndef DISPLAY_H
#define DISPLAY_H

#include <SDL2/SDL.h>
#include <string>
//display class
class Display
{
public:
	Display(int width, int height, const std::string& title);
	
	void Clear(float r, float g, float b, float a);
	//Double buffer
	void Update();
	bool IsClosed();
	void light();
	virtual ~Display();
	
protected:

private: 
	Display(const Display& other) { }
	void operator=(const Display& other) {}
	
	SDL_Window* m_window;
	SDL_GLContext m_glContext;
	bool m_isClosed;
};

#endif DISPLAY_H