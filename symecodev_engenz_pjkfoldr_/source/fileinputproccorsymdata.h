




class filesymdatainputer
{
protected :

    virtual

public:
    virtual ~filesymdatainputer ();
    filesymdatainputer();
bool open(const std::string& filename);

virtual Int64 read(void* data, Int64 size)=0;

virtual Int64 seek(Int64 position)=0;
virtual Int64 tell()=0;
virtual Int64 getSize()=0;

prvete:
int ID;
string elementname;
int sytemidtogo;
struc argumentlist
{ num arg
 set<int>
};
filedata fdata;
bool chk;
};
