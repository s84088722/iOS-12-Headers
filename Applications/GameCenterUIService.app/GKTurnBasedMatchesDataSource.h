//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterPrivateUI/GKSplittingDataSource.h>

@class GKGame, NSObject;
@protocol GKTurnBasedMatchesDataSourceDelegate;

@interface GKTurnBasedMatchesDataSource : GKSplittingDataSource
{
    NSObject<GKTurnBasedMatchesDataSourceDelegate> *_delegateWeak;
    GKGame *_game;
    SEL _detailPressedAction;
    struct UIEdgeInsets _cellMarginInsets;
}

@property(nonatomic) struct UIEdgeInsets cellMarginInsets; // @synthesize cellMarginInsets=_cellMarginInsets;
@property(nonatomic) SEL detailPressedAction; // @synthesize detailPressedAction=_detailPressedAction;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
- (unsigned long long)numberOfMatches;
- (void)removeItemAtIndexPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)configureCollectionView:(id)arg1;
- (void)collectionViewWillBecomeActive:(id)arg1;
- (void)configureDataSource;
@property(nonatomic) NSObject<GKTurnBasedMatchesDataSourceDelegate> *delegate; // @synthesize delegate=_delegateWeak;
- (void)dealloc;

@end

