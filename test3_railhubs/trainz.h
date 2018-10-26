#pragma once
#include <SFML/Graphics.hpp>
#include "railhubz.h"
#include "R_linez.h"


class Tranz : //public entity

{
private :
railhubz* Orign_Station;
railhubz* Destination_station;

railhubz* current_hub =Null;
R_linez* current_Rail_Line = null;

sf::Time lanchtime_orgin;
sf::Time timesince_lastHub;

int* Train_id;
int speed;

int* distance_traveld_total;
int resorse1;
int resorse2;
int resorse3;

bool is_inStation;

sf::Shape Triangle_train_engine;

Triangle_train_engine.SetPointColor(0, sf::Color::Blue);
Triangle_train_engine.SetPointOutlineColor(0, sf::Color(0, 128, 128));


public :

 trainz()
{

    //settime and other info
}
 ;
 ~trainz();


void draw();

void Get_info(int& T_id);

Update_status();

void load_train_cargo();
void Unload_train_cargo();

};


///
void draw(window& )
{
sf::Vector2f current_Location;
sf::Vector2f New_location;

      get_current_location();

int dt      = timesince_lastHub*speed;


      get_time();




Triangle_train_engine.SetPointPosition();

}
