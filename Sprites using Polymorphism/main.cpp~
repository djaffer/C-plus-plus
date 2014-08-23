#include "drawing.h"

class Sprite
{
 private:
 int row;
 int col;
public:
void setPosition(int r, int c);
int getRow();
int getCol();
virtual void draw();
};
void Sprite::setPosition(int r, int c)
{
row=r;
col = c;
}
int Sprite::getRow()
{
 return row;
}
int Sprite::getCol()
{
return col;
}

void Sprite::draw()
{
drawErrorMessage(getRow(),getCol());
}

class Shadow:public Sprite
{
public:
virtual void draw();
};

void Shadow::draw()
{
drawShadow(getRow(),getCol());
}
class Speedy:public Sprite
{
public:
virtual void draw();
};

void Speedy::draw()
{
drawSpeedy(getRow(),getCol());
}

class Bashful:public Sprite
{
public:
virtual void draw();
};

void Bashful::draw()
{
drawBashful(getRow(),getCol());
}

class Pokey:public Sprite
{
public:
virtual void draw();
};

void Pokey::draw()
{
drawPokey(getRow(),getCol());
}
main()
{
Sprite * pac[4];
pac[0] = new Shadow;
pac[0]->setPosition(5,10);
pac[1] = new Speedy;
pac[1]->setPosition(5,44);
pac[2] = new Bashful;
pac[2]->setPosition(22,44);
pac[3] = new Pokey;
pac[3]->setPosition(22,10);
beginDrawing();

for(int x=0;x<4;x++)
{

pac[x]->draw();
delete pac[x];

}
endDrawing();

}
