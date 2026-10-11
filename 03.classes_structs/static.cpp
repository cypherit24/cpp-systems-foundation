#include <iostream>

static int a=5; //이 파일 내에서만 읽을 수 있음
                //컴파일러가 인식하지못함 > 다른 파일에서 int a=10;으로 선언가능

static void function()  //함수 등등으로도 선언가능
{

}

extern int b; //같이 컴파일되는 다른 파일에서 해당 external 변수를 찾음.
              //없으면 에러

struct Entity   //defalut = public
{
    static int x,y;

    void print()
    {
        std::cout<<x<<" , "<<y<<std::endl;
    }
};


int Entity::x;  // scope of variable(Entity::) + variable
int Entity::y;  // have to define it

int main()
{
    Entity e1;
    Entity e2;
    e1.x=5;
    e1.y=8;

    e1.print();

    e2.x=10;
    e2.y=20;

    e2.print();
    e1.print();     //static 변수는 하나뿐이므로 다른 멤버에서 수정해도 기존 값까지 바뀜
}