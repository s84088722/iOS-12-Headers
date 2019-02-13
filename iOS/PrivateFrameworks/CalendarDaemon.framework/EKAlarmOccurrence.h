//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADObjectID, NSDate, NSString, NSTimeZone, NSURL;

@interface EKAlarmOccurrence : NSObject
{
    CADObjectID *_alarmID;
    CADObjectID *_ownerID;
    NSDate *_ownerDate;
    NSTimeZone *_ownerTimeZone;
    NSURL *_ownerURI;
    NSDate *_fireDate;
    NSString *_externalID;
    NSDate *_acknowledgedDate;
}

+ (id)alarmOccurrenceWithAlarmID:(id)arg1 ownerID:(id)arg2 ownerDate:(id)arg3 ownerTimeZone:(id)arg4 ownerURI:(id)arg5 fireDate:(id)arg6 externalID:(id)arg7 acknowledgedDate:(id)arg8;
@property(readonly, nonatomic) NSDate *acknowledgedDate; // @synthesize acknowledgedDate=_acknowledgedDate;
@property(readonly, nonatomic) NSString *externalID; // @synthesize externalID=_externalID;
@property(readonly, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
@property(readonly, nonatomic) NSURL *ownerURI; // @synthesize ownerURI=_ownerURI;
@property(readonly, nonatomic) NSTimeZone *ownerTimeZone; // @synthesize ownerTimeZone=_ownerTimeZone;
@property(readonly, nonatomic) NSDate *ownerDate; // @synthesize ownerDate=_ownerDate;
@property(readonly, nonatomic) CADObjectID *ownerID; // @synthesize ownerID=_ownerID;
@property(readonly, nonatomic) CADObjectID *alarmID; // @synthesize alarmID=_alarmID;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAlarmID:(id)arg1 ownerID:(id)arg2 ownerDate:(id)arg3 ownerTimeZone:(id)arg4 ownerURI:(id)arg5 fireDate:(id)arg6 externalID:(id)arg7 acknowledgedDate:(id)arg8;

@end

