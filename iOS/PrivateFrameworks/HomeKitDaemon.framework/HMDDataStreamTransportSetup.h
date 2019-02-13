//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class HMDDataStreamTransportCommand, HMDDataStreamTransportTransportType, NSData;

@interface HMDDataStreamTransportSetup : NSObject <NSCopying>
{
    HMDDataStreamTransportCommand *_command;
    HMDDataStreamTransportTransportType *_transportType;
    NSData *_controllerKeySalt;
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSData *controllerKeySalt; // @synthesize controllerKeySalt=_controllerKeySalt;
@property(retain, nonatomic) HMDDataStreamTransportTransportType *transportType; // @synthesize transportType=_transportType;
@property(retain, nonatomic) HMDDataStreamTransportCommand *command; // @synthesize command=_command;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithError:(id *)arg1;
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;
- (id)initWithCommand:(id)arg1 transportType:(id)arg2 controllerKeySalt:(id)arg3;
- (id)init;

@end

