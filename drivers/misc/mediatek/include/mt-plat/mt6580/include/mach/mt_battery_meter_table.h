/*
 * Copyright (C) 2015 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

#include <mt-plat/battery_meter.h>

/* ============================================================*/
/* define*/
/* ============================================================*/
#define BAT_NTC_10 1
#define BAT_NTC_47 0

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R	16900
#define RBAT_PULL_DOWN_R	27000
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R	61900
#define RBAT_PULL_DOWN_R	100000
#endif
#define RBAT_PULL_UP_VOLT	1800



/* ============================================================*/
/* ENUM*/
/* ============================================================*/

/* ============================================================*/
/* structure*/
/* ============================================================*/

/* ============================================================*/
/* typedef*/
/* ============================================================*/
typedef struct _BATTERY_PROFILE_STRUCT {
	signed int percentage;
	signed int voltage;
} BATTERY_PROFILE_STRUCT, *BATTERY_PROFILE_STRUCT_P;

typedef struct _R_PROFILE_STRUCT {
	signed int resistance; /* Ohm*/
	signed int voltage;
} R_PROFILE_STRUCT, *R_PROFILE_STRUCT_P;

typedef enum {
	T1_0C,
	T2_25C,
	T3_50C
} PROFILE_TEMPERATURE;

/* ============================================================*/
/* External Variables*/
/* ============================================================*/

/* ============================================================*/
/* External function*/
/* ============================================================*/

/* ============================================================*/
/* <DOD, Battery_Voltage> Table*/
/* ============================================================*/
#if (BAT_NTC_10 == 1)
	BATT_TEMPERATURE Batt_Temperature_Table[] = {
		{-20, 68237},
		{-15, 53650},
		{-10, 42506},
		{ -5, 33892},
		{  0, 27219},
		{  5, 22021},
		{ 10, 17926},
		{ 15, 14674},
		{ 20, 12081},
		{ 25, 10000},
		{ 30, 8315},
		{ 35, 6948},
		{ 40, 5834},
		{ 45, 4917},
		{ 50, 4161},
		{ 55, 3535},
		{ 60, 3014}
};
#endif

#if (BAT_NTC_47 == 1)
	BATT_TEMPERATURE Batt_Temperature_Table[] = {
		{-20, 483954},
		{-15, 360850},
		{-10, 271697},
		{ -5, 206463},
		{  0, 158214},
		{  5, 122259},
		{ 10, 95227},
		{ 15, 74730},
		{ 20, 59065},
		{ 25, 47000},
		{ 30, 37643},
		{ 35, 30334},
		{ 40, 24591},
		{ 45, 20048},
		{ 50, 16433},
		{ 55, 13539},
		{ 60, 11210}
	};
#endif

/* T0 -10C*/
BATTERY_PROFILE_STRUCT battery_profile_t0[] = {
	{0 ,	4349},
	{1 ,	4328},
	{2 ,	4311},
	{3 ,	4296},
	{4 ,	4284},
	{5 ,	4271},
	{6 ,	4257},
	{7 ,	4245},
	{8 ,	4233},
	{9 ,	4221},
	{10 ,	4210},
	{11 ,	4199},
	{12 ,	4187},
	{13 ,	4177},
	{14 ,	4165},
	{15 ,	4154},
	{16 ,	4143},
	{17 ,	4132},
	{18 ,	4121},
	{19 ,	4110},
	{20 ,	4100},
	{21 ,	4095},
	{22 ,	4085},
	{23 ,	4079},
	{24 ,	4066},
	{25 ,	4049},
	{26 ,	4031},
	{27 ,	4013},
	{28 ,	3996},
	{29 ,	3981},
	{30 ,	3970},
	{31 ,	3960},
	{32 ,	3951},
	{33 ,	3942},
	{34 ,	3936},
	{35 ,	3930},
	{36 ,	3925},
	{37 ,	3920},
	{38 ,	3914},
	{39 ,	3906},
	{40 ,	3899},
	{41 ,	3891},
	{42 ,	3884},
	{43 ,	3877},
	{44 ,	3871},
	{45 ,	3866},
	{46 ,	3859},
	{47 ,	3855},
	{48 ,	3851},
	{49 ,	3846},
	{50 ,	3841},
	{51 ,	3833},
	{52 ,	3828},
	{53 ,	3823},
	{54 ,	3820},
	{55 ,	3815},
	{56 ,	3812},
	{57 ,	3808},
	{58 ,	3805},
	{59 ,	3801},
	{60 ,	3798},
	{61 ,	3796},
	{62 ,	3793},
	{63 ,	3791},
	{64 ,	3789},
	{65 ,	3787},
	{66 ,	3785},
	{67 ,	3783},
	{68 ,	3781},
	{69 ,	3780},
	{70 ,	3777},
	{71 ,	3775},
	{72 ,	3773},
	{73 ,	3770},
	{74 ,	3767},
	{75 ,	3765},
	{76 ,	3761},
	{77 ,	3757},
	{78 ,	3754},
	{79 ,	3751},
	{80 ,	3747},
	{81 ,	3742},
	{82 ,	3739},
	{83 ,	3734},
	{84 ,	3729},
	{85 ,	3724},
	{86 ,	3721},
	{87 ,	3717},
	{88 ,	3712},
	{89 ,	3708},
	{90 ,	3705},
	{91 ,	3701},
	{92 ,	3697},
	{93 ,	3692},
	{94 ,	3684},
	{95 ,	3674},
	{96 ,	3648},
	{97 ,	3593},
	{98 ,	3543},
	{99 ,	3493},
	{100 ,	3409}
};
/* T1 0C */
BATTERY_PROFILE_STRUCT battery_profile_t1[] = {
	{0 ,	4345},
	{1 ,	4328},
	{2 ,	4312},
	{3 ,	4297},
	{4 ,	4286},
	{5 ,	4274},
	{6 ,	4262},
	{7 ,	4251},
	{8 ,	4238},
	{9 ,	4228},
	{10 ,	4216},
	{11 ,	4205},
	{12 ,	4196},
	{13 ,	4185},
	{14 ,	4175},
	{15 ,	4164},
	{16 ,	4153},
	{17 ,	4144},
	{18 ,	4134},
	{19 ,	4123},
	{20 ,	4112},
	{21 ,	4103},
	{22 ,	4094},
	{23 ,	4087},
	{24 ,	4081},
	{25 ,	4074},
	{26 ,	4050},
	{27 ,	4032},
	{28 ,	4015},
	{29 ,	3997},
	{30 ,	3984},
	{31 ,	3974},
	{32 ,	3964},
	{33 ,	3955},
	{34 ,	3948},
	{35 ,	3941},
	{36 ,	3934},
	{37 ,	3927},
	{38 ,	3920},
	{39 ,	3914},
	{40 ,	3906},
	{41 ,	3899},
	{42 ,	3891},
	{43 ,	3884},
	{44 ,	3877},
	{45 ,	3871},
	{46 ,	3865},
	{47 ,	3858},
	{48 ,	3853},
	{49 ,	3847},
	{50 ,	3842},
	{51 ,	3837},
	{52 ,	3832},
	{53 ,	3827},
	{54 ,	3823},
	{55 ,	3819},
	{56 ,	3815},
	{57 ,	3811},
	{58 ,	3808},
	{59 ,	3805},
	{60 ,	3801},
	{61 ,	3798},
	{62 ,	3795},
	{63 ,	3792},
	{64 ,	3789},
	{65 ,	3787},
	{66 ,	3785},
	{67 ,	3783},
	{68 ,	3781},
	{69 ,	3780},
	{70 ,	3778},
	{71 ,	3776},
	{72 ,	3775},
	{73 ,	3773},
	{74 ,	3770},
	{75 ,	3768},
	{76 ,	3762},
	{77 ,	3760},
	{78 ,	3756},
	{79 ,	3753},
	{80 ,	3748},
	{81 ,	3744},
	{82 ,	3739},
	{83 ,	3734},
	{84 ,	3730},
	{85 ,	3723},
	{86 ,	3716},
	{87 ,	3709},
	{88 ,	3704},
	{89 ,	3699},
	{90 ,	3696},
	{91 ,	3693},
	{92 ,	3689},
	{93 ,	3686},
	{94 ,	3681},
	{95 ,	3671},
	{96 ,	3640},
	{97 ,	3591},
	{98 ,	3536},
	{99 ,	3490},
	{100 ,	3400}
};

/* T2 25C*/
BATTERY_PROFILE_STRUCT battery_profile_t2[] = {
	{0 ,	4338},
	{1 ,	4325},
	{2 ,	4313},
	{3 ,	4301},
	{4 ,	4290},
	{5 ,	4279},
	{6 ,	4268},
	{7 ,	4257},
	{8 ,	4246},
	{9 ,	4235},
	{10 ,	4224},
	{11 ,	4213},
	{12 ,	4202},
	{13 ,	4192},
	{14 ,	4181},
	{15 ,	4171},
	{16 ,	4161},
	{17 ,	4150},
	{18 ,	4140},
	{19 ,	4129},
	{20 ,	4119},
	{21 ,	4109},
	{22 ,	4099},
	{23 ,	4089},
	{24 ,	4082},
	{25 ,	4076},
	{26 ,	4072},
	{27 ,	4063},
	{28 ,	4048},
	{29 ,	4029},
	{30 ,	4013},
	{31 ,	4001},
	{32 ,	3991},
	{33 ,	3983},
	{34 ,	3978},
	{35 ,	3974},
	{36 ,	3969},
	{37 ,	3964},
	{38 ,	3957},
	{39 ,	3949},
	{40 ,	3940},
	{41 ,	3930},
	{42 ,	3919},
	{43 ,	3908},
	{44 ,	3897},
	{45 ,	3889},
	{46 ,	3881},
	{47 ,	3874},
	{48 ,	3868},
	{49 ,	3862},
	{50 ,	3856},
	{51 ,	3851},
	{52 ,	3846},
	{53 ,	3841},
	{54 ,	3837},
	{55 ,	3833},
	{56 ,	3828},
	{57 ,	3824},
	{58 ,	3821},
	{59 ,	3817},
	{60 ,	3813},
	{61 ,	3810},
	{62 ,	3807},
	{63 ,	3804},
	{64 ,	3798},
	{65 ,	3795},
	{66 ,	3792},
	{67 ,	3789},
	{68 ,	3787},
	{69 ,	3784},
	{70 ,	3782},
	{71 ,	3779},
	{72 ,	3776},
	{73 ,	3773},
	{74 ,	3770},
	{75 ,	3766},
	{76 ,	3762},
	{77 ,	3758},
	{78 ,	3754},
	{79 ,	3751},
	{80 ,	3748},
	{81 ,	3745},
	{82 ,	3740},
	{83 ,	3734},
	{84 ,	3728},
	{85 ,	3722},
	{86 ,	3716},
	{87 ,	3708},
	{88 ,	3700},
	{89 ,	3697},
	{90 ,	3696},
	{91 ,	3695},
	{92 ,	3693},
	{93 ,	3692},
	{94 ,	3688},
	{95 ,	3640},
	{96 ,	3605},
	{97 ,	3580},
	{98 ,	3540},
	{99 ,	3477},
	{100 ,	3378}
};

/* T3 50C*/
BATTERY_PROFILE_STRUCT battery_profile_t3[] = {
	{0 ,	4335},
	{1 ,	4322},
	{2 ,	4311},
	{3 ,	4300},
	{4 ,	4289},
	{5 ,	4277},
	{6 ,	4268},
	{7 ,	4257},
	{8 ,	4248},
	{9 ,	4235},
	{10 ,	4225},
	{11 ,	4213},
	{12 ,	4203},
	{13 ,	4193},
	{14 ,	4181},
	{15 ,	4170},
	{16 ,	4160},
	{17 ,	4150},
	{18 ,	4139},
	{19 ,	4129},
	{20 ,	4118},
	{21 ,	4108},
	{22 ,	4097},
	{23 ,	4089},
	{24 ,	4079},
	{25 ,	4069},
	{26 ,	4059},
	{27 ,	4050},
	{28 ,	4041},
	{29 ,	4032},
	{30 ,	4022},
	{31 ,	4013},
	{32 ,	4003},
	{33 ,	3994},
	{34 ,	3986},
	{35 ,	3978},
	{36 ,	3970},
	{37 ,	3962},
	{38 ,	3954},
	{39 ,	3944},
	{40 ,	3936},
	{41 ,	3926},
	{42 ,	3915},
	{43 ,	3903},
	{44 ,	3893},
	{45 ,	3884},
	{46 ,	3876},
	{47 ,	3870},
	{48 ,	3863},
	{49 ,	3858},
	{50 ,	3852},
	{51 ,	3847},
	{52 ,	3842},
	{53 ,	3839},
	{54 ,	3835},
	{55 ,	3829},
	{56 ,	3826},
	{57 ,	3821},
	{58 ,	3817},
	{59 ,	3814},
	{60 ,	3811},
	{61 ,	3807},
	{62 ,	3803},
	{63 ,	3799},
	{64 ,	3796},
	{65 ,	3793},
	{66 ,	3791},
	{67 ,	3788},
	{68 ,	3785},
	{69 ,	3781},
	{70 ,	3778},
	{71 ,	3770},
	{72 ,	3762},
	{73 ,	3758},
	{74 ,	3753},
	{75 ,	3748},
	{76 ,	3743},
	{77 ,	3738},
	{78 ,	3735},
	{79 ,	3731},
	{80 ,	3727},
	{81 ,	3724},
	{82 ,	3720},
	{83 ,	3716},
	{84 ,	3710},
	{85 ,	3704},
	{86 ,	3698},
	{87 ,	3690},
	{88 ,	3682},
	{89 ,	3679},
	{90 ,	3677},
	{91 ,	3676},
	{92 ,	3675},
	{93 ,	3673},
	{94 ,	3671},
	{95 ,	3665},
	{96 ,	3642},
	{97 ,	3590},
	{98 ,	3530},
	{99 ,	3460},
	{100 ,	3399}
};

/* battery profile for actual temperature. The size should be the same as T1, T2 and T3*/
BATTERY_PROFILE_STRUCT battery_profile_temperature[] = {
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0}
};

/* ============================================================*/
/* <Rbat, Battery_Voltage> Table*/
/* ============================================================*/
/* T0 -10C*/
R_PROFILE_STRUCT r_profile_t0[] = {
	{1760 , 4349},
	{1760 ,	4328},
	{1765 ,	4311},
	{1758 ,	4296},
	{1743 ,	4284},
	{1718 ,	4271},
	{1698 ,	4257},
	{1680 ,	4245},
	{1663 ,	4233},
	{1638 ,	4221},
	{1620 ,	4210},
	{1603 ,	4199},
	{1580 ,	4187},
	{1573 ,	4177},
	{1563 ,	4165},
	{1560 ,	4154},
	{1535 ,	4143},
	{1535 ,	4132},
	{1523 ,	4121},
	{1498 ,	4110},
	{1475 ,	4100},
	{1458 ,	4095},
	{1460 ,	4085},
	{1455 ,	4079},
	{1448 ,	4066},
	{1445 ,	4049},
	{1440 ,	4031},
	{1428 ,	4013},
	{1410 ,	3996},
	{1398 ,	3981},
	{1383 ,	3970},
	{1405 ,	3960},
	{1405 ,	3951},
	{1398 ,	3942},
	{1403 ,	3936},
	{1403 ,	3930},
	{1403 ,	3925},
	{1405 ,	3920},
	{1400 ,	3914},
	{1390 ,	3906},
	{1393 ,	3899},
	{1393 ,	3891},
	{1393 ,	3884},
	{1390 ,	3877},
	{1390 ,	3871},
	{1393 ,	3866},
	{1395 ,	3859},
	{1400 ,	3855},
	{1400 ,	3851},
	{1403 ,	3846},
	{1393 ,	3841},
	{1383 ,	3833},
	{1380 ,	3828},
	{1360 ,	3823},
	{1395 ,	3820},
	{1385 ,	3815},
	{1410 ,	3812},
	{1398 ,	3808},
	{1405 ,	3805},
	{1423 ,	3801},
	{1425 ,	3798},
	{1438 ,	3796},
	{1440 ,	3793},
	{1448 ,	3791},
	{1455 ,	3789},
	{1455 ,	3787},
	{1460 ,	3785},
	{1468 ,	3783},
	{1478 ,	3781},
	{1488 ,	3780},
	{1495 ,	3777},
	{1495 ,	3775},
	{1483 ,	3773},
	{1478 ,	3770},
	{1480 ,	3767},
	{1488 ,	3765},
	{1480 ,	3761},
	{1508 ,	3757},
	{1573 ,	3754},
	{1615 ,	3751},
	{1630 ,	3747},
	{1630 ,	3742},
	{1643 ,	3739},
	{1660 ,	3734},
	{1675 ,	3729},
	{1698 ,	3724},
	{1700 ,	3721},
	{1748 ,	3717},
	{1768 ,	3712},
	{1785 ,	3708},
	{1820 ,	3705},
	{1860 ,	3701},
	{1908 ,	3697},
	{1960 ,	3692},
	{2063 ,	3684},
	{2183 ,	3674},
	{2275 ,	3648},
	{2360 ,	3593},
	{2448 ,	3543},
	{2530 ,	3493},
	{2633 ,	3409}
};

/* T1 0C*/
R_PROFILE_STRUCT r_profile_t1[] = {
	{1030 , 4345},
	{1030 ,	4328},
	{1028 ,	4312},
	{1023 ,	4297},
	{1023 ,	4286},
	{1020 ,	4274},
	{1013 ,	4262},
	{1005 ,	4251},
	{993 ,	4238},
	{988 ,	4228},
	{980 ,	4216},
	{973 ,	4205},
	{970 ,	4196},
	{963 ,	4185},
	{958 ,	4175},
	{953 ,	4164},
	{945 ,	4153},
	{948 ,	4144},
	{943 ,	4134},
	{935 ,	4123},
	{928 ,	4112},
	{925 ,	4103},
	{920 ,	4094},
	{920 ,	4087},
	{928 ,	4081},
	{928 ,	4074},
	{915 ,	4050},
	{900 ,	4032},
	{888 ,	4015},
	{878 ,	3997},
	{873 ,	3984},
	{875 ,	3974},
	{870 ,	3964},
	{865 ,	3955},
	{865 ,	3948},
	{868 ,	3941},
	{863 ,	3934},
	{863 ,	3927},
	{855 ,	3920},
	{853 ,	3914},
	{850 ,	3906},
	{850 ,	3899},
	{848 ,	3891},
	{845 ,	3884},
	{843 ,	3877},
	{848 ,	3871},
	{848 ,	3865},
	{848 ,	3858},
	{848 ,	3853},
	{845 ,	3847},
	{848 ,	3842},
	{848 ,	3837},
	{845 ,	3832},
	{848 ,	3827},
	{850 ,	3823},
	{858 ,	3819},
	{860 ,	3815},
	{865 ,	3811},
	{868 ,	3808},
	{875 ,	3805},
	{875 ,	3801},
	{880 ,	3798},
	{883 ,	3795},
	{888 ,	3792},
	{888 ,	3789},
	{890 ,	3787},
	{898 ,	3785},
	{900 ,	3783},
	{905 ,	3781},
	{913 ,	3780},
	{915 ,	3778},
	{920 ,	3776},
	{925 ,	3775},
	{933 ,	3773},
	{935 ,	3770},
	{948 ,	3768},
	{958 ,	3762},
	{965 ,	3760},
	{978 ,	3756},
	{990 ,	3753},
	{995 ,	3748},
	{1010 ,	3744},
	{1023 ,	3739},
	{1040 ,	3734},
	{1063 ,	3730},
	{1080 ,	3723},
	{1103 ,	3716},
	{1123 ,	3709},
	{1150 ,	3704},
	{1183 ,	3699},
	{1223 ,	3696},
	{1258 ,	3693},
	{1308 ,	3689},
	{1373 ,	3686},
	{1443 ,	3681},
	{1518 ,	3671},
	{1595 ,	3640},
	{1688 ,	3591},
	{1788 ,	3536},
	{1905 ,	3490},
	{2048 ,	3400}
};

/* T2 25C*/
R_PROFILE_STRUCT r_profile_t2[] = {
	{226 ,	4338},
	{226 ,	4325},
	{224 ,	4313},
	{223 ,	4301},
	{223 ,	4290},
	{219 ,	4279},
	{217 ,	4268},
	{216 ,	4257},
	{217 ,	4246},
	{216 ,	4235},
	{215 ,	4224},
	{218 ,	4213},
	{216 ,	4202},
	{216 ,	4192},
	{215 ,	4181},
	{212 ,	4171},
	{212 ,	4161},
	{215 ,	4150},
	{215 ,	4140},
	{216 ,	4129},
	{215 ,	4119},
	{216 ,	4109},
	{218 ,	4099},
	{220 ,	4089},
	{223 ,	4082},
	{231 ,	4076},
	{239 ,	4072},
	{237 ,	4063},
	{229 ,	4048},
	{224 ,	4029},
	{223 ,	4013},
	{223 ,	4001},
	{225 ,	3991},
	{225 ,	3983},
	{227 ,	3978},
	{231 ,	3974},
	{234 ,	3969},
	{235 ,	3964},
	{233 ,	3957},
	{231 ,	3949},
	{229 ,	3940},
	{226 ,	3930},
	{222 ,	3919},
	{216 ,	3908},
	{211 ,	3897},
	{208 ,	3889},
	{206 ,	3881},
	{205 ,	3874},
	{204 ,	3868},
	{205 ,	3862},
	{204 ,	3856},
	{202 ,	3851},
	{201 ,	3846},
	{203 ,	3841},
	{203 ,	3837},
	{201 ,	3833},
	{199 ,	3828},
	{200 ,	3824},
	{197 ,	3821},
	{201 ,	3817},
	{201 ,	3813},
	{203 ,	3810},
	{204 ,	3807},
	{206 ,	3804},
	{209 ,	3798},
	{211 ,	3795},
	{213 ,	3792},
	{213 ,	3789},
	{214 ,	3787},
	{216 ,	3784},
	{216 ,	3782},
	{217 ,	3779},
	{217 ,	3776},
	{216 ,	3773},
	{216 ,	3770},
	{215 ,	3766},
	{215 ,	3762},
	{214 ,	3758},
	{213 ,	3754},
	{215 ,	3751},
	{218 ,	3748},
	{221 ,	3745},
	{222 ,	3740},
	{221 ,	3734},
	{221 ,	3728},
	{221 ,	3722},
	{221 ,	3716},
	{221 ,	3708},
	{220 ,	3700},
	{220 ,	3697},
	{221 ,	3696},
	{222 ,	3695},
	{226 ,	3693},
	{230 ,	3692},
	{236 ,	3688},
	{239 ,	3640},
	{239 ,	3605},
	{246 ,	3580},
	{260 ,	3540},
	{280 ,	3477},
	{316 ,	3378}
};

/* T3 50C*/
R_PROFILE_STRUCT r_profile_t3[] = {
	{120 ,	4335},
	{120 ,	4322},
	{120 ,	4311},
	{120 ,	4300},
	{123 ,	4289},
	{120 ,	4277},
	{128 ,	4268},
	{123 ,	4257},
	{123 ,	4248},
	{120 ,	4235},
	{125 ,	4225},
	{123 ,	4213},
	{123 ,	4203},
	{125 ,	4193},
	{123 ,	4181},
	{123 ,	4170},
	{125 ,	4160},
	{125 ,	4150},
	{125 ,	4139},
	{125 ,	4129},
	{128 ,	4118},
	{125 ,	4108},
	{123 ,	4097},
	{128 ,	4089},
	{128 ,	4079},
	{128 ,	4069},
	{125 ,	4059},
	{130 ,	4050},
	{133 ,	4041},
	{133 ,	4032},
	{133 ,	4022},
	{133 ,	4013},
	{130 ,	4003},
	{133 ,	3994},
	{135 ,	3986},
	{135 ,	3978},
	{140 ,	3970},
	{140 ,	3962},
	{143 ,	3954},
	{140 ,	3944},
	{143 ,	3936},
	{138 ,	3926},
	{130 ,	3915},
	{128 ,	3903},
	{125 ,	3893},
	{123 ,	3884},
	{123 ,	3876},
	{125 ,	3870},
	{120 ,	3863},
	{123 ,	3858},
	{120 ,	3852},
	{123 ,	3847},
	{123 ,	3842},
	{128 ,	3839},
	{128 ,	3835},
	{120 ,	3829},
	{125 ,	3826},
	{123 ,	3821},
	{125 ,	3817},
	{128 ,	3814},
	{130 ,	3811},
	{128 ,	3807},
	{125 ,	3803},
	{125 ,	3799},
	{128 ,	3796},
	{128 ,	3793},
	{130 ,	3791},
	{130 ,	3788},
	{133 ,	3785},
	{130 ,	3781},
	{133 ,	3778},
	{125 ,	3770},
	{123 ,	3762},
	{125 ,	3758},
	{123 ,	3753},
	{123 ,	3748},
	{123 ,	3743},
	{123 ,	3738},
	{125 ,	3735},
	{125 ,	3731},
	{125 ,	3727},
	{125 ,	3724},
	{125 ,	3720},
	{128 ,	3716},
	{128 ,	3710},
	{123 ,	3704},
	{125 ,	3698},
	{128 ,	3690},
	{125 ,	3682},
	{128 ,	3679},
	{125 ,	3677},
	{128 ,	3676},
	{128 ,	3675},
	{130 ,	3673},
	{135 ,	3671},
	{138 ,	3665},
	{135 ,	3642},
	{140 ,	3590},
	{143 ,	3530},
	{148 ,	3460},
	{173 ,	3399}
};

/* r-table profile for actual temperature. The size should be the same as T1, T2 and T3*/
R_PROFILE_STRUCT r_profile_temperature[] = {
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0}
};

/* ============================================================*/
/* function prototype*/
/* ============================================================*/
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUCT_P fgauge_get_profile(unsigned int temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUCT_P fgauge_get_profile_r_table(unsigned int temperature);

#endif
