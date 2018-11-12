//Sym_Map.h



#pragma once
        //#include <SFML/Graphics.hpp>
#include "railhubz.h"
#include "R_linez.h"
#include <map>

#include <cassert>

class Base_TSym_entity;
static const int window_Hight =640;
static const int window_Width = 800;

#define sym_manger Sym_Map::Instance()

class Sym_Map
{
private:

typedef std::map<int,Base_TSym_entity*> entity_map;

private:

entity_map inst_enity_map;

Sym_Map(const Sym_Map&);
sym_map& operator =(const sym_map&);


    int hubz;
    int rail_linez;
    std::map<int,int*>::iterator iter;


                                int it_id;
                                int* it_thing;

                //sf::Clock mapClock;

std::map<int,R_linez*> Rail_map;
std::map<int,railhubz*> Hubz_map;

public :

float get_cartesian_plane(bool H_1_W_0, float plane);


static Sym_Map* Instance();

    Sym_Map();{} // deal with id latr.


    ~Sym_Map();

void Register_entity(Base_TSym_entity* newentity);


Base_TSym_entity* get_entity_via_id(int id)const;

void removeenity(Base_TSym_entity ptr_entity);


void addLinez(int& Line_id, R_linez& newRline);


void add_hubz(int& hub_id,railhubz& newhub);


};
