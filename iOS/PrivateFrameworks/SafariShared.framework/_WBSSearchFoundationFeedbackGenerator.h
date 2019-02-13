//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/_CompletionListRankingObserverFeedbackGenerator-Protocol.h>

@class NSDate, NSMutableArray, NSString, SFRankingFeedback;
@protocol _CompletionListRankingObserverFeedbackGeneratorDelegate;

@interface _WBSSearchFoundationFeedbackGenerator : NSObject <_CompletionListRankingObserverFeedbackGenerator>
{
    NSDate *_rankingStartDate;
    NSMutableArray *_sectionRankingFeedbackObjects;
    NSString *_currentSectionBundleIdentifier;
    NSMutableArray *_currentSectionResultRankingFeedbackObjects;
    SFRankingFeedback *_rankingFeedback;
}

@property(readonly, nonatomic) SFRankingFeedback *rankingFeedback; // @synthesize rankingFeedback=_rankingFeedback;
- (void).cxx_destruct;
- (void)_commitPreviousSectionIfNecessary;
- (void)removeAllSectionsAndItems;
- (void)didAddItem:(id)arg1 hidingOutrankedResults:(id)arg2 hidingDuplicateResults:(id)arg3;
- (void)didBeginSectionWithBundleIdentifier:(id)arg1;
- (void)didEndRanking;
- (void)didBeginRanking;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <_CompletionListRankingObserverFeedbackGeneratorDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

