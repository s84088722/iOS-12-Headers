//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSDate, NSNumber, NSString;

@interface HAPCharacteristicEvent : HMFObject
{
    NSString *_serverIdentifier;
    NSNumber *_accessoryInstanceID;
    NSNumber *_serviceInstanceID;
    NSNumber *_characteristicInstanceID;
    id _value;
    NSDate *_updateTime;
    NSNumber *_stateNumber;
}

+ (id)eventWithCharacteristic:(id)arg1;
@property(readonly, nonatomic) NSNumber *stateNumber; // @synthesize stateNumber=_stateNumber;
@property(readonly, nonatomic) NSDate *updateTime; // @synthesize updateTime=_updateTime;
@property(readonly, copy, nonatomic) id value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) NSNumber *characteristicInstanceID; // @synthesize characteristicInstanceID=_characteristicInstanceID;
@property(readonly, copy, nonatomic) NSNumber *serviceInstanceID; // @synthesize serviceInstanceID=_serviceInstanceID;
@property(readonly, copy, nonatomic) NSNumber *accessoryInstanceID; // @synthesize accessoryInstanceID=_accessoryInstanceID;
@property(readonly, copy, nonatomic) NSString *serverIdentifier; // @synthesize serverIdentifier=_serverIdentifier;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCharacteristic:(id)arg1;

@end

