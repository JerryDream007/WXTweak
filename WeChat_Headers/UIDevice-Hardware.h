//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIDevice.h>

@interface UIDevice (Hardware)
+ (int)getSysInfo:(unsigned int)arg1;
+ (id)getSysInfoByName:(char *)arg1;
+ (id)wmcSaveResolutions;
+ (long long)wmcRAMLevel;
+ (long long)wmcCPULevel;
+ (double)availableMemory;
+ (float)wmcSystemVersion;
+ (_Bool)wmcIsSingleCore;
+ (id)wmcGetDeviceType;
+ (long long)getTypeInteger:(id)arg1 withPrefix:(id)arg2;
+ (id)wmcGetPlatformType;
- (int)L3CacheSize;
- (int)L2CacheSize;
- (int)L1DCacheSize;
- (int)L1ICacheSize;
- (int)cacheLine;
- (int)userMemory;
- (int)totalMemory;
- (int)busFrequency;
- (int)cpuFrequency;
- (int)cpuCount;
- (id)platform;
- (id)getIPAddress;
- (id)wmcUniqueGlobalDeviceIdentifier;
- (id)wmcUniqueDeviceIdentifier;
- (id)macaddress;
- (id)QMapImei;
- (id)QMapHardwarePlatform;
@end

