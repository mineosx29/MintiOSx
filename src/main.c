// Basée sur le tutoriel de 
//  JamesM's tutorials <www.jamesmolloy.co.uk>

#include "monitor.h"
#include "descriptor_tables.h"

int main(struct multiboot *mboot_ptr)
{
    
    init_descriptor_tables();
    // Initialise the screen (by clearing it)
    monitor_clear();
   
    monitor_write("Minti: Hello!\n");

    asm volatile("int $0x3");
    asm volatile("int $0x4");
    
    return 0;
}
