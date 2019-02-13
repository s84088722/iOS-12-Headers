//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SXAnalyticsReporting-Protocol.h"

@class FCSubscriptionList, FRPersonalizationDataSource, NSString;
@protocol FCHeadlineProviding, FRArticleViewSessionProviding, FRFeedViewExposureIdentifierProviding;

@interface FRFeedVideoAnalyticsReporter : NSObject <SXAnalyticsReporting>
{
    id <FCHeadlineProviding> _headline;
    id <FRFeedViewExposureIdentifierProviding> _feedViewExposureIdentifierProvider;
    id <FRArticleViewSessionProviding> _articleViewSessionProvider;
    FRPersonalizationDataSource *_personalizationDataSource;
    FCSubscriptionList *_subscriptionList;
    NSString *_groupViewExposureID;
}

@property(readonly, copy, nonatomic) NSString *groupViewExposureID; // @synthesize groupViewExposureID=_groupViewExposureID;
@property(readonly, nonatomic) FCSubscriptionList *subscriptionList; // @synthesize subscriptionList=_subscriptionList;
@property(readonly, nonatomic) FRPersonalizationDataSource *personalizationDataSource; // @synthesize personalizationDataSource=_personalizationDataSource;
@property(readonly, nonatomic) id <FRArticleViewSessionProviding> articleViewSessionProvider; // @synthesize articleViewSessionProvider=_articleViewSessionProvider;
@property(readonly, nonatomic) id <FRFeedViewExposureIdentifierProviding> feedViewExposureIdentifierProvider; // @synthesize feedViewExposureIdentifierProvider=_feedViewExposureIdentifierProvider;
@property(readonly, nonatomic) id <FCHeadlineProviding> headline; // @synthesize headline=_headline;
- (void).cxx_destruct;
- (void)reportEvent:(id)arg1;
- (id)initWithHeadline:(id)arg1 articleViewSessionProvider:(id)arg2 feedViewExposureIdentifierProvider:(id)arg3 personalizationDataSource:(id)arg4 subscriptionList:(id)arg5 groupViewExposureID:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

