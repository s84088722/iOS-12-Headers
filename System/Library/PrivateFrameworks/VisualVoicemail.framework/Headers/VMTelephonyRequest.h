//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VisualVoicemail/VMSecureObject-Protocol.h>

@class NSString;
@protocol VMTelephonySubscription;

@interface VMTelephonyRequest : NSObject <VMSecureObject>
{
    id <VMTelephonySubscription> _subscription;
}

+ (id)unarchivedObjectFromData:(id)arg1 error:(id *)arg2;
+ (id)unarchivedObjectClasses;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) id <VMTelephonySubscription> subscription; // @synthesize subscription=_subscription;
- (void).cxx_destruct;
- (id)archivedDataWithError:(id *)arg1;
- (_Bool)isEqualToRequest:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSubscription:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) Class superclass;

@end
