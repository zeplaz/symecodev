

#include "railhubz.h"

railhubz::~railhubz(){}

railhubz::railhubz(time_t& orgin, sf::Vector2f hub_l, int& totalhubs)
{
    id = totalhubs+1;
    totalhubs++;
                    //elapsehub = orgenz;
                //        float px=x;
                    //float px=y;

        H_creation_t = clock()-orgin;
        hub_location = hub_l;

//graphics
    cr_hubgraphic.setRadius(20.f);
    cr_hubgraphic.setPosition(hub_location);
    cr_hubgraphic.setFillColor(sf::Color::Green);


                                //struct routs deflut;
                                        //    defult.active =0;
                                //defult.drection =0;
                                    //rout_id = new int[numberofRouts];
                                //    numberofRouts++;
}
    sf::Vector2f railhubz::getLocation() const
    {
        return(hub_location);
    }

    void railhubz::add_train_toque(trainz* traintoQues )
    {
        Trainprotyque.insert(traintoQues->id,traintoQues.esclatcatator_priority);
    }

    void railhubz::add_line_connection(R_linez& newline, Sym_Map& liv_map)
    {
        line_connections.push_back(newline);

        liv_map->routing->add_edge(newline->hub2);
    //line_connections
    }

    int return_highest_prioty_train_id()
    {
        return (temptrain_id = Trainprotyque.Highest_priorty());
    }

    void railhubz::put_priotytrain_on_line()
    {
            //int temptrain_id;
    //    temptrain_id = Trainprotyque.Highest_priorty()
        //temptrain_id->move();
        Trainprotyque.delet(Trainprotyque.Highest_priorty());
    }

    void railhubz::draw(sf::RenderWindow &window)
    {
         window.draw(cr_hubgraphic);
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
