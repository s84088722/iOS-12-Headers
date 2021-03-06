/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:59:51 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/CoreGPSTest.framework/CoreGPSTest
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _long {
	char* __data_;
	unsigned long long __size_;
	unsigned long long __cap_;
} long;

typedef struct {
	unsigned char __size_;
} SCD_Struct_Gp1;

typedef struct _raw {
	unsigned long long __words[3];
} raw;

typedef struct _short {
	char __data_[23];
	SCD_Struct_Gp1 ;
} short;

typedef struct _rep {
	/*function pointer*/void* ;
	long __l;
	short __s;
	const aw) __r;
} rep;

typedef struct _compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > {
	const ep __value_;
} compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >;

typedef struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {
	compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > __r_;
} basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >;

typedef struct Options {
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > ftdiBasePort;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > gnssDeviceLibraryName;
	unsigned logLevel;
	unsigned long long logMask;
	BOOL clearNvStore;
	BOOL doPeriodic;
	BOOL doCw;
	BOOL doModulated;
	BOOL doPowerMode;
	BOOL doHostWakeGpio;
	BOOL doTimeMarkGpio;
	BOOL doCommPing;
	BOOL doCommLoopback;
	BOOL doFirmwareLoad;
	int periodicDurationSec;
	int cwDurationSec;
	int cwBandwidthHz;
	int integrationTimeMilliseconds;
	unsigned char band;
	Subband subband;
	int prn;
	i) fcn;
	int modulatedDurationSec;
	int powerMode;
	int hostWakeGpioTimeoutMs;
	int timeMarkGpioTimeoutMs;
	int commPingTimeoutMs;
	int commLoopbackNumBytes;
} Options;

typedef struct {
	unsigned field1;
	unsigned field2;
	int field3;
} SCD_Struct_Gp8;

