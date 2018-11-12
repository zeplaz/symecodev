#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include "railhubz.h"
#include "R_linez.h"

#include <time.h>
#include <stack>


struct telegram;



class trainz : public  Base_TSym_entity
{

private:
    int Train_id;
    int speed;
    bool is_halt;
    sf::Vector2f* current_location;

    railhubz* Orign_Station;
    railhubz* Destination_station;

    clock_t Orgin_t;
    time_t current_t;
    //sf::Time lanchtime_orgin;
    //sf::Time timesince_lastHub;

/*
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
                            */

//grpahics
                //        enum cagrotype_colour
            //            { red_res1, magenta_res2, green_res3,
        //                };

sf::VertexArray Triangle_train_engine();
std::stack<sf::RectangleShape*>  cargoz;

            /*    for (int i = 0; i <=cargo.numberofCarts; i++ )
                    { cargoz.push(sf::RectangleShape* i = new sf::RectangleShape);
                        cargoz.top()-> setColour(Red);
                    } */
void locationsetup()


public:
    trainz(int id,int& total_trainz,const railhubz& hub_start, const railhubz& Hub_dest):
         Base_TSym_entity(id), locationsetup()
            {




            }



 ~trainz();

void hault();
void move();
//bool Enter_next();
//void Leave_current();
void update();
void Handle_telagram(const telagram& msg);

void update_location(time_t& currnttime);
void draw(sf::RenderWindow &window);

//void Get_info(int& T_id);

//Update_status();

//void load_train_cargo();
//void Unload_train_cargo();

};
