//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFCharacteristicValueOperationBatching-Protocol.h>
#import <Home/NAIdentifiable-Protocol.h>

@class HFCharacteristicValueSet, HMActionSet, HMCharacteristic, NAFuture, NSError, NSSet;
@protocol HFCharacteristicOperationContextProviding;

@protocol HFCharacteristicValueSource <HFCharacteristicValueOperationBatching, NAIdentifiable>
- (id)cachedValueForCharacteristic:(HMCharacteristic *)arg1;
- (NAFuture *)writeValuesForCharacteristics:(HFCharacteristicValueSet *)arg1;
- (NAFuture *)readValuesForCharacteristicTypes:(NSSet *)arg1 inServices:(NSSet *)arg2;
- (NAFuture *)readValuesForCharacteristics:(NSSet *)arg1;

@optional
@property(readonly, nonatomic) id <HFCharacteristicOperationContextProviding> contextProvider;
- (NSError *)cachedErrorForWriteToCharacteristic:(HMCharacteristic *)arg1;
- (NSError *)cachedErrorForExecutionOfActionSet:(HMActionSet *)arg1;
- (void)executeActionSet:(HMActionSet *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end

