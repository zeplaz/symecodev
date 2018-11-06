#ifndef RAILHUBZ_H
#define RAILHUBZ_H
/*sf::time micros
*/
//orgianclock.restart();

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <time.h>
#include <vector>
#include "trainz.h"
#include "R_linez.h"
class railhubz

{

protected :
        //sf::Clock hubclock;
        //    sf:Time elapsehub;
            //float px, py;
time_t H_creation_t;
                            //int numberofRouts =0;
sf::Circle cr_hubgraphic;
sf::Vector2f* hub_location;                               /*
                                    struct routs {
                                    int* rout_id;
                                    int active;
                                    int drection;
                                    int* ForignHub_ID;

                                }; */
vector<linez*> line_connections;



public:

    railhubz(time_t& orgin, sf::Vector2f& hub_l, int& totalhubs);
    ~railhubz();
    int id;


    void draw(sf::RenderWindow &window,int& totalhubs);
    {
    for (int i = 0; i<totalhubs ; i++)
        {window.draw(hubz[i] ); }
    }


bool put_train_on_line();

int addtrain(trainz& newtrain, int&rout_Id);
R_linez add_line();




   getelapzed();
          {
            elapsehub =orgianclock.getElapsedTime();
            return (elapsehub);
            };

                /* int*  createNewRout(int& Forignhub_id);
                void  terminaterRout(int&rout_Id);
                void   getrouts(int&rout_Id, int&,int&,int&);
    //      updaterouts();
                */
};
#endif
