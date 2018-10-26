
#pragma once
        //#include <SFML/Graphics.hpp>
#include "railhubz.h"
#include "R_linez.h"
#include <map>


class Sym_Map
{
private  :

std::map<char,int>::iterator iter;

int hubz;
int rail_linez;
                        int M_id;
char* name;

                //sf::Clock mapClock;

std::map<int*,R_linez*> Rail_map;
std::map<int*,railhubz*> Hubz_map;

public :

    Sym_Map(); // deal with id latr.


    ~Sym_Map();

void addLinez(int& Line_id, R_linez& newRline);
        {   prthubz =    new int;

            if (Line_id == NULL)
            Line_id* = rail_linez+1;

          Rail_map[Line_id] = newRline;
          rail_linez++;
        }

void add_hubz(int& hub_id,railhubz& newhub);
      {

          Hubz_map[hub_id] =newhub;

      }

}

iter != map.end();
// rewtrire constructor or run interal?

railhubz Shrby(&rail_Inalz_clock, 0,0);
railhubz MTL(&rail_Inalz_clock, 0,0);
railhubz Ottaw(&rail_Inalz_clock, 0,0);
railhubz TOR(&rail_Inalz_clock, 0,0);


R_linez SHrb_MTL(&Shrby,&MTL);
R_linez MTL_OTWA(&MTL, &Ottaw);
R_linez OTAW_TORNTO(&Ottaw,&TOR);
