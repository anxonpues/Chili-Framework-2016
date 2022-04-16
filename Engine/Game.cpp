/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"

Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd )
{
}

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
}

void Game::ComposeFrame()
{
	{
		//for (int i = 0; i < 150; i = i + 2)
		//	for (int j = 0; j < 150; j = j + 2)
		//		gfx.PutPixel(395 + i, 295 + j, 255 - i, 255 - j, 255 - (i + j)/2);
		/*int np = 30;
		int sep = 5;
		int whereX = 400;
		int whereY = 300;
		int red = 255;
		int green = 255;
		int blue = 255;
		if (wnd.kbd.KeyIsPressed(VK_UP))
		{
			red = 255;
			green = 255;
			blue = 255;

			for (int i = -np; i <= np; i++)
				if (i < -sep || i> sep)
					gfx.PutPixel(whereX - i, whereY, red, green, blue);
			for (int i = -np; i <= np; i++)
				if (i < -sep || i> sep)
					gfx.PutPixel(whereX, whereY - i, red, green, blue);
		}
		else if (wnd.kbd.KeyIsPressed(VK_DOWN)) 
		{
			red = 255;
			green = 0;
			blue = 0;
			for (int i = -np; i <= np; i++)
				if (i < -sep || i> sep)
					gfx.PutPixel(whereX - i, whereY, red, green, blue);
			for (int i = -np; i <= np; i++)
				if (i < -sep || i> sep)
					gfx.PutPixel(whereX, whereY - i, red, green, blue);
		}
		else if (wnd.kbd.KeyIsPressed(VK_RIGHT))
		{
			red = 100;
			green = 100;
			blue = 255;
			for (int i = -np; i <= np; i++)
				if (i < -sep || i> sep)
					gfx.PutPixel(whereX - i, whereY, red, green, blue);
			for (int i = -np; i <= np; i++)
				if (i < -sep || i> sep)
					gfx.PutPixel(whereX, whereY - i, red, green, blue);
		}
		else if (wnd.kbd.KeyIsPressed(VK_LEFT))
		{
			red = 255;
			green = 255;
			blue = 0;
			
			for (int i = -np; i <= np; i++)
				if (i < -sep || i> sep)
					gfx.PutPixel(whereX - i, whereY, red, green, blue);
			for (int i = -np; i <= np; i++)
				if (i < -sep || i> sep)
					gfx.PutPixel(whereX, whereY - i, red, green, blue);
		}
		else 
		{
			red = 0;
			green = 255;
			blue = 0;
			for (int i = -np; i <= np; i++)
				if (i < -sep || i> sep)
					gfx.PutPixel(whereX - i, whereY, red, green, blue);
			for (int i = -np; i <= np; i++)
				if (i < -sep || i> sep)
					gfx.PutPixel(whereX, whereY - i, red, green, blue);
		}*/
		//for (int i = 0; i <np; i+=2)
		//{
		//	if (i!=np/2)
		//		gfx.PutPixel(120 + i, 120+(np/2), 255, 255, 255);
		//}
		//for (int i = 0; i <np; i+=2)
		//{
		//	if (i!=np/2)
		//		gfx.PutPixel(120+(np/2) , 120+i, 255, 255, 255);
		//}
		
		//gfx.PutPixel(254, 255, 255, 255, 255);
		//gfx.PutPixel(253, 255, 255, 255, 255);
		//gfx.PutPixel(252, 255, 255, 255, 255);
		//gfx.PutPixel(251, 255, 255, 255, 255);
		//gfx.PutPixel(255, 254, 255, 255, 255);
		//gfx.PutPixel(255, 253, 255, 255, 255);
		//gfx.PutPixel(255, 252, 255, 255, 255);
		//gfx.PutPixel(255, 251, 255, 255, 255);
		//gfx.PutPixel(255, 255, 255, 255, 255);
		//gfx.PutPixel(256, 255, 255, 255, 255);
		//gfx.PutPixel(257, 255, 255, 255, 255);
		//gfx.PutPixel(258, 255, 255, 255, 255);
		//gfx.PutPixel(259, 255, 255, 255, 255);
		//gfx.PutPixel(255, 256, 255, 255, 255);
		//gfx.PutPixel(255, 257, 255, 255, 255);
		//gfx.PutPixel(255, 258, 255, 255, 255);
		//gfx.PutPixel(255, 259, 255, 255, 255);
		//gfx.PutPixel(255, 260, 255, 255, 255);

	}
	for (int i = 0; i <= yMax; i++)
	{
		if (XGame > 15 && XGame < xMax - 15)
		{
			gfx.PutPixel(XGame-1, i, 130, 225, 130);
			gfx.PutPixel(XGame+1, i , 130, 225, 130);
		}
		if (XGame > 30 && XGame < xMax - 30)
		{
			gfx.PutPixel(XGame-2, i , 100, 195, 100);
			gfx.PutPixel(XGame+2, i , 100,195, 100);
		}
		if (XGame > 45 && XGame < xMax - 45)
		{
			gfx.PutPixel(XGame-3, i , 70, 165, 70);
			gfx.PutPixel(XGame+3, i , 70, 165, 70);
		}
		if (XGame > 60 && XGame < xMax - 60)
		{
			gfx.PutPixel(XGame-4, i, 40, 135, 40);
			gfx.PutPixel(XGame+4, i, 40, 135, 40);
		}
		if (XGame > 65 && XGame < xMax - 65)
		{
			gfx.PutPixel(XGame - 5, i, 10, 105, 10);
			gfx.PutPixel(XGame + 5, i, 10, 105, 10);
		}
		gfx.PutPixel(XGame, i, 160, 255, 160);
	}
		
	for(int j=0;j<=xMax;j++)
	{
		if (YGame > 15 && YGame < yMax - 15)
		{
			gfx.PutPixel(j, YGame-1, 130, 225, 130);
			gfx.PutPixel(j, YGame+1, 130, 225, 130);
		}
		if (YGame > 30 && YGame < yMax - 30)
		{
			gfx.PutPixel(j , YGame-2, 100, 195, 100);
			gfx.PutPixel(j , YGame+2, 100, 195, 100);
		}
		if (YGame > 45 && YGame < yMax - 45)
		{
			gfx.PutPixel(j , YGame-3, 70, 165, 70);
			gfx.PutPixel(j , YGame+3, 70, 165, 70);
		}
		if (YGame > 60 && YGame < yMax - 60)
		{
			gfx.PutPixel(j, YGame-4, 40, 135, 40);
			gfx.PutPixel(j, YGame+4, 40, 135, 40);
		}
		if (YGame > 65 && YGame < yMax - 65)
		{
			gfx.PutPixel(j, YGame - 5, 10, 105, 10);
			gfx.PutPixel(j, YGame + 5, 10, 105, 10);
		}
		gfx.PutPixel(j, YGame, 160, 255, 160);
	}
	XGame +=xInc;
	if (XGame > xMax-1 || XGame <= 1)
		xInc *=(-1); 
	YGame +=yInc;
	if (YGame > yMax-1 || YGame <=1)
		yInc *=(-1);
}
