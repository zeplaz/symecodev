#ifndef RAILHUBZ_H
#define RAILHUBZ_H
/*sf::time micros
*/
//orgianclock.restart();

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

class railhubz

{

protected :
sf::Clock hubclock;
sf:Time elapsehub;
float px, py;
int numberofRouts =0;
sf::Circle cr_hubgraphic;
                                /*
                                    struct routs {
                                    int* rout_id;
                                    int active;
                                    int drection;
                                    int* ForignHub_ID;

                                }; */

public:
    railhubz(sf::Time& orgenz, float x, float y);
    ~railhubz();

  int* id;
    void draw(sf::RenderWindow &window,int& totalhubs);
    {
    for (int i = 0; i<totalhubs ; i++)
        {window.draw(hubz[i] ); }
    }

}
    //      updaterouts();

     int*  createNewRout(int& Forignhub_id);
    void  terminaterRout(int&rout_Id);
    void   getrouts(int&rout_Id, int&,int&,int&);

    int addtrain(int drection , int&rout_Id, sf::Time&, sf::Clock&);

          sf::Time getelapzed();
          {
            elapsehub =orgianclock.getElapsedTime();
            return (elapsehub);
            };


};
#endif
