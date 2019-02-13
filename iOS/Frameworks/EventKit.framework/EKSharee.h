//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKObject.h>

#import <EventKit/EKIdentityProtocol-Protocol.h>
#import <EventKit/NSCopying-Protocol.h>

@class EKCalendar, NSPredicate, NSString;

@interface EKSharee : EKObject <NSCopying, EKIdentityProtocol>
{
}

+ (id)statusStringFromEnum:(unsigned long long)arg1;
+ (unsigned long long)statusEnumFromString:(id)arg1;
+ (int)_calShareeAccessLevelFromEKShareeAccessLevel:(unsigned long long)arg1;
+ (unsigned long long)_ekShareeAccessLevelFromCalShareeAccessLevel:(int)arg1;
+ (int)_calShareeStatusFromEKShareeStatus:(unsigned long long)arg1;
+ (unsigned long long)_ekShareeStatusFromCalShareeStatus:(int)arg1;
+ (id)_urlForEmailAddress:(id)arg1 andPhoneNumber:(id)arg2;
+ (id)shareeWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 externalID:(id)arg4;
+ (id)shareeWithName:(id)arg1 url:(id)arg2;
+ (id)shareeWithName:(id)arg1 phoneNumber:(id)arg2;
+ (id)shareeWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3;
+ (id)shareeWithName:(id)arg1 emailAddress:(id)arg2;
+ (Class)frozenClass;
@property(readonly, nonatomic) NSPredicate *contactPredicate;
@property(nonatomic) unsigned long long shareeAccessLevel;
- (void)setShareeAccessLevelRaw:(int)arg1;
- (int)shareeAccessLevelRaw;
@property(nonatomic) unsigned long long shareeStatus;
- (void)setShareeStatusRaw:(int)arg1;
- (int)shareeStatusRaw;
@property(copy, nonatomic) NSString *externalID;
@property(copy, nonatomic) NSString *lastName;
@property(copy, nonatomic) NSString *firstName;
- (void)setPhoneNumber:(id)arg1;
@property(readonly, nonatomic) NSString *phoneNumber;
- (void)setEmailAddress:(id)arg1;
@property(readonly, nonatomic) NSString *emailAddress;
- (id)URL;
@property(copy, nonatomic) NSString *address;
@property(copy, nonatomic) NSString *name;
- (void)setUUID:(id)arg1;
@property(readonly, nonatomic) NSString *UUID;
@property(readonly, nonatomic) EKCalendar *owner;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 url:(id)arg2 externalID:(id)arg3;
- (id)initWithName:(id)arg1 url:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

