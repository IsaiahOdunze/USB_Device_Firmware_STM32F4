#include "Helpers/logger.h"
#include "usbd_framework.h"

UsbDevice usb_device;
uint32_t buffer[8];

int main(void)
{
    /* Loop forever */
	log_info("Program entry point.");
	usb_device.ptr_out_buffer = &buffer;
	usbd_initialize(&usb_device);
	for(;;)
	{
		usbd_poll();
	}
}
