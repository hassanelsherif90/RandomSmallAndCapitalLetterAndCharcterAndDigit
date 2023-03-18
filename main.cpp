#include <iostream>
#include <cstdlib>
using namespace std;

int RandomFromTo(int From, int To){
    int RandNum = rand() % (To - From + 1) + From;
    return RandNum;
}

enum enCharType{SamallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4};

char CheckTypye(enCharType CharType){
    switch (CharType) {
        case enCharType :: SamallLetter:
            return char(RandomFromTo(97, 122));
                break;
        case enCharType :: CapitalLetter:
            return char(RandomFromTo(65, 90));
                break;
        case enCharType :: SpecialCharacter:
            return char(RandomFromTo(33, 47));
                break;
        case enCharType :: Digit:
            return char(RandomFromTo(48, 57));
                break;
    }
}

int main()
{

    srand((unsigned)time(NULL));
    cout <<CheckTypye(enCharType::CapitalLetter) << endl;
    cout <<CheckTypye(enCharType::Digit) << endl;
    cout <<CheckTypye(enCharType::SamallLetter) << endl;
    cout <<CheckTypye(enCharType::SpecialCharacter) << endl;

    return 0;
}
