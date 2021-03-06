#ifndef CHVACSTATEPAGECOUPLED_H
#define CHVACSTATEPAGECOUPLED_H
#include "cpage.h"
#include "cwarningdialog.h"

#define HVAC_MIN_PAGE 1
#define HVAC_MAX_PAGE 2

//picture HVAC control id

#define IDLABEL_HVACSTATE_2_1          0x0B00
#define IDLABEL_HVACSTATE_3_1          0x0B01
#define IDLABEL_HVACSTATE_4_1          0x0B02
#define IDLABEL_HVACSTATE_5_1          0x0B03
#define IDLABEL_HVACSTATE_6_1          0x0B04
#define IDLABEL_HVACSTATE_7_1          0x0B05
#define IDLABEL_HVACSTATE_8_1          0x0B06
#define IDLABEL_HVACSTATE_9_1          0x0B07
#define IDLABEL_HVACSTATE_10_1         0x0B08
#define IDLABEL_HVACSTATE_11_1         0x0B09
#define IDLABEL_HVACSTATE_12_1         0x0B0A

#define IDLABEL_HVACSTATE_2_2          0x0B10
#define IDLABEL_HVACSTATE_3_2          0x0B11
#define IDLABEL_HVACSTATE_4_2          0x0B12
#define IDLABEL_HVACSTATE_5_2          0x0B13
#define IDLABEL_HVACSTATE_6_2          0x0B14
#define IDLABEL_HVACSTATE_7_2          0x0B15
#define IDLABEL_HVACSTATE_8_2          0x0B16
#define IDLABEL_HVACSTATE_9_2          0x0B17
#define IDLABEL_HVACSTATE_10_2         0x0B18
#define IDLABEL_HVACSTATE_11_2         0x0B19
#define IDLABEL_HVACSTATE_12_2         0x0B1A

#define IDLABEL_HVACSTATE_2_3          0x0B20
#define IDLABEL_HVACSTATE_3_3          0x0B21
#define IDLABEL_HVACSTATE_4_3          0x0B22
#define IDLABEL_HVACSTATE_5_3          0x0B23
#define IDLABEL_HVACSTATE_6_3          0x0B24
#define IDLABEL_HVACSTATE_7_3          0x0B25
#define IDLABEL_HVACSTATE_8_3          0x0B26
#define IDLABEL_HVACSTATE_9_3          0x0B27
#define IDLABEL_HVACSTATE_10_3         0x0B28
#define IDLABEL_HVACSTATE_11_3         0x0B29
#define IDLABEL_HVACSTATE_12_3         0x0B2A

#define IDLABEL_HVACSTATE_2_4          0x0B40
#define IDLABEL_HVACSTATE_3_4          0x0B41
#define IDLABEL_HVACSTATE_4_4          0x0B42
#define IDLABEL_HVACSTATE_5_4          0x0B43
#define IDLABEL_HVACSTATE_6_4          0x0B44
#define IDLABEL_HVACSTATE_7_4          0x0B45
#define IDLABEL_HVACSTATE_8_4          0x0B46
#define IDLABEL_HVACSTATE_9_4          0x0B47
#define IDLABEL_HVACSTATE_10_4         0x0B48
#define IDLABEL_HVACSTATE_11_4         0x0B49
#define IDLABEL_HVACSTATE_12_4         0x0B4A

#define IDLABEL_HVACSTATE_2_5          0x0B50
#define IDLABEL_HVACSTATE_3_5          0x0B51
#define IDLABEL_HVACSTATE_4_5          0x0B52
#define IDLABEL_HVACSTATE_5_5          0x0B53
#define IDLABEL_HVACSTATE_6_5          0x0B54
#define IDLABEL_HVACSTATE_7_5          0x0B55
#define IDLABEL_HVACSTATE_8_5          0x0B56
#define IDLABEL_HVACSTATE_9_5          0x0B57
#define IDLABEL_HVACSTATE_10_5         0x0B58
#define IDLABEL_HVACSTATE_11_5         0x0B59
#define IDLABEL_HVACSTATE_12_5         0x0B5A
#define IDLABEL_HVACSTATEPAGE         0x0B5B

#define IDLABEL_HVACSTATE_TRAINNUM     0x0B30
#define ID_HVACSTATE_PAGEDOWN          0x0B31
#define ID_HVACSTATE_PAGEUP            0x0B32

class CHvacStatePageCoupled : public CPage
{
    DECLEAR_MESSAGE_MAP(CHvacStatePageCoupled)
public:
    CHvacStatePageCoupled();
private:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnInitPage();
    void OnCommonQuitButtonDown();
    void OnDownButtonDown();
    void OnDownButtonUp();
    void OnUpButtonDown();
    void OnUpButtonUp();
    unsigned int pageNo;
    void OnInit();
};

#endif // CHVACSTATEPAGECOUPLED_H
