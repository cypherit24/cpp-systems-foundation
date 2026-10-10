#include <iostream>

class Log
{
public:
    int log;    
private:
    int m_loglevel=1; //class의 private member 변수
public:
    void warning(const char* message)
    {
        if (log>=m_loglevel)
            std::cout<<"Warning: "<<message<<std::endl;
    }
    void info(const char* message)
    {
        if (log<m_loglevel)
            std::cout<<"Info: "<<message<<std::endl;
    }

};


int main()
{
    Log log;    //Log class의 인스턴스 객체를 생성

    log.log=0;  //Log class에서 public으로 생성된 변수라 accessable
    log.warning("fatal error");
    log.info("information");
    std::cin.get();

}