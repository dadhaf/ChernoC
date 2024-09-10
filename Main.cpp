#include<iostream>

class Log
{
    public:
        enum Level {
            LevelInfo=0,
            LevelWarn,
            LevelError
        };

    private:
        int ErrorLevel = LevelInfo;
    public:
        void setErrorLevel(int level)
        {
            ErrorLevel = level;
        }
        
        void Error(char* message)
        {
            if(ErrorLevel <= LevelError)
                std::cout << "[ERROR]" << message << std::endl;
        }
        void Warn(char* message)
        {
            if(ErrorLevel <= LevelWarn)
                std::cout << "[WARNING]" << message << std::endl;
        }
        void Info(char* message)
        {
            if(ErrorLevel <= LevelInfo)
                std::cout << "[INFO]" << message << std::endl;
        }
};

int main()
{
    Log log;
    log.setErrorLevel(log.LevelError); 
    log.Info("Hello World");
    log.Warn("Hello World");
    log.Error("Hello World");

    
}