//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSWelcomeDataManagerType-Protocol.h"

@class FRFeedCollectionViewController;
@protocol FRFeldsparContext, TSWelcomeDataManagerTypeDelegate;

@interface FROnboardingDataManager : NSObject <TSWelcomeDataManagerType>
{
    id <TSWelcomeDataManagerTypeDelegate> _delegate;
    id <FRFeldsparContext> _feldsparContext;
    FRFeedCollectionViewController *_feedCollectionViewController;
}

@property(retain, nonatomic) FRFeedCollectionViewController *feedCollectionViewController; // @synthesize feedCollectionViewController=_feedCollectionViewController;
@property(retain, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
@property(retain, nonatomic) id <TSWelcomeDataManagerTypeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)beginLoadingFeed;
- (void)beginFetchingUserType;
- (void)suspendLoadingFeed;
- (id)initWithFeldsparContext:(id)arg1 feedCollectionViewController:(id)arg2;

@end

