



#include "R_linez.h"
#include <iostream>

R_linez::~R_linez(){}


R_linez::R_linez(const railhubz& hub_1,
                 const railhubz& hub_2, int& total_R_linez) //(const railhubz& hub1, const railhubz& hub2, int& total_R_linez)
{
     line_id = total_R_linez+1;
     total_R_linez++;

        hub_creator =hub_1;
        out_post = hub_2;

     sf::Vector2f temp1(hub_1.getLocation());
                                            float RL_x1 = temp1.x;
                                            float RL_y1 = temp1.y;
     sf::Vector2f temp2(hub_2.getLocation());
                                            float RL_x2 = temp2.y;
                                            float RL_y2 = temp2.y;

    vertex_slop =(RL_x1 - RL_y2)/(RL_x1-RL_x2);


                            printf("info about temp1 x %f y %f /n", x, y);

                            if (temp2 ==sf::Vector2f(200.f,100.f))
                                {std::cout <<"true temp2;" << std::endl; }

                            if (temp1 ==sf::Vector2f(700.f, 100.f))
                            {std::cout <<"true temp1;" << std::endl; }

     rail_linez_array.setPrimitiveType(sf::Lines);

     sf::Vertex rail_L_vertex;

        rail_linez_array.append(rail_L_vertex);
        rail_linez_array.append(rail_L_vertex);

        rail_linez_array[0].position =temp1;
        rail_linez_array[0].color = sf::Color::Red;

        rail_linez_array[1].position =temp2;
        rail_linez_array[1].color = sf::Color::Blue;

                        //rail_L_vertex.position =  temp1;
                        //rail_L_vertex.color  = sf::Color::Blue;
                        //rail_L_vertex.position =  temp2;
                        //rail_L_vertex.color  = sf::Color::Blue;
                                  //rail_linez_array[2].position = sf::Vector2f(300, 5);
                                  //rail_linez_array[3].position = sf::Vector2f(400, 2);
                                  //rail_L_vertex.position =  temp2;
                                                //    rail_L_vertex.color  =  sf::Color::Blue;
                                                    //        rail_linez_array.append(rail_L_vertex);

                                // rail_linez_array[0].position = temp;
                                 //rail_linez_array[0].color = sf::Color::Blue;
                                    //rail_linez_array[0]

                                    //rail_linez_array[1].position = temp2;
                                //    rail_linez_array[1].color  = sf::Color::Blue;

                                //    printf("linecreation id: %",total_R_linez );

}

void R_linez::update()
{

}


 bool R_linez::handle_msg(const telagram& tela)
{

switch (tela.msg)
        {

    case enter_line :
    {    //   if (tela.Other_data > 0)
            Acess_Drection =+ tela.Other_data.dre_dxr*vertex_slop;
                //else {Acess_Drection =- tela.Other_data;}


        if (AcessArray_channels[0] ==false)
            {AcessArray_channels[0] =true;}
        else
            {AcessArray_channels[1] =true};

            telagram  cmd_telamove(this->line_id,tela.sender,
                           -1, move_cmd);
                           this->Handle_telagram(cmd_telamove);

        }
        return true;
        break;

    case exit_line :

            if (AcessArray_channels[1] ==true)
                {AcessArray_channels[1] =false;
            Acess_Drection =- tela.Other_data*vertex_slop;
                return true;
                break;
                }

            if (AcessArray_channels[1] ==false)
                {AcessArray_channels[0]=  false;
                Acess_Drection =0;
                return true;
                break;
                }



        case report_status :

            //can_add_train_tochannel();

            return true;
            break;

        default : return false;

}


void R_linez::draw(sf::RenderWindow &window)
{
    window.draw(rail_linez_array);

}

bool train_enter_line(trainz& train_on_line)

{    //   if (train_on_line->current_location)

railhubz* temprail_nexthub = train_on_line->next_hub;




}

double  R_linez::line__drection_status()
{
return(Acess_Drection);

}



bool R_linez::can_add_train_tochannel(sf::Vector2f* currnt_l,sf::Vector2f* next_l)
{
        if (AcessArray_channels[0] == true && AcessArray_channels[1] == true)
                {
                return false;
                }

        if (AcessArray_channels[0] == false && AcessArray_channels[1] == false)
                {
                return true;
                }

        if (AcessArray_channels[0] == true && AcessArray_channels[1] == false)
            {
             if (sign(Drectional_dxr(*currnt_l,*next_l)) == sign(Acess_Drection))
                {
                return true;
                }
            }
        if (AcessArray_channels[0] == false && AcessArray_channels[1] == true)
            {
             if (sign(Drectional_dxr(*currnt_l,*next_l)) == sign(Acess_Drection))
               {
               return true;
               }
            }
    return false;
}
