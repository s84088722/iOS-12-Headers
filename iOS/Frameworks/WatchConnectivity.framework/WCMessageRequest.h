//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchConnectivity/WCMessage.h>

#import <WatchConnectivity/NSSecureCoding-Protocol.h>

@interface WCMessageRequest : WCMessage <NSSecureCoding>
{
    _Bool _expectsResponse;
}

+ (_Bool)supportsSecureCoding;
@property _Bool expectsResponse; // @synthesize expectsResponse=_expectsResponse;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithPairingID:(id)arg1 identifier:(id)arg2 data:(id)arg3 dictionaryMessage:(_Bool)arg4 expectsResponse:(_Bool)arg5;

@end

