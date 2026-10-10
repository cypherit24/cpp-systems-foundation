#include <iostream>

class Player
{
public: //public 선언을 하지 않으면 main()함수에서 해당 변수들에 바로 접근이 불가능함.
    int x,y;
    int speed;

    void move(int xa, int ya)
    {
        x += speed*xa;
        y += speed*ya;
    }
}; // ; 필수


int main()
{
    Player player;  // 새로운 객체 생성
    player.move(2, 3);
    std::cin.get();
}


struct vec1
{
    float x,y;

    void add(const vec1& other)
    {
        x++;
    }
};