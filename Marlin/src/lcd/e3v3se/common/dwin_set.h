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

#define ICON 7 // 7.ICO

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
