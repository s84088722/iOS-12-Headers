//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/NSCopying-Protocol.h>
#import <CoreKnowledge/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface CKAppInteractionsContext : NSObject <NSCopying, NSSecureCoding>
{
    // Error parsing type: , name: _outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId
    // Error parsing type: , name: numberOfDiscardedDonationsByIntentTypeAndBundleId
}

+ (_Bool)supportsSecureCoding;
- (CDUnknownBlockType).cxx_destruct;
- (void)updateDiscardedDonations:(double)arg1 forIntentType:(id)arg2 andBundleId:(id)arg3;
- (void)incrementNumberOfOutOfAppLaunchBoundaryDonationsForBundleId:(id)arg1 intent:(id)arg2;
- (id)copyWithZone:(void *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init:(id)arg1;
- (id)init;
@property(nonatomic, copy) NSDictionary *numberOfDiscardedDonationsByIntentTypeAndBundleId; // @synthesize numberOfDiscardedDonationsByIntentTypeAndBundleId;
@property(nonatomic, readonly) NSDictionary *outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId;
@property(nonatomic, copy) NSDictionary *_outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId; // @synthesize _outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId;

@end

