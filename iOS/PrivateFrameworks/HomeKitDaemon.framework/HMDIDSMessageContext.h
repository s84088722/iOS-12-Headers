//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMFMessageDestination, NSDictionary, NSUUID;

@interface HMDIDSMessageContext : HMFObject
{
    NSUUID *_identifier;
    HMFMessageDestination *_destination;
    NSDictionary *_userInfo;
}

@property(readonly, copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly) HMFMessageDestination *destination; // @synthesize destination=_destination;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 destination:(id)arg2 userInfo:(id)arg3;
- (id)init;

@end

