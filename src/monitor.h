// monitor.h -- Basée sur le tutoriel de 
//             JamesM's kernel developmenttutorials.

#ifndef MONITOR_H
#define MONITOR_H

#include "common.h"


void monitor_put(char c);

// Effacer l'écran
void monitor_clear();

// Fonction de sortie de terminal ASCII
void monitor_write(char *c);

#endif // MONITOR_H
