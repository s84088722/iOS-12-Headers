//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface MediaSocialStatusPollRequest : NSObject <NSCopying>
{
    NSNumber *_accountIdentifier;
    NSString *_activityIdentifier;
    double _pollingDuration;
    double _pollingInterval;
    long long _postIdentifier;
    NSString *_sourceApplicationIdentifier;
    double _postCreateTime;
}

@property(nonatomic) double postCreateTime; // @synthesize postCreateTime=_postCreateTime;
@property(copy, nonatomic) NSString *sourceApplicationIdentifier; // @synthesize sourceApplicationIdentifier=_sourceApplicationIdentifier;
@property(nonatomic) long long postIdentifier; // @synthesize postIdentifier=_postIdentifier;
@property(nonatomic) double pollingInterval; // @synthesize pollingInterval=_pollingInterval;
@property(nonatomic) double pollingDuration; // @synthesize pollingDuration=_pollingDuration;
@property(copy, nonatomic) NSString *activityIdentifier; // @synthesize activityIdentifier=_activityIdentifier;
@property(copy, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

