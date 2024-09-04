//DO NOT EDIT MANUALLY, let automation work hard.

// auto-generated by PinoutLogic.java based on ../../../connectors/custom_firmware.yaml
#include "pch.h"

// see comments at declaration in pin_repository.h
const char * getBoardSpecificPinName(brain_pin_e brainPin) {
	switch(brainPin) {
		case Gpio::A6: return "EECIV 24 Cam Sensor (CID)";
		case Gpio::A8: return "EECIV 54 WOT Cutout Relay";
		case Gpio::B1: return "EECIV 56 (PIP)";
		case Gpio::B9: return "EECIV 36 Spark Out (SPOUT)";
		case Gpio::C6: return "EECIV 35 Speed Control Vent Solenoid";
		case Gpio::C7: return "EECIV 10 AC Clutch";
		case Gpio::C8: return "EECIV 51 Speed Control Vacuum Solenoid";
		case Gpio::C9: return "EECIV 19 Fuel Pump Monitor";
		case Gpio::D10: return "EECIV 13 Injector 4";
		case Gpio::D11: return "EECIV 12 Injector 3";
		case Gpio::D9: return "EECIV 14 Injector 5";
		case Gpio::E10: return "5V Ref Enable";
		case Gpio::F11: return "EECIV 3 Vehicle Speed Sensor";
		case Gpio::F12: return "EECIV 15 Injector 6";
		case Gpio::F13: return "EECIV 4 Tacho (IDM)";
		case Gpio::F3: return "EECIV 1 Power Steering Switch";
		case Gpio::F4: return "EECIV 5 Brake Switch Input";
		case Gpio::F5: return "EECIV 30 Clutch Switch";
		case Gpio::G14: return "EECIV 32 Secondaries (IMRC)";
		case Gpio::G3: return "EECIV 21 Idle (IAC)";
		case Gpio::G4: return "EECIV 41 High Speed Fuel Pump";
		case Gpio::G5: return "EECIV 22 Low Speed Fuel Pump";
		case Gpio::G6: return "EECIV 55 Fan";
		case Gpio::G7: return "EECIV 58 Injector 1";
		case Gpio::G8: return "EECIV 59 Injector 2";
		default: return nullptr;
	}
	return nullptr;
}
