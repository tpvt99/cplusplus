#define LIKE

#ifndef BABY
#define BABY
void doNothing()
{
    #ifdef LIKE
    std::cout << "Love";
    #endif // LOVE
    #ifndef LIKE
    std::cout << "Not Love";
    #endif // LOVE
}

#endif // BABY


