#include <gperftools/profiler.h>
#include <stdlib.h>

void f()
{
    int i; 
    for (i=0; i<1024*1024; ++i)
    {  
        char *p = (char*)malloc(1024*1024*120);
        free(p);
    }  
}

void f1()
{
    int i; 
    for (i=0; i<1024*1024; ++i)
    {  
        char *p = (char*)malloc(1024*1024*120);
        free(p);
    }  
}

int main()
{
    ProfilerStart("test.prof");//开启性能分析
    f();
    f1();
    ProfilerStop();//停止性能分析
    return 0; 
}