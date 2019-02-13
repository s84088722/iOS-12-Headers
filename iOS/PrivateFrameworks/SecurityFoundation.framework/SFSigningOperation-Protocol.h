//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SecurityFoundation/NSCopying-Protocol.h>
#import <SecurityFoundation/NSObject-Protocol.h>
#import <SecurityFoundation/NSSecureCoding-Protocol.h>

@class NSData, _SFKey, _SFKeySpecifier, _SFSignedData;

@protocol SFSigningOperation <NSObject, NSCopying, NSSecureCoding>
@property(readonly, copy, nonatomic) _SFKeySpecifier *signingKeySpecifier;
- (NSData *)verify:(_SFSignedData *)arg1 withKey:(_SFKey *)arg2 error:(id *)arg3;
- (_SFSignedData *)sign:(NSData *)arg1 withKey:(_SFKey *)arg2 error:(id *)arg3;
@end

