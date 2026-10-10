#include <iostream>

int main()
{
    char* buffer=new char[8];

    char** a=&buffer;

    std::cout<<"포인터변수 buffer의 값 = heap에 할당된 8바이트 블록의 시작 주소 :  "<< (void*)buffer<<std::endl;    //char* type이라 문자열로 출력되는것을 (void*)로 형변환
    std::cout<<"&buffer = buffer 자체의 주소:  "<< &buffer <<std::endl;
    std::cout<<"a=buffer의 주소:  "<<a<<std::endl;
    std::cout<<"*a = buffer의 주소에 있는 값 = 8바이트 블록의 시작주소 :  "<<(void*)*a<<std::endl;

    **a='A';    //buffer[0]="A" 와 같음
    std::cout<<"**a = 8바이트 블록의 시작주소를 참조하는 값 = char[0] :  "<<**a<<std::endl;

    delete[] buffer;
}