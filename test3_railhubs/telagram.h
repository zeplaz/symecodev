//telagram.h

#ifndef TELAGRAM_H
#define TELAGRAM_H

#include <math.h>

const double Smallest_Delay =0.20;

template <class Type>
inline Type derefrence_Type(void * ponter)
{
    return *(Type*)(ponter);
}

//std::ostream& operator<<(std::ostream& os, const Telegram& t)



bool operator == ( const telagram& tela1, const telagram& tela2)
{
    return ( fabs(tela1.trazmission_t-tela2.trazmission_t) < Smallest_Delay) &&

              (tela1.sender == tela2.sender)        &&
              (tela1.receiver == tela2.receiver)    &&
              (tela1.msg == tela2.msg)                &&
                (tela1.priority ==tela2.priority);


}


bool <(const telagram& tela1, const telagram& tela2)
if(tela1 == tela2)
{return false;}

else {
    return (tela1.priorty<tela2.priorty);
}


struct telagram

{

int sender;
int reciver;
int msg;
double trazmission_t;
int priority;
void* Other_data;

telagram():
    trazmission_t(-1),
    sender(-1),
    receiver(-1),
    priority(-1),
    msg(-1)
{}

telagram ( double time, int sender, int reciver, int msg,
            int priority, void* data = NULL):
            trazmission_t(trazmission_t),
            sender(sender),
            receiver(reciver),
            priority(priority),
            msg(msg),
            Other_data(data)
{}
};




#endif
