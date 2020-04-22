#ifndef AEROSUBC_H__
#define AEROSUBC_H__

#include <windows.h>

#define ASC_NO_FRAME_EXTENSION 0x0001
#define ASC_SUBCLASS_STATIC    0x0002
#define ASC_SUBCLASS_BUTTON    0x0004
#define ASC_SUBCLASS_LISTBOX   0x0008
#define ASC_SUBCLASS_LISTCTRL  0x0010
#define ASC_SUBCLASS_HDRCTRL   0x0020
#define ASC_SUBCLASS_EDIT      0x0040
#define ASC_SUBCLASS_COMBOBOX  0x0080
#define ASC_SUBCLASS_ANIMATION 0x0100
#define ASC_SUBCLASS_SLIDER    0x0200
#define ASC_SUBCLASS_SPINCTRL  0x0400
#define ASC_SUBCLASS_IPADRCTRL 0x0800
#define ASC_SUBCLASS_DATETIMEP 0x1000
#define ASC_SUBCLASS_TREECTRL  0x2000
#define ASC_SUBCLASS_PRGSCTRL  0x4000

#define ASC_SUBCLASS_ALL_CONTROLS (ASC_SUBCLASS_STATIC|ASC_SUBCLASS_BUTTON|ASC_SUBCLASS_LISTBOX|ASC_SUBCLASS_LISTCTRL|\
ASC_SUBCLASS_HDRCTRL|ASC_SUBCLASS_EDIT|ASC_SUBCLASS_COMBOBOX|ASC_SUBCLASS_ANIMATION|ASC_SUBCLASS_SLIDER|\
ASC_SUBCLASS_SPINCTRL|ASC_SUBCLASS_IPADRCTRL|ASC_SUBCLASS_DATETIMEP|ASC_SUBCLASS_TREECTRL|ASC_SUBCLASS_PRGSCTRL)

#ifdef __cplusplus
extern "C" {
#endif

BOOL isValidSystem();
BOOL AllAero(HWND hWnd);
BOOL AeroAutoSubclass(HWND hWnd, DWORD dwFlags, DWORD dwReserved);
BOOL AeroSubClassStatic(HWND hwnd);
BOOL AeroSubClassButton(HWND hwnd);
BOOL AeroSubClassListBox(HWND hwnd);
BOOL AeroSubClassListCtrl(HWND hwnd);
BOOL AeroSubClassHeaderCtrl(HWND hwnd);
BOOL AeroSubClassEdit(HWND hwnd);
BOOL AeroSubClassComboBox(HWND hwnd);
BOOL AeroSubClassComboBoxEx(HWND hwnd);
BOOL AeroSubClassAnimation(HWND hwnd);
BOOL AeroSubClassSlider(HWND hwnd);
BOOL AeroSubClassSpinCtrl(HWND hwnd);
BOOL AeroSubClassIPAddressCtrl(HWND hwnd);
BOOL AeroSubClassDateTimePick(HWND hwnd);
BOOL AeroSubClassTreeCtrl(HWND hwnd);
BOOL AeroSubClassCtrl(HWND hwnd);
BOOL AeroSubClassProgressCtrl(HWND hwnd);

#ifdef __cplusplus
}
#endif

#endif

