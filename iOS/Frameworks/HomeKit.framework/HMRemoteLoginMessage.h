//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSError, NSString;

@interface HMRemoteLoginMessage : HMFObject <NSSecureCoding>
{
    NSString *_sessionID;
    NSError *_error;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithSessionID:(id)arg1;
- (id)initNewMessage;

@end

