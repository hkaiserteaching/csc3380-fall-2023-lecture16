#include "Graph.h"            // graphical shapes
#include "Simple_window.h"    // stuff to deal with your system's windows

#include <iostream>
#include <stdexcept>

void demo()
{
    // draw two lines:
    using namespace Graph_lib;

    Simple_window win(Point(100, 100), 600, 400, "Canvas");    // make a window

    Lines x;
    x.add(Point(100, 100), Point(200, 100));    // horizontal line
    x.add(Point(150, 50), Point(150, 150));     // vertical line

    win.attach(x);            // attach Lines x to Window win
    win.wait_for_button();    // Draw!
}

int main()
try
{
    demo();    // the  main part of your code
    return 0;
}
catch (std::exception& e)
{
    std::cerr << "exception: " << e.what() << '\n';
    return 1;
}
catch (...)
{
    std::cerr << "Some exception\n";
    return 2;
}
