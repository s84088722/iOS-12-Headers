//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDCollectedSensorDatum-Protocol.h>

@class NSData, NSDateInterval, NSString, NSUUID;

@interface HDDataCollectorSensorDatum : NSObject <HDCollectedSensorDatum>
{
    NSUUID *_datumIdentifier;
    NSDateInterval *_dateInterval;
    NSData *_resumeContext;
    CDUnknownBlockType _resumeContextProvider;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) CDUnknownBlockType resumeContextProvider; // @synthesize resumeContextProvider=_resumeContextProvider;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 resumeContextProvider:(CDUnknownBlockType)arg3;
- (id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 resumeContext:(id)arg3;
@property(readonly, copy, nonatomic) NSData *resumeContext;
@property(readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property(readonly, copy, nonatomic) NSUUID *datumIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

