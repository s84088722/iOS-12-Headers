//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface CKOperationGroupSystemImposedInfo : NSObject <NSSecureCoding>
{
    NSDictionary *_networkServiceTypePerConfig;
    long long _expectedSendSize;
    long long _expectedReceiveSize;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long expectedReceiveSize; // @synthesize expectedReceiveSize=_expectedReceiveSize;
@property(nonatomic) long long expectedSendSize; // @synthesize expectedSendSize=_expectedSendSize;
@property(retain, nonatomic) NSDictionary *networkServiceTypePerConfig; // @synthesize networkServiceTypePerConfig=_networkServiceTypePerConfig;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

