//Cmd_agent_operator.h

#pragma once
//#include <algorithm>
#include <map>

#include <queue>
#include "Sym_Map.h"
#include "AdjacencyMatrix.h"


class Cmd_agent_operator {

AdjacencyMatrix* routmatrix;

//class Sym_Map;


std::priority_queue<int> trainpriorty_master_que;

Cmd_agent_operator();


void setup_routmatrix(*Sym_Map prt_mapz);

    {
        std::vector<int> current_hublist = prt_mapz.hublist();

        for (i=0 ; i <current_dispatch_hublist.size(); i++)
    {
        int temp_hub_id;
        std::vector<R_linez*> temp_line_vec_ptr;

            temp_hub_id = current_dispatch_hublist[i];
            temp_line_vec_ptr = temp_hub_id.line_connections



        }

    }

void Drect_trains_next_rout(*Sym_Map prt_mapz);

{ AdjacencyMatrix* temp_martix;
'
'    temp_martix=prt_mapz->lookup_Routingmatrix();
    AdjacencyMatrix->
}

scan_hubs_for_dispatch(*Sym_Map prt_mapz);
{
  std::vector<int> current_dispatch_hublist = prt_mapz.hublist();
for (i=0; i < current_dispatch_hublist.size(); i++)
  {
    std::vector<int>  merg_priority_Train_list;

      temp_hub_id = current_dispatch_hublist[i]
      temp_hub_id.


  }


}
void dispatchtrain();

~Cmd_agent_operator();



}
