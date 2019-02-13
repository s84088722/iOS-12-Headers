//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchFoundation/SFSearchResult.h>

@class ATXAction, ATXActionResponse;

@interface ATXActionSearchResult : SFSearchResult
{
    ATXActionResponse *_actionResponse;
    ATXAction *_atxAction;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)shouldDisplayUpcomingMediaForTesting;
+ (_Bool)shouldDisplayRecentDonationsForTesting;
+ (_Bool)_demoModeEnabled;
+ (id)recentUpcomingMedia;
+ (id)recentDonationsStarting:(id)arg1 end:(id)arg2 number:(unsigned long long)arg3;
+ (id)actionResponseForDeveloperMode;
+ (id)_demoModeActionResponse;
+ (id)searchResultForAction:(id)arg1 actionResponse:(id)arg2;
+ (id)predictedActionSearchResultsWithLimit:(long long)arg1 forBundleIdentifiers:(id)arg2;
@property(readonly, nonatomic) ATXAction *atxAction; // @synthesize atxAction=_atxAction;
@property(retain, nonatomic) ATXActionResponse *actionResponse; // @synthesize actionResponse=_actionResponse;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToActionSearchResult:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)_updateInlineCard;
- (void)setAtxAction:(id)arg1;
- (id)init;

@end

