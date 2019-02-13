//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VisualVoicemail/VMTelephonyRequest.h>

@class NSString;

@interface VMCarrierStateRequest : VMTelephonyRequest
{
    NSString *_destination;
    long long _identifier;
    NSString *_message;
    NSString *_serviceCenter;
}

+ (id)unarchivedObjectClasses;
+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *serviceCenter; // @synthesize serviceCenter=_serviceCenter;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *destination; // @synthesize destination=_destination;
- (void).cxx_destruct;
- (_Bool)isEqualToStateRequest:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSubscription:(id)arg1 destination:(id)arg2 serviceCenter:(id)arg3;
- (id)initWithSubscription:(id)arg1;

@end

