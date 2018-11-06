
/*sf::time micros
*/
#include "railhubz.h"


railhubz::railhubs(time_t& orgin, sf::Vector2f hub_l, int& totalhubs)
{
    id = totalhubs+1;
    totalhubs++;
                    //elapsehub = orgenz;
                //        float px=x;
                    //float px=y;

        h_creation_t = clock()-orgin;
        hub_location = *hub_l;

//graphics
    cr_hubgraphic.setRatios(20.f);
    cr_hubgraphic.setPosition(*hub_l);
    cr_hubgraphic.setColor(sf::Color::Green);

                                //struct routs deflut;
                                        //    defult.active =0;
                                //defult.drection =0;
                                    //rout_id = new int[numberofRouts];
                                //    numberofRouts++;
}
sf::Vector2f* railhubz::getLocation()
{
    return(hub_location) ;
}

railhubz::put_train_on_line()
{

}

railhubz::draw(sf::RenderWindow &window,int& totalhubs)
{
for (int i = 0; i<totalhubs ; i++)
    {window.draw(railhubz.id[i]); }
}


//R_linez railhubz::add_line()
//{      // railhubz* l_destionation;
        //l_destionation= get_destnation();

        //R_linez newLine()

//return(newline);
//}

                            /*
                            railhubz::updaterouts(int*,int,int,*int)
                                      {}

                                    railhub::createNewRout(){}

                                     railhub::terminaterRout(int){}

                                    railhub::getrouts(int ){}

                                      sf::Time getelapzed()
                                      {
                                        return (elapsehub- hubclock.getElapsedTime());
                                      }

                            */
