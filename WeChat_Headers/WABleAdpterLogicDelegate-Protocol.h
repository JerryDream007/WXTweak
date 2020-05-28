//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CBCentralManager, CBCharacteristic, CBService, NSArray, NSData, NSNumber, NSString, WABlueToothDevice;

@protocol WABleAdpterLogicDelegate <NSObject>
- (void)onBleDeviceDidReadRSSI:(NSNumber *)arg1 device:(WABlueToothDevice *)arg2 errorCode:(int)arg3 errMsg:(NSString *)arg4;
- (void)onBleDeviceDidUpdateValueInCharacteristics:(CBCharacteristic *)arg1 service:(CBService *)arg2 device:(WABlueToothDevice *)arg3 value:(NSData *)arg4 errorCode:(int)arg5 errMsg:(NSString *)arg6;
- (void)onBleDeviceDidSetNotifyToCharacteristics:(CBCharacteristic *)arg1 service:(CBService *)arg2 device:(WABlueToothDevice *)arg3 errorCode:(int)arg4 errMsg:(NSString *)arg5;
- (void)onBleDeviceDidWriteValueToCharacteristics:(CBCharacteristic *)arg1 service:(CBService *)arg2 device:(WABlueToothDevice *)arg3 errorCode:(int)arg4 errMsg:(NSString *)arg5;
- (void)onBleDeviceDiscoverCharacteristicsInService:(CBService *)arg1 device:(WABlueToothDevice *)arg2 errorCode:(int)arg3 errMsg:(NSString *)arg4;
- (void)onBleDeviceDiscoverServices:(NSArray *)arg1 device:(WABlueToothDevice *)arg2 errorCode:(int)arg3 errMsg:(NSString *)arg4;
- (void)onBleDeviceDidDisConnentedError:(WABlueToothDevice *)arg1 errorCode:(int)arg2 errMsg:(NSString *)arg3;
- (void)onBleDeviceDisConnected:(WABlueToothDevice *)arg1 errorCode:(int)arg2 errMsg:(NSString *)arg3;
- (void)onBleDeviceConnected:(WABlueToothDevice *)arg1 errorCode:(int)arg2 errMsg:(NSString *)arg3;
- (void)onBleDeviceFound:(WABlueToothDevice *)arg1;
- (void)onBleStateChanged:(CBCentralManager *)arg1;
@end
