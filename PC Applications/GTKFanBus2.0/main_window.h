#include <gtkmm.h>
#include "fan_tab.h"
#include "serial_control.h"

class main_window : public Gtk::Window
{
	public:
		main_window();
        void open_func();


	private:
        //Table and tab objects
        Gtk::Table table;
        Gtk::Notebook notebook;

        //Serial Port Control object
        serial_control port;

       	//Fan tab objects
       	fan_tab* fans[252];
       	int num_fans;
};
