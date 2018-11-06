#pragma once
#include <SFML/Graphics.hpp>
#include "railhubz.h"
#include "R_linez.h"
#include <Time.h>

class Tranz : //public entity

{
private :
    int* Train_id;
    int speed;
    sf::Vector2f* current_location;

    railhubz* Orign_Station;
    railhubz* Destination_station;


    clock_t Orgin_t;
    time_t current_t;
    //sf::Time lanchtime_orgin;
    //sf::Time timesince_lastHub;

//
struct train_data{


    bool is_inStation;

    int distance_traveld_total;
    int numberofCarts;

        struct cargo{
            int resorse1;
            int resorse2;
            int resorse3;

            }cargo;
    };

//grpahics
enum cagrotype_colour
{ red_res1, magenta_res2, green_res3,
};

sf::Shape Triangle_train_engine;
Triangle_train_engine.SetPointColor(0, sf::Color::Blue);
Triangle_train_engine.SetPointOutlineColor(0, sf::Color(0, 128, 128));
stack<RectangleShape*>  cargoz;



for (int i = 0; i <=cargo.numberofCarts; i++ )
    { cargoz.push(sf::RectangleShape* i = new sf::RectangleShape);
        cargoz.top()-> setColour();
    }





public :

 trainz(railhubz& hub_start, railhubz& Hub_dest )
{
            Orgin_t = Clock();
            Orign_Station = hub_start;
            Destination_station = Hub_dest
                Orign_Station.getLocation();
    //settime and other info
}
 ;

 ~trainz();

bool Enter_next();
void Leave_current();

void draw();

void Get_info(int& T_id);

Update_status();

void load_train_cargo();
void Unload_train_cargo();

};

//trainz.cpp
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
