//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>

@class NSDate, NSUUID;

@interface CMSwimData : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long fRecordId;
    NSUUID *fSourceId;
    NSUUID *fSessionId;
    NSDate *fStartDate;
    NSDate *fEndDate;
    unsigned long long fStrokeCount;
    double fDistance;
    double fAvgPace;
    unsigned long long fLapCount;
    long long fStrokeType;
    unsigned long long fSegment;
}

+ (unsigned long long)maxSwimDataEntries;
+ (id)strokeTypeName:(long long)arg1;
+ (_Bool)supportsSecureCoding;
- (id)description;
@property(readonly, nonatomic) unsigned long long segment;
@property(readonly, nonatomic) long long strokeType;
@property(readonly, nonatomic) unsigned long long lapCount;
@property(readonly, nonatomic) double avgPace;
@property(readonly, nonatomic) double distance;
@property(readonly, nonatomic) unsigned long long strokeCount;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly, nonatomic) NSUUID *sessionId;
@property(readonly, nonatomic) NSUUID *sourceId;
@property(readonly, nonatomic) unsigned long long recordId;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithSwimEntry:(const struct CLSwimEntry *)arg1;
- (id)initWithSessionId:(id)arg1;
- (id)initWithRecordId:(unsigned long long)arg1 sourceId:(id)arg2 sessionId:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 strokeCount:(unsigned long long)arg6 distance:(double)arg7 avgPace:(double)arg8 lapCount:(unsigned long long)arg9 strokeType:(long long)arg10 segment:(unsigned long long)arg11;
- (void)convertToSwimEntry:(struct CLSwimEntry *)arg1;

@end

