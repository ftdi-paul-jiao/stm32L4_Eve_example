/*
This file is automatically generated
Ft_Esd_Clock
Header
*/

#ifndef Ft_Esd_Clock__H
#define Ft_Esd_Clock__H

#include "FT_DataTypes.h"
#include "Ft_Esd.h"
#include "Ft_Esd_DefaultTheme.h"
#include "Ft_Esd_PosSizeToRadius.h"
#include "Ft_Esd_Theme.h"
#include "Ft_Esd_TouchTag.h"

#ifndef ESD_LOGIC
#define ESD_LOGIC(name, ...)
#define ESD_ACTOR(name, ...)
#define ESD_WIDGET(name, ...)
#define ESD_PAGE(name, ...)
#define ESD_APPLICATION(name, ...)
#define ESD_INPUT(name, ...)
#define ESD_OUTPUT(name, ...)
#define ESD_SLOT(name, ...)
#define ESD_SIGNAL(name, ...)
#define ESD_VARIABLE(name, ...)
#define ESD_WRITER(name, ...)
#endif

/* EVE builtin clock with interact capability */
ESD_WIDGET(Ft_Esd_Clock, Include = "Ft_Esd_Clock.h", Callback, DisplayName = "ESD Clock", Category = EsdWidgets, Icon = ":/icons/clock.png")
typedef struct
{
	void *Parent;
	ESD_INPUT(Theme, Type = Ft_Esd_Theme *, EditRole = Library, Default = Ft_Esd_Theme_GetCurrent)
	Ft_Esd_Theme *(* Theme)(void *context);
	ESD_INPUT(X, Type = ft_int16_t, Default = 0)
	ft_int16_t(* X)(void *context);
	ESD_INPUT(Y, Type = ft_int16_t, Default = 0)
	ft_int16_t(* Y)(void *context);
	Ft_Esd_PosSizeToRadius Ft_Esd_PosSizeToRadius;
	ESD_INPUT(Width, Type = ft_int16_t, Max = 4096, Default = 144)
	ft_int16_t(* Width)(void *context);
	ESD_INPUT(Height, Type = ft_int16_t, Max = 4096, Default = 144)
	ft_int16_t(* Height)(void *context);
	ESD_INPUT(Alpha, Type = uint8_t, Min = 0, Max = 255, SingleStep = 1, Default = 255)
	uint8_t(* Alpha)(void *context);
	ESD_INPUT(H, DisplayName = "Hours", Type = ft_uint16_t)
	ft_uint16_t(* H)(void *context);
	ESD_INPUT(M, DisplayName = "Minutes", Type = ft_uint16_t)
	ft_uint16_t(* M)(void *context);
	ESD_INPUT(S, DisplayName = "Seconds", Type = ft_uint16_t)
	ft_uint16_t(* S)(void *context);
	ESD_INPUT(Ms, DisplayName = "Milliseconds", Type = ft_uint32_t)
	ft_uint32_t(* Ms)(void *context);
	Ft_Esd_TouchTag Touch_Tag;
	ESD_INPUT(Interactive, Type = ft_bool_t, Default = false)
	ft_bool_t(* Interactive)(void *context);
} Ft_Esd_Clock;

void Ft_Esd_Clock__Initializer(Ft_Esd_Clock *context);

ESD_SLOT(Render)
void Ft_Esd_Clock_Render(Ft_Esd_Clock *context);

ESD_SLOT(Start)
void Ft_Esd_Clock_Start(Ft_Esd_Clock *context);

ESD_SLOT(Update)
void Ft_Esd_Clock_Update(Ft_Esd_Clock *context);

ESD_SLOT(End)
void Ft_Esd_Clock_End(Ft_Esd_Clock *context);

#endif /* Ft_Esd_Clock__H */

/* end of file */