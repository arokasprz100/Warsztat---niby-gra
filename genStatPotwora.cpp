#include <cstdlib>

#include "genStatPotwora.h"


int genStatPotwora(int wartoscStartowa)
{
    return wartoscStartowa/5+(rand()%(wartoscStartowa/10+wartoscStartowa/5-wartoscStartowa/10));
}
