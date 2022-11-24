#ifndef HARL
#define HARL

# include <iostream>

#define COLOR_RESET     "\x1b[0m"
#define COLOR      "\x1b[2m"

class Harl {

    public:
        Harl();
        ~Harl();

        void complain( std::string level );

    private:
        std::string _alert[4];

        void _debug( void );
        void _info( void );
        void _warning( void );
        void _error( void );
        std::string	_to_upper(std::string str);
};

typedef void (Harl::*harls_functions)(void);

#endif