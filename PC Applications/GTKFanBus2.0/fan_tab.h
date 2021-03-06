#include <gtkmm.h>

#include "rgb_led_control.h"
#include "fan_control.h"

class fan_tab : public Gtk::Frame
{
	public:
		fan_tab(unsigned char dev_addr);

	private:
	    unsigned char fan_addr;
		rgb_led_control led1, led2, led3, led4;
		fan_control fan;
		Gtk::Table table;
};
