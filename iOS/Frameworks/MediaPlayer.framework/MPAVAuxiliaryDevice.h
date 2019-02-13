//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MPAVAuxiliaryDevice : NSObject
{
    _Bool _playing;
    NSString *_uniqueID;
    NSString *_productName;
    NSString *_deviceName;
    NSString *_modelIdentifier;
}

+ (id)otherConnectedDevicesFromRouteDescription:(id)arg1;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(readonly, nonatomic) NSString *modelIdentifier; // @synthesize modelIdentifier=_modelIdentifier;
@property(readonly, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(readonly, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(readonly, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

