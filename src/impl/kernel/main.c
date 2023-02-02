#include "print.h"

// print an empty lines
void empty_lines(int lines) {
    for (int i = 0; i < lines; i++) {
        print_str("\n");
    }
}

// prints the loading bar at the bottom
void loader() {    
    for (int i = 0; i < 78; i++) {
        if (i == 0) {
           print_str(" ["); 
        } else if (i == 77) {
            print_str("] ");
        } else {
            print_str("|");
        }
        
        // timeout
        int t;
        if (i <= 10) {
            for (t = 0; t < 1000000000; t++) {
                t = t;
            }
        } else if (i > 10 && i <= 50) {
            for (t = 0; t < 100000000; t++) {
                t = t;
            }
        } else {
            for (t = 0; t < 10000000; t++) {
                t = t;
            }
        }
    }
}

//  priint the main loading screen
void kernel_main()  {
    print_clear();
    print_set_color(PRINT_COLOR_RED, PRINT_COLOR_BLACK);
    empty_lines(6);
    print_str("                                    Welcome to                                  \n");
    empty_lines(1);
    print_str(
        "              @@@@@@  @@@@@@  @@@       @@@@@@      @@@@@@   @@@@@@             \n"
        "             !@@     @@!  @@@ @@!      @@!  @@@    @@!  @@@ !@@                 \n"
        "              !@@!!  @!@  !@! @!!      @!@  !@!    @!@  !@!  !@@!!              \n"
        "                 !:! !!:  !!! !!:      !!:  !!!    !!:  !!!     !:!             \n"
        "             ::.: :   : :. :  : ::.: :  : :. :      : :. :  ::.: :              \n"
    );
    empty_lines(2);
    print_str("                               The system is loading                            \n");
    empty_lines(3);
    loader();
    empty_lines(5);
    // timeout
    for (int t = 0; t < 2000000000; t++) {
        t = t;
    }
    print_clear();
}

