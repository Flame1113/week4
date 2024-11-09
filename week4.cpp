#include <iostream>
using namespace std;
char dig1, dig2, dig3, hyph, dig4, dig5, dig6, dig7;
int main(){
    int returnVal;
    int verify;
    int readDials();
    while (true){
        cout << "Enter a phone number: (Q to quit) ";
        //Delete if statement to see code work without Quit Function
        if (dig1 == 'Q' && dig2 == NULL && dig3 == NULL && dig4 == NULL && dig5 == NULL && dig6 ==NULL && hyph == NULL && dig7 == NULL){
            break;
        }
        verify = readDials();
        switch (verify){
            case -1:
                cout << "ERROR - An invalid character was entered" << endl << endl;
                break;
            case -2:
                cout << "ERROR - Phone number cannot begin with 0" << endl;
                break;
            case -3:
                cout << "ERROR - Phone number cannot begin with 555" << endl;
                break;
            case -4:
                cout << "ERROR - Hyphen is not in the correct position" << endl;
                break;
            case 0:
                cout << "Phone Number Dialed: " << dig1 << dig2 << dig3 << hyph << dig4 << dig5 << dig6 << dig7 << endl;
                break;
        }
        cout << endl;
    }
}

int readDials(){
    int toDigit(char &);
    char thing;
    //Initialize variables and get user input for phone #
    int verif1, verif2, verif3, verif4, verif5, verif6, verif7;
    cin >> dig1 >> dig2 >> dig3 >> hyph >> dig4 >> dig5 >> dig6 >> dig7;
    verif1 = toDigit(dig1);
    verif2 = toDigit(dig2);
    verif3 = toDigit(dig3);
    verif4 = toDigit(dig4);
    verif5 = toDigit(dig5);
    verif6 = toDigit(dig6);
    verif7 = toDigit(dig7);
    if (verif1 == -1 || verif2 == -1 || verif3 == -1 || verif4 == -1|| verif5 ==-1 || verif6 == -1 || verif7 == -1){
        return -1;
    }
    if (dig1 == '0'){
        return -2;
    }
    if (dig1 == '5' && dig2 == '5' && dig3 == '5'){
        return -3;
    }
    if (hyph != '-'){
        return -4;
    }
    return 0;
}

int toDigit(char &letter){
    letter = toupper(letter);
    switch (letter){
        case 'A':
        case 'B':
        case 'C':
            letter = '2';
            return 0;
        case 'D':
        case 'E':
        case 'F':
            letter = '3';
            return 0;
        case 'G':
        case 'H':
        case 'I':
            letter = '4';
            return 0;
        case 'J':
        case 'K':
        case 'L':
            letter = '5';
            return 0;
        case 'M':
        case 'N':
        case 'O':
            letter = '6';
            return 0;
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
            letter = '7';
            return 0;
        case 'T':
        case 'U':
        case 'V':
            letter = '8';
            return 0;
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            letter = '9';
            return 0;
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            return 0;

    }
    return -1;
}