//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CATTaskResultObject.h"

@class NSDictionary;

@interface CRKFetchLastLoginDateResultObject : CATTaskResultObject
{
    NSDictionary *_lastLoginDatesByAppleID;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *lastLoginDatesByAppleID; // @synthesize lastLoginDatesByAppleID=_lastLoginDatesByAppleID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDatesByAppleID:(id)arg1;

@end

