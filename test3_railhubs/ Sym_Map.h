//Sym_Map.h



#pragma once
        //#include <SFML/Graphics.hpp>
        //    #include "railhubz.h"
        //    #include "R_linez.h"
#include <map>
#include <cassert>

#include <vector>


                    //#include "Cmd_agent_operator.h"
#include "AdjacencyMatrix.h"

static const int window_Hight =640;
static const int window_Width = 800;

class Base_TSym_entity;
//class R_linez;
//class railhubz;

#define sym_manger Sym_Map::Instance()

class Sym_Map
{

private:

    typedef std::map<int,Base_TSym_entity*> entity_map;
    typedef std::map<int,railhubz*> hub_map;
    typedef std::map<int,int>  hub_path_matrixPos;

private:
    int hubz;
    int rail_linez;
                                    //std::map<int,R_linez*> Rail_map;
    AdjacencyMatrix**  routing = new  AdjacencyMatrix*;
//inilzate isnaces of maps
    entity_map inst_enity_map;
    hub_map inst_hub_map;
    hub_path_matrixPos H_path_matrixpo_map;

                                            //    std::map<int,railhubz*>::iterator iter;
        //disable copyconstrcor                                        //    int it_id;
                                                //    int* it_rail_huz;
        Sym_Map(const Sym_Map&);
        sym_map& operator =(const sym_map&);

public :

    static Sym_Map* Instance();

    Sym_Map();{} // deal with id latr.

    ~Sym_Map(){delete *routing []; delete[] routing;}
                //should erase?maps?

    int numberofentities();

        void Register_hubz(railhubz* newhubz);
        railhubz* get_hub_via_id(int id) const
        void remove_hubz(railhubz prt_hub);
        std::vector<int>* hublist();

        void Register_entity(Base_TSym_entity* newentity);
        Base_TSym_entity* get_entity_via_id(int id)const;
        void removeenity(Base_TSym_entity ptr_entity);

        Draw_maped_enties(sf::RenderWindow& window);
        draw_hubz(sf::RenderWindow& window);

        inilize_hub_line_for_AMatrix(int hub_id, int outpost_id);

        AdjacencyMatrix* update_routingMatrix_add_hub();

        AdjacencyMatrix* lookup_Routingmatrix();

        AdjacencyMatrix* create_routingMatrix();

        float get_cartesian_plane(bool H_1_W_0, float plane);



//void addLinez(int& Line_id, R_linez& newRline);
//void add_hubz(int& hub_id,railhubz& newhub);

};
