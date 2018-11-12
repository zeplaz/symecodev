
#include "msg_dispatcher.h"
#include "base_TSym_entity.h"
#include "Smy_Map.h"
#include "msg_cmdz.h"



msg_dispatcher* msg_dispatcher::instance()
    {
    static msg_dispatcher instance;
    return &instance;
    }



void msg_dispatcher::call_receiver_transmit(Base_TSym_entity* prt_receiver,
                                            const telagram& tela);
    {
        if(!prt_reciver->Handle_telagram(tela))
        {
            printf("msg not figured /n");
        }
    }


void  msg_dispatcher::trazmit_telagram( double delay, int sender,
                                        int reciver, int msg void* other_data)

{
    Base_TSym_entity* prt_sender = sym_manger->get_entity_via_id(sender);
    Base_TSym_entity* prt_reciver = sym_manger->get_entity_via_id(reciver);

    double currnent_t = Clock::now();


        if (prt_reciver== NULL)
           { printf("inproper ID, of reciver: %s \n", reciver)}

    telagram tela_prep(0,sender,reciver,msg, priority, other_data);

        if (delay<=0.0f)
             { printf(" dispatch of undelayed msg at: %s \n",
             std::chrono::duration_cast<std::chrono::nanoseconds>(currnent_t));

             call_receiver_transmit(prt_reciver, tela_prep);
             }

        else
        {
            tela.trazmission_t+delay;
            dispatch_time_que.insert(tela);

            printf("msg %r has been added to que at: %s \n",,
            std::chrono::duration_cast<std::chrono::nanoseconds>(currnent_t));

        }

}


/// delaytremzitonz


void msg_dispatcher::trazmit_delayed_telagram()
{
    double currnent_t = Clock::now();

     while (!dispatch_time_que.empty() &&
            (dispatch_time_que.begin()->trazmission_t <currnent_t) &&
            (dispatch_time_que.begin()->trazmission_t>0) )
    {
        const telagram& tela_q = *dispatch_time_que.begin();

        Base_TSym_entity* prt_reciver = sym_manger->get_entity_via_id(tela_q.reciver);

        printf("quedtela readto trazmit to %s \n",prt_reciver->ID() );

        call_receiver_transmit(prt_reciver, tela_q);

        dispatch_time_que.erase(dispatch_time_que.begin());
    }
}
