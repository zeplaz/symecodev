#ifndef RAILHUBZ_H
#define RAILHUBZ_H


#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

#include <time.h>
#include <vector>
#include "B_psTree.h"
#include "Cmd_agent_operator.h"

                         //#include <queue>
//#include "trainz.h"
#include "R_linez.h"
class railhubz

{
protected:

            //float px, py;
                        /*         //int numberofRouts =0;
                                struct routs {
                                int* rout_id;
                                int active;
                                int drection;
                                int* ForignHub_ID;
                            }; */
time_t H_creation_t;

sf::CircleShape cr_hubgraphic;
sf::Vector2f hub_location;

class R_linez;
                    //class Cmd_agent_operator;

std::vector<R_linez*>* line_connections;
B_psTree Trainprotyque;

public:

    railhubz(time_t& orgin, sf::Vector2f hub_l, int& totalhubs);
    ~railhubz();

    int id;
    sf::Vector2f getLocation() const ;

    std::vector<R_linez*>* list_linez();

                        //line_map(railhub& Destination_station);

    void add_line_connection(R_linez& newline);

    void add_train_toque(trainz& traintoQues);

    //void remove_train_fromque();

    int return_highest_prioty_train_id();


    void  put_priotytrain_on_line();

    void draw(sf::RenderWindow &window);

/*
            getelapzed();
          {
            elapsehub =orgianclock.getElapsedTime();
            return (elapsehub);
            };

                int*  createNewRout(int& Forignhub_id);
                void  terminaterRout(int&rout_Id);
                void   getrouts(int&rout_Id, int&,int&,int&);
    //      updaterouts();
                */
};
#endif
