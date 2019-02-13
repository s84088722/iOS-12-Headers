//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WatchConnectivity/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary;

@interface WCUserInfo : NSObject <NSSecureCoding>
{
    NSData *_userInfoData;
    NSDictionary *_userInfo;
    NSDictionary *_clientUserInfo;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *clientUserInfo; // @synthesize clientUserInfo=_clientUserInfo;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy) NSData *userInfoData; // @synthesize userInfoData=_userInfoData;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)verifyUserInfo;
- (_Bool)updateUserInfoData:(id)arg1 error:(id *)arg2;
- (_Bool)updateUserInfo:(id)arg1 error:(id *)arg2;
- (id)description;

@end

