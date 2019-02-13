//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <coreroutine/NSCopying-Protocol.h>
#import <coreroutine/NSSecureCoding-Protocol.h>
#import <coreroutine/RTDaemonClientRegistrarProtocol-Protocol.h>

@class NSString;

@interface RTDaemonClientRegistrar : NSObject <NSSecureCoding, RTDaemonClientRegistrarProtocol, NSCopying>
{
}

+ (_Bool)supportsSecureCoding;
- (_Bool)registered;
- (_Bool)invocationsPending;
- (long long)countOfPendingInvocations;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

