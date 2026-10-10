static int a=5; //이 파일 내에서만 읽을 수 있음
                //컴파일러가 인식하지못함 > 다른 파일에서 int a=10;으로 선언가능

static void function()  //함수 등등으로도 선언가능
{

}

extern int b; //같이 컴파일되는 다른 파일에서 해당 external 변수를 찾음.
              //없으면 에러

int main()
{
    return 0;
}