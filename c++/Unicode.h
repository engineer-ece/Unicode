#pragma once
#include <iostream>
#include <fcntl.h>
#include <io.h>
#include <stdio.h>

using namespace std;
class Unicode{
   public: 
          wchar_t* name; 
          wchar_t startUnicode,endUnicode;
          int start,end;

          int getStartUnicodeDecimal(){ return start;}
          int getEndUnicodeDecimal(){return end;}

          wchar_t getStartUnicode(){return startUnicode;}
          wchar_t getEndUnicode(){return endUnicode;}
        
          Unicode(wchar_t* name,wchar_t startUnicode, wchar_t endUnicode, int start, int end){
               this->name          = name;
               this->startUnicode  = startUnicode;
               this->endUnicode    = endUnicode;
               this->start         = start;
               this->end           = end;
          }
  
          void unicode(){
               _setmode(_fileno(stdout), 0x00020000);

               wprintf(L"0x%04X-0x%04X  %d-%d    %ls \n",this->startUnicode,this->endUnicode,this->start,this->end,this->name);
         } 

         
        /*   ~Unicode(){
             cout << this->startUnicode << "-" << this->endUnicode << " " << this->start << "-" << this->end << " " << this->name;
          } */

         

};