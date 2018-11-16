// R_linez.h

#pragma once

#include <SFML/Graphics.hpp>
 #include <SFML/Window.hpp>
 #include <SFML/System.hpp>
 #include <SFML/OpenGL.hpp>


#include "Sym_Map.h"
#include "Base_Tsym_entity.h"
                            //#include "trainz.h"

#include "railhubz.h"

#include "msg_cmdz.h"
#include "msg_dispatcher.h"

#include <time.h>


template <typename T> float sgn(T val) {
    return (T(0) < val) - (val < T(0));
}

class railhubz;
struct telagram;

class R_linez: public Base_Tsym_entity;

{

protected:
    sf::VertexArray rail_linez_array;

                                float RL_x1  =0.f;
                                float RL_y1 =0.f;
                                float RL_x2  =0.f;
                                float RL_y2 =0.f;

int *AcessArray_Drection = new int[2]{0,0};
bool *AcessArray_channels= new  bool[2] {false,false};

railhubz *hub_creator;
railhubz *out_post;




//railhubz* rOrign_Station;
//railhubz* rDestination_station;

public:
    int line_id;
    double vertex_slop;
R_linez(const railhubz& hub_1, const railhubz& hub_2,
        int& total_R_linez):Base_TSym_entity(total_R_linez);

    //R_linez(const railhubz::railhubz& hub_start, const railhubz::railhubz& Hub_dest, int& total_trainz);
    //R_linez (railhubz&, railhubz&, int&);
    //: initialize();

    ~R_linez();

void update();
 bool handle_msg(const telagram& tela);

void draw(sf::RenderWindow &window);

int line__drection_status();

bool can_add_train();


//getstatus();
//void initialize();
//update_line();



};
