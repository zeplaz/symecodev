
//$gcc test.cpp -lpthread
#include <pthread.h>
#include <stdio.h>
#include <queue>
#include <stack.h>

#define NUM_THREADS 5;

int t_error_code;

struct tH_dastrc
{
int tH_id;
void *status;

char* messg;
void* data;                            //stack<mesg*>

struct tH_dastrc *prOther_thrz_data;
struct tasks_strc *pr_tasks_data;
};


struct tasks_strc
{bool task_complete = false;
int task_id;
int type;
char* cmdz;
char* typenamez;
};



                                        //    inlizetasks()

                                      // tasks xs Graphics
                                      // taskys y logic,z funcions()
                                    //when new task is created();
                                          //}

int create_task(int request, int& taskcounter,void* task_data )
{
struct tasks_strc *this_data;
this_data = (struct tasks_strc *) task_data;
this_data->task_id= taskcounter+1;

    //requestlist
    switch (request)
    {
      case  0 :
      printf ("stuff about case onetaskzdatastucapend etf \n") ;
      this_data->typenamez = 'somedatatask';
      this_data->type =0;
      this_data->cmdz ='skfilv_docverwatch_cmd_lizcom{radiooutout__}//4dddSPKLZ';
      break;

      case 1 :
      printf ("stuff about case twoone renderequest etf \n") ;
      this_data->typenamez = 'renderequest';
      this_data->type =1;
      this_data->cmdz ='render vertexarrayz';

      break;

      case 2 :
      printf ("senderequest somelogic stuff \n") ;
      this_data->typenamez = 'logic';
      this_data->type =2;
      this_data->cmdz ='comput logic';
      break;

      case 3 :
      printf ("createobjects,phisz,updaterz \n") ;
      this_data->typenamez = 'creatobjupdate?';
      this_data->type =3;
      this_data->cmdz ='gen_update;_gen_ph_obj';
      break;

    }
                                //this_data.id = taskcounter++;

    taskQue->push(this_data);
        taskcounter++;

  return (tasks.id);

}


void update_taskz(int& taskcounter,void* task_data ){

{ struct tasks_strc *this_data;
this_data = (struct tasks_strc *) task_data;
}

        if (this_data->task_complete=true)
        prinf ("task flag comleate checked, destorying..\n");
        destroy_task(this_data->id);


}


void* inilz_rutine(void *threadArg)

    {
        struct tH_datastrc *this_data;
        this_data = (struct tH_datastrc *) threadArg;

        this_data->messg = 'clear';

    }


void* assenttaskto_thread(&queue<tasks_strc*> ref_queoftaskz,pthread_attr_t attr )

{
    struct tH_datastrc *Assign_data;


while ( !ref_queoftaskz->isEmpty())
{ for( i = 0; i < NUM_THREADS; i++ )
    {


    Assign_data[i].thread_id = i;                  //(void *)&??[i]);
    Assign_data[i].pr_tasks_data = ref_queoftaskz->top();
    t_error_code = pthread_create(
    &thread[i], attr, inilz_rutine,(void *)&tH_dastrc[i]);


        if(t_error_code)
          {
          printf  ("Error in thread production ZCODE_/; %s \n", t_error_code);
          }



}

}

}



//int run_threads()
//{


// create threads
                                //  for( i = 0; i < NUM_THREADS; i++ )
                                //  {

                                //    }
                                //return ()

//}                //pthread_create (&thread[i], attr, start_rutine, arg)

int main ()

{

pthread_t threads[NUM_THREADS];
pthread_attr_t attr;

// deal further with attrbute settings?

pthread_attr_init(&attr);
pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);
    const int n = 15;

    int* thread_id;
    int thread_count=0;
    //int* pr_resquestz;
    int taskconttotal=0;
    int taskpending=0;
    int taskactive=0;

    queue<tasks_strc*> taskQue;
    stack<tasks_strc*> taskStack;
    std::unique_ptr<int[]> array_requestz_buffer(new int[n]);


//request buffer?

        //run_threads() = new thread_id[]

        while (!requestz=-1)
        {
                            //pr_resquestz=
        printf("info about stuff. enter request -1 break,infocde:totaltak: %s,pendingt: %s,active_t: %s \n"
        ,taskconttotal,taskpending, taskactive )

        std::cin >> array_requestz_buffer[taskconttotal];
if ( 0 != array_requestz_buffer[taskconttotal])
              taskconttotal++;

            if (taskconttotal) ==0)
                (break;)

        create_task(array_requestz_buffer[taskconttotal], &taskconttotal,void* task_data )
        taskpending++;

        }

        if (taskpending >0)
        {
        new thread_id[assenttaskto_thread(&taskQue)];}


        //destoryandexit

    pthread_attr_destroy(&attr);
        for( i = 0; i < NUM_THREADS; i++ )
        {
            t_error_code = pthread_join(threads[i], &status);

            if (t_error_code) {
            printf ("Error:unable to join,ErCODe_; %s \n", t_error_code);
            }
        }
//final pointer cleanup.
        delete[] array_requestz_buffer;


     pthread_exit(NULL);
}
