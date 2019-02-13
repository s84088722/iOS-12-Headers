//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HMFoundation/NSCopying-Protocol.h>
#import <HMFoundation/NSMutableCopying-Protocol.h>

@class HMFActivity, HMFMessageDestination, HMFMessageInternal, HMFMessageTransport, NSDictionary, NSString, NSUUID;

@interface HMFMessage : HMFObject <NSCopying, NSMutableCopying>
{
    HMFMessageInternal *_internal;
}

+ (id)shortDescription;
+ (id)messageWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4;
+ (id)messageWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3;
+ (id)activityNameWithMessageName:(id)arg1;
+ (id)messageWithMessage:(id)arg1 messagePayload:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
+ (id)messageWithMessage:(id)arg1 messagePayload:(id)arg2;
+ (id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3;
+ (id)messageWithName:(id)arg1 messagePayload:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
+ (id)messageWithName:(id)arg1 messagePayload:(id)arg2;
@property(readonly, nonatomic) HMFMessageInternal *internal; // @synthesize internal=_internal;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) CDUnknownBlockType responseHandler;
@property(copy, nonatomic) NSDictionary *messagePayload;
@property(readonly, copy, nonatomic) NSDictionary *headers;
@property(readonly, copy, nonatomic) NSDictionary *userInfo;
@property(readonly, nonatomic) HMFActivity *activity;
@property(readonly, nonatomic) __weak HMFMessageTransport *transport;
@property(retain, nonatomic) HMFMessageDestination *destination;
@property(readonly, nonatomic) long long qualityOfService;
@property(readonly, copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSUUID *identifier;
- (id)description;
- (id)debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (void)__initWithInternalMessage:(id)arg1;
- (id)initWithInternalMessage:(id)arg1;
- (id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 userInfo:(id)arg4 headers:(id)arg5 payload:(id)arg6;
- (id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4;
- (id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3;
- (id)init;
- (id)initWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (id)arrayOfDateComponentsForKey:(id)arg1;
- (id)predicateForKey:(id)arg1;
- (id)locationForKey:(id)arg1;
- (id)calendarForKey:(id)arg1;
- (id)errorForKey:(id)arg1;
- (id)dateComponentsForKey:(id)arg1;
- (id)timeZoneForKey:(id)arg1;
- (id)nullForKey:(id)arg1;
- (id)dateForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (_Bool)boolForKey:(id)arg1 keyPresent:(_Bool *)arg2;
- (_Bool)boolForKey:(id)arg1;
- (id)numberForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)uuidForKey:(id)arg1;

@end

