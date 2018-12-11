#include <iostream>
#include <fstream>
#include <string>
#include <streambuf>

using namespace std;

int countLine(char* pName);
int countChar(char* pName);

int main(int argc, char** argv){
    std::ifstream t(argv[1]);
    std::string str((std::istreambuf_iterator<char>(t)),
    std::istreambuf_iterator<char>());
    cout << str << endl;

    return 0;
}

int countLine(char* pName){

}
int countChar(char* pName){

}