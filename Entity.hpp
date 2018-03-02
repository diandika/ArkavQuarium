#ifndef ENTITY_HPP
#define ENTITY_HPP

class Entity{
  private:
    char entityKind;
  protected:
    int posX;
    int posY;
  public:
    Entity(int,int,char);//inisiasi lokasi dan jenis kelas

    int getX();
    int getY();
    char getKind();

    void setX(int);
    void setY(int);
    void setKind(char);

    virtual void move() = 0;
};

#endif
