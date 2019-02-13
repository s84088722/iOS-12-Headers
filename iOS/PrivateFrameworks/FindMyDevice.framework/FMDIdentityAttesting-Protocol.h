//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FindMyDevice/NSObject-Protocol.h>
#import <FindMyDevice/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@protocol FMDIdentityAttesting <NSObject, NSSecureCoding>
@property(readonly, nonatomic) NSString *sessionIdentifier;
@property(readonly, nonatomic) NSData *signature;
@property(readonly, nonatomic) NSData *attestation;
@end

