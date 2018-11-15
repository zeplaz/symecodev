//Cmd_agent_operator.h

#pragma once
//#include <algorithm>
#include <map>
#include <queue>

#include "Sym_Map.h"
#include "msg_dispatcher.h"

#include "AdjacencyMatrix.h"

#include "railhubz.h"

#include "Base_TSym_entity.h"
#include "R_linez.h"
#include "trainz.h"

#include <time.h>

enum hubNamez {Montreal,Toronto,QubecCity,Shebrooke,Ottowa};

class R_lines;
class trainz;
class railhubz;

class Cmd_agent_operator
 {

private:
    AdjacencyMatrix* routmatrix;
//class Sym_Map;
    sid::vector<int> train_list;
    std::priority_queue<int>* trainpriorty_master_que;
//std::unordered_map<std::string, std::string>;
    time_t cmd_time_start;

public :

    int enity_count =0;
    int train_count=0;
    int hubz_count =0;

    Cmd_agent_operator(){cmd_time_start=clock();};

    ~Cmd_agent_operator();

    AdjacencyMatrix* setup_routmatrix();

    void dispatchtrain();

    int check_cleanup_train_enityz();

    railhubz* Drect_trains_next_rout();

    void scan_hubs_for_dispatch_cadiates();

    void create_trainz(int numtraincreat, int priorty, int speed,
                       int beinghub ,int endhub);

    void create_hubz(int location);

}
