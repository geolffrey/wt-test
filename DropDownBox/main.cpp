/*
 * This is the main source file.
 */


#include <Wt/WApplication>
#include "View.h"

Wt::WApplication *createView(const Wt::WEnvironment& env)
{
    return new View(env);
}

 int main(int argc, char **argv)  {
     return Wt::WRun(argc, argv, &createView);
 }
