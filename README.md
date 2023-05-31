# USB_Device_Firmware_STM32F4

## USB_OTG_FS firmware for stm32.

This is a USB fs driver that is implemented using the barebones register for the stm32f429ZIT6U. The ultimate goal of the is to give myself an in depth understanding of USB firmware, specifically from the device side. My laptop will act as the host computer, and the microcontroller will be the device. Since there is no timeline on this project, I decided not to use any HAL libraries are LL drivers and work with the basic registers provided by STMicroelectronics. The only library used is the CMSIS library, which is used for all ARM microcontrollers. I like doing these barebones drivers since they give me a better understanding of the protocol and the hardware that I am using. This project is also based on a class I took as an introduction to firmware specifically for USB. The reference manual that this driver was implemented from is [RM0090: Reference manual](https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=&ved=2ahUKEwjIkO_n4Z7_AhXWI0QIHdm9CvcQFnoECBoQAQ&url=https%3A%2F%2Fwww.st.com%2Fresource%2Fen%2Freference_manual%2Frm0090-stm32f405415-stm32f407417-stm32f427437-and-stm32f429439-advanced-armbased-32bit-mcus-stmicroelectronics.pdf&usg=AOvVaw2JuhDmHLBnKkg4XP84cF5P) 

## Layers of implementation

### Driver layer
For this implementation, I used C. The main driver (which will be explained in more detail later on in the README), is contained within the **usbd_driver.c** file. These are all of the functions that interact with the actual hardware. This will be abstracted away from the end user because we don't want them to have to worry about how the hardware is working. They just need to worry about how they are using the USB protocol (sending setup packets, data packets, tokens, etc).


### Framework layer
TODO





