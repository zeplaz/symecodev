//msg_dispatcher.h


#pragma once

#include <set>
#include "telagram.h"
#include <chrono>


typedef std::chrono::high_resolution_clock Clock;

class Base_TSym_entity;


const double send_zero_t = 0.0;
const int no_info = 0;
const int void_id_sender =-1;


#define tranzmitor msg_dispatcher::instance()


class msg_dispatcher
{
    private:

        std::set<telagram> dispatch_time_que;

        void call_receiver_transmit(Base_TSym_entity* prt_receiver,
                                    const telagram& tela);

        msg_dispatcher(){}

        msg_dispatcher(const msg_dispatcher&);
        msg_dispatcher& operator =(const msg_dispatcher&);

    public:

        static msg_dispatcher* instance();

        void trazmit_telagram( double delay, int sender,
                        int reciver, int msg void* other_data);

        void trazmit_delayed_telagram();


};
