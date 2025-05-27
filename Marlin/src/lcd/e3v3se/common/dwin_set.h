/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2021 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

// Picture LibID
#define Language_English    1
#define Language_Chinese    2

#define ICON                0
#define AUX_ASSETS         27
#define BootAnimation_min      4
#define BootAnimation_max     42
#define BootAnimation_reset   43
#define BootAnimation_X       20
#define BootAnimation_Y       96

#define LOGO_LITTLE_X  72  //Small logo coordinates
#define LOGO_LITTLE_Y  36

#ifndef CORP_WEBSITE
  #define CORP_WEBSITE WEBSITE_URL
#endif

// 96x14
#define ICON_LOGO                0
// 102x115
#define ICON_Print_0             1
#define ICON_Print_1             2
#define ICON_Prepare_0           3
#define ICON_Prepare_1           4
#define ICON_Control_0           5 // ✜
#define ICON_Control_1           6 // ✜ hover
#define ICON_Leveling_0          7
#define ICON_Leveling_1          8
// 20x20
#define ICON_HotendTemp          9
#define ICON_BedTemp            10
#define ICON_Speed              11
#define ICON_Zoffset            12
#define ICON_Back               13
#define ICON_File               14
#define ICON_PrintTime          15
#define ICON_RemainTime         16
// 68x64
#define ICON_Setup_0            17
#define ICON_Setup_1            18
#define ICON_Pause_0            19
#define ICON_Pause_1            20
#define ICON_Continue_0         21
#define ICON_Continue_1         22
#define ICON_Stop_0             23
#define ICON_Stop_1             24

// 20x20
#define ICON_More               26

#define ICON_Axis               27
#define ICON_CloseMotor         28
#define ICON_Homing             29
#define ICON_SetHome            30
#define ICON_PLAPreheat         31
#define ICON_ABSPreheat         32 // TPU
#define ICON_Cool               33
#define ICON_Language           34

#define ICON_MoveX              35
#define ICON_MoveY              36
#define ICON_MoveZ              37
#define ICON_Extruder           38

#define ICON_UpDown             39 // ↕

#define ICON_Temperature        40
#define ICON_Motion             41
#define ICON_WriteEEPROM        42
#define ICON_ReadEEPROM         43
#define ICON_ResetEEPROM        44
#define ICON_Info               45

#define ICON_SetEndTemp         46
#define ICON_SetBedTemp         47
#define ICON_FanSpeed           48
#define ICON_SetPLAPreheat      49
#define ICON_SetABSPreheat      50 // TPU

#define ICON_MaxSpeed           51
#define ICON_MaxAccelerated     52
#define ICON_MaxJerk            53
#define ICON_Step               54
#define ICON_PrintSize          55
#define ICON_Version            56
#define ICON_Contact            57
#define ICON_StockConfiguration 58
#define ICON_MaxSpeedX          59
#define ICON_MaxSpeedY          60
#define ICON_MaxSpeedZ          61
#define ICON_MaxSpeedE          62
#define ICON_MaxAccX            63
#define ICON_MaxAccY            64
#define ICON_MaxAccZ            65
#define ICON_MaxAccE            66
#define ICON_MaxSpeedJerkX      67
#define ICON_MaxSpeedJerkY      68
#define ICON_MaxSpeedJerkZ      69
#define ICON_MaxSpeedJerkE      70
#define ICON_StepX              71
#define ICON_StepY              72
#define ICON_StepZ              73
#define ICON_StepE              74
#define ICON_Setspeed           75
#define ICON_SetZOffset         76

// 78x78
#define ICON_NozzleToBed        78
#define ICON_TempTooLow         79
// #define ICON_AutoLeveling       80
#define ICON_TempTooHigh        81

// 20x20
#define ICON_Cabinet            82

// 68x68
#define ICON_NozzleToBedError   83
#define ICON_NozzleError        84

// 20x20
#define ICON_PIDSettings        95
#define ICON_PIDAutoTune        96
#define ICON_EditManually       97
#define ICON_PID_NozzleP       100
#define ICON_PID_NozzleI       101
#define ICON_PID_NozzleD       102
#define ICON_PID_BedP          103
#define ICON_PID_BedI          104
#define ICON_PID_BedD          105
#define ICON_PIDAutoTune_Nozzle 106
#define ICON_PIDAutoTune_Bed   107
#define ICON_NozzleOffset      108
#define ICON_Nozzle_Up         166
#define ICON_Nozzle_Down       167

// 124x124
#define ICON_QR_BedLevel_Help_CN 98
#define ICON_QR_BedLevel_Help_EN 99

// 140x140
#define ICON_Instruction_CutFilament45 168
#define ICON_Instruction_PushFilament  169
#define ICON_Instruction_FilamentLoads 170
#define ICON_Instruction_PullFilament  171

// 36x36
#define ICON_NozzleOffset_0      172
#define ICON_NozzleOffset_1      173
#define ICON_NozzleProbe_0       174
#define ICON_NozzleProbe_1       175
#define ICON_NozzleClear_0       176
#define ICON_NozzleClear_1       177

// 18x18
#define ICON_DottedLine          178

// 36x21
#define ICON_LabelOff            179
#define ICON_LabelOn             180

// 96x96
#define ICON_EnderMan            143

// Custom
#define ICON_Folder       ICON_Cabinet
#define ICON_AdvSet       ICON_Language
#define ICON_HomeOffset   ICON_PrintSize
#define ICON_HomeOffsetX  ICON_StepX
#define ICON_HomeOffsetY  ICON_StepY
#define ICON_HomeOffsetZ  ICON_StepZ
#define ICON_ProbeOffset  ICON_AdvSet
#define ICON_ProbeOffsetX ICON_StepX
#define ICON_ProbeOffsetY ICON_StepY
#define ICON_ProbeOffsetZ ICON_StepZ
#define ICON_PIDNozzle    ICON_PIDAutoTune_Nozzle
#define ICON_PIDBed       ICON_PIDAutoTune_Bed
#define ICON_FWRetract    ICON_StepE
#define ICON_FWRetLength  ICON_StepE
#define ICON_FWRetSpeed   ICON_Setspeed
#define ICON_FWRetZRaise  ICON_MoveZ
#define ICON_FWRecSpeed   ICON_Setspeed
#define ICON_FWRecExtra   ICON_StepE

#define ICON_Fade                 ICON_Version
#define ICON_Mesh                 ICON_Version
#define ICON_Tilt                 ICON_Version
#define ICON_Brightness           ICON_Version
#define ICON_AxisD                ICON_Axis
#define ICON_AxisBR               ICON_Axis
#define ICON_AxisTR               ICON_Axis
#define ICON_AxisBL               ICON_Axis
#define ICON_AxisTL               ICON_Axis
#define ICON_AxisC                ICON_Axis

/* LANGUAGE Labels */

// Main
#define LANGUAGE_Main             1
#define LANGUAGE_Print_0          2
#define LANGUAGE_Prepare_0        3
#define LANGUAGE_Control_0        4
#define LANGUAGE_Info_0           5
#define LANGUAGE_Stop_0           6
#define LANGUAGE_Pause_0          7
#define LANGUAGE_Print_1          8
#define LANGUAGE_Prepare_1        9
#define LANGUAGE_Control_1        10
#define LANGUAGE_Info_1           11
#define LANGUAGE_Stop_1           12
#define LANGUAGE_Pause_1          13
#define LANGUAGE_Level_0          14
#define LANGUAGE_Level_1          15
// Printing
#define LANGUAGE_Zoffset          16
#define LANGUAGE_Setup            17
#define LANGUAGE_PrintTime        18
#define LANGUAGE_PrintSpeed       19
#define LANGUAGE_Printing         20
#define LANGUAGE_Back             21
#define LANGUAGE_Fan              22
#define LANGUAGE_Hotend           23
#define LANGUAGE_Bedend           24
#define LANGUAGE_RemainTime       25
#define LANGUAGE_SelectFile       26
#define LANGUAGE_Pausing          27
// Control
#define LANGUAGE_Store            28
#define LANGUAGE_Read             29
#define LANGUAGE_Reset            30
#define LANGUAGE_Temp             31
#define LANGUAGE_Motion           32
#define LANGUAGE_Motion_Title     33
// Prepare
#define LANGUAGE_ABS              34
#define LANGUAGE_PLA              35
#define LANGUAGE_Home             36
// #define LANGUAGE_SetHome       37
#define LANGUAGE_info_new         37
#define LANGUAGE_CloseMotion      38
#define LANGUAGE_Move_Title       39
#define LANGUAGE_Prepare          40
#define LANGUAGE_Cool             41
// Move
#define LANGUAGE_MoveX            42
#define LANGUAGE_MoveY            43
#define LANGUAGE_MoveZ            44
#define LANGUAGE_MoveE            45
#define LANGUAGE_Move             46
// Temperpare
#define LANGUAGE_PLASetup         47
#define LANGUAGE_ABSSetup         48
#define LANGUAGE_Temp_Title       49
// Motion
#define LANGUAGE_X                50
#define LANGUAGE_Y                51
#define LANGUAGE_Z                52
#define LANGUAGE_E                53
#define LANGUAGE_Step             54
#define LANGUAGE_Acc              55
#define LANGUAGE_Corner           56
#define LANGUAGE_MaxSpeed         57
// Info
#define LANGUAGE_Version          58
#define LANGUAGE_Size             59
#define LANGUAGE_Contact          60
#define LANGUAGE_Info             61
// Preheat Configuration
#define LANGUAGE_PLASetup_Title   62
#define LANGUAGE_PLASetupSave     63
#define LANGUAGE_ABSSetup_Title   64
#define LANGUAGE_ABSSetupSave     65
// Language
#define LANGUAGE_language         66
// Popup Window
#define LANGUAGE_FilamentLoad     67
#define LANGUAGE_FilamentUseup    68
#define LANGUAGE_TempLow          69   // 喷嘴温度过低
#define LANGUAGE_PowerLoss        70
#define LANGUAGE_TempHigh         71
#define LANGUAGE_Cancel           72   // 取消按钮
#define LANGUAGE_Confirm          73   // 确定按钮
#define LANGUAGE_Homing           74
#define LANGUAGE_waiting          75
#define LANGUAGE_PausePrint       76
#define LANGUAGE_StopPrint        77
// Add
#define LANGUAGE_Setup_0          78
#define LANGUAGE_Setup_1          79
#define LANGUAGE_Control          80
#define LANGUAGE_Finish           81
#define LANGUAGE_PrintFinish      82   // 确定按钮
#define LANGUAGE_Card_Remove_JPN  83
#define LANGUAGE_Homeing          84
#define LANGUAGE_leveing          85

#define LANGUAGE_mjerk_title        86
#define LANGUAGE_ratio_title        87
#define LANGUAGE_mspeed_title       88
#define LANGUAGE_maccel_title       89
// new_add rock_202220302
#define LANGUAGE_recard_OK          90   // 拔卡确定按钮
#define LANGUAGE_align_height       91   // 一键对高
#define LANGUAGE_filament_cancel    92   // 断料恢复停止按钮
#define LANGUAGE_keep_print_0       93
#define LANGUAGE_keep_print_1       94
#define LANGUAGE_print_stop         95   // 停止按钮
#define LANGUAGE_Powerloss_go       96   // 断电续打继续打印按钮
// 20220819 rock_add
//#define LANGUAGE_Laser_switch       97   // 切换激光雕刻
#define LANGUAGE_PID_Manually       98   // 手动设置PID
#define LANGUAGE_Auto_PID           99   // 自动设置PID
// PLA设置
#define LANGUAGE_PLA_FAN              100
#define LANGUAGE_PLA_NOZZLE           101
#define LANGUAGE_PLA_BED              102
// ABS设置
#define LANGUAGE_ABS_NOZZLE           103
#define LANGUAGE_ABS_BED              104
#define LANGUAGE_ABS_FAN              105

// 最大速度
#define LANGUAGE_MAX_SPEEDX          107
#define LANGUAGE_MAX_SPEEDY          108
#define LANGUAGE_MAX_SPEEDZ          109
#define LANGUAGE_MAX_SPEEDE          110
// 最大加速度
#define LANGUAGE_MAX_ACCX          112
#define LANGUAGE_MAX_ACCY          113
#define LANGUAGE_MAX_ACCZ          114
#define LANGUAGE_MAX_ACCE          115
// 最大拐角速度
#define LANGUAGE_MAX_CORNERX          117
#define LANGUAGE_MAX_CORNERY          118
#define LANGUAGE_MAX_CORNERZ          119
#define LANGUAGE_MAX_CORNERE          120

#define LANGUAGE_Auto_Set_Bed_PID     116  // 自动设置热床PID
#define LANGUAGE_Auto_Set_Nozzle_PID  121  // 自动设置喷嘴PID

#define LANGUAGE_Step_Per_X       122  // 传动比X
#define LANGUAGE_Step_Per_Y       123  // 传动比Y
#define LANGUAGE_Step_Per_Z       124  // 传动比Z
#define LANGUAGE_Step_Per_E       125  // 传动比E

#define LANGUAGE_Title_Feedback   111 // 意见反馈
#define LANGUAGE_Feedback         126 // 意见反馈
// 图片预览文本-需要添加
#define LANGUAGE_Estimated_Time      127  // 预计时间
#define LANGUAGE_Filament_Used       128  // 用料长度
#define LANGUAGE_Layer_Height        129  // 层高
#define LANGUAGE_Volume              130  // 体积

// PID设置
#define LANGUAGE_Set_PID_Manually   131  // 手动设置PID
#define LANGUAGE_Nozz_P             132  // 喷嘴P值
#define LANGUAGE_Nozz_I             133  // 喷嘴I值
#define LANGUAGE_Nozz_D             134  // 喷嘴D值
#define LANGUAGE_Bed_P              135  // 热床P值
#define LANGUAGE_Bed_I              136  // 热床I值
#define LANGUAGE_Bed_D              137  // 热床D值
#define LANGUAGE_Set_Auto_PID       138  // 自动PID

#define LANGUAGE_Title_Language     106  // 语言标题
//#define LANGUAGE_Fun_LANGUAGE       139  // 语言标题
#define LANGUAGE_Bed_LOW            140  // 热床温度过低
#define LANGUAGE_Bed_HIGH           141  // 热床温度过高

#define LANGUAGE_Auto_PID_ING       142  // 自动PID检测中
#define LANGUAGE_Auto_PID_END       143  // 自动PID检测完成
#define LANGUAGE_Auto_NOZZ_EX       144  // 自动PID检测完成
#define LANGUAGE_Auto_BED_EX        145  // 自动PID检测完成

#define LANGUAGE_Auto_Set_Nozzle_PID_Title  146  // 自动设置喷嘴PID
#define LANGUAGE_Auto_Set_Bed_PID_Title     147  // 自动设置热床PID
#define LANGUAGE_IN_STORK  148  //进料词条
#define LANGUAGE_OUT_STORK 149  //退料词条
#define LANGUAGE_STORKING_TIP1  150 //进料中提示1
#define LANGUAGE_OUT_STORKING_TIP2 151 //退料中提示1
#define LANGUAGE_STORKING_TIP2 152 //进料中提示送料
#define LANGUAGE_OUT_STORKED_TIP2 153 //退料完成提示
#define LANGUAGE_IN_TITLE   154 //进料标题
#define LANGUAGE_OUT_TITLE 155 //退料标题
#define LANGUAGE_Hardware_Version 156 //硬件版本词条
#define LANGUAGE_Level_Calibration 157 //打印校准词条
#define LANGUAGE_HIGH_ERR_CLEAR    158  //对高失败请清洁
#define LANGUAGE_CLEAR_HINT       159 //提示清洁喷嘴和平台
#define LANGUAGE_SCAN_QR          160 //扫描二维码获取解决方案
#define LANGUAGE_BOOT_undone      161 // 开机引导未完成
#define LANGUAGE_CRTouch_error      162 // CRTouch异常，请联系客服

#define LANGUAGE_LEVELING_EDIT     189  //调平数据编辑按钮
#define LANGUAGE_LEVELING_CONFIRM  190  //调平确定按钮
#define LANGUAGE_EDIT_LEVEL_DATA   191 //编辑调平数据
#define LANGUAGE_EDIT_DATA_TITLE   192 //编辑调平数据标题
#define LANGUAGE_LEVEL_FINISH      193 //调平完成词条
#define LANGUAGE_LEVEL_ERROR       194 //调平失败词条
#define LANGUAGE_LEVEL_EDIT_DATA   195 //编辑调平数据标题
#define LANGUAGE_AUTO_HIGHT_TITLE  196 //对高中
#define LANGUAGE_NOZZLE_HOT        197  //喷嘴加热
#define LANGUAGE_NOZZLE_CLRAR  198  //喷嘴清洁
#define LANGUAGE_NOZZLE_HIGHT  199  //喷嘴对高
