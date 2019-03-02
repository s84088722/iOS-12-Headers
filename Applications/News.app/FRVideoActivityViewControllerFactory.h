//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NUVideoActivityViewControllerFactory-Protocol.h"

@class FRAnalyticsReferral, NSString;
@protocol FRFeldsparContext;

@interface FRVideoActivityViewControllerFactory : NSObject <NUVideoActivityViewControllerFactory>
{
    FRAnalyticsReferral *_referral;
    long long _feedType;
    long long _groupType;
    long long _shareLocation;
    id <FRFeldsparContext> _feldsparContext;
}

@property(readonly, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
@property(readonly, nonatomic) long long shareLocation; // @synthesize shareLocation=_shareLocation;
@property(readonly, nonatomic) long long groupType; // @synthesize groupType=_groupType;
@property(readonly, nonatomic) long long feedType; // @synthesize feedType=_feedType;
@property(readonly, nonatomic) FRAnalyticsReferral *referral; // @synthesize referral=_referral;
- (void).cxx_destruct;
- (id)activityViewControllerForVideoItem:(id)arg1 presentingViewController:(id)arg2 articleViewingSessionID:(id)arg3 URLHandler:(id)arg4;
- (id)initWithReferral:(id)arg1 feedType:(long long)arg2 groupType:(long long)arg3 shareLocation:(long long)arg4 feldsparContext:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
