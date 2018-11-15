

//Sym_Map.cpp

#include "Sym_Map.h"
#include "Base_TSym_entity.h"
//#include "Cmd_agent_operator.h"

Sym_Map* Sym_Map::Instance()
{

static Sym_Map instance;
return &instance;

}
createHubmartix();
{

}

float Sym_Map::get_cartesian_plane(bool H_1_W_0, float plane)
{
     float car_plane;

     switch (H_1_W_0)
     {
     case 0 :
            if (plane == window_Hight/2)
            {   car_plane =0 ;}

            if (plane <= window_Hight/2)
            {    car_plane = (window_Hight/2)-plane;}

            if (plane >= window_Hight/2)
            {  car_plane = plane-plane/2;
             }
            break;

        case 1 :
            if (plane == window_Width/2)
                {car_plane=0;}

            if (plane <= window_Width/2)
                {car_plane = window_Width/2-plane ;}

            if (plane >= window_Width/2)
                {car_plane= plane-plane/2;}
            break;

        }

    return car_plane;
}


void Sym_Map::Register_hubz(railhubz* newhub);
      {
          Hubz_map.insert( std::pair<int,railhubz*>(newhub->id ,newhubz) );
          hubz++;

          }


      void Sym_Map::remove_hubz(railhubz prt_hub);
      {
          Hubz_map.erase(Hubz_map.find(prt_hub->id));

      }


      std::vector<int> Sym_Map::hublist()
      {
          for(auto it = inst_hub_map.cbegin(); it != inst_hub_map.cend(); ++it)
          {
                     std::vector<int> hub_id_list ;
                     hub_id_list.pushback(it->first);
          }

          return  hub_id_list;
      }



      railhubz* Sym_Map::get_hub_via_id(int id) const

      {
      Hubz_map::const_iterator cons_itor =inst_hub_map.find(id);

      assert ((cons_itor != inst_hub_map.end()) && "<Sym_Map::get_hub_via_id>:ERROR");
      return cons_itor->second;

      }




Base_TSym_entity* Sym_Map::get_entity_via_id(int id) const

{
entity_map::const_iterator cons_itor =inst_enity_map.find(id);

assert ((cons_itor != inst_enity_map.end()) && "<Sym_Map::get_entity_via_id>:ERROR");
return cons_itor->second;

}

void Sym_Map::removeenity(Base_TSym_entity* ptrentity)
{
inst_enity_map.erase(inst_enity_map.find(ptrentity->ID()));

}

void Sym_Map::Register_entity(Base_TSym_entity* newentity)
{

    inst_enity_map.insert(std::make_pair(newentity->ID(),newentity));
    
}




/*

void Sym_Map::addLinez(int& Line_id, R_linez& newRline)
{   //prthubz =    new int;

Rail_map.insert( std::pair<int,R_linez*>(Line_id,newRline) );

}



*/








/*
//iter != map.end();
// rewtrire constructor or run interal?
//sf::Vecto2f* hublocationtemp;


railhubz Shrby(&rail_Inalz_clock, );
railhubz MTL(&rail_Inalz_clock, 0,0);
railhubz Ottaw(&rail_Inalz_clock, 0,0);
railhubz TOR(&rail_Inalz_clock, 0,0);


R_linez SHrb_MTL(&Shrby,&MTL);
R_linez MTL_OTWA(&MTL, &Ottaw);
R_linez OTAW_TORNTO(&Ottaw,&TOR);

*/
