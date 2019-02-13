//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterPrivateUI/GKDashboardCollectionViewController.h>

@class GKDashboardLeaderboardScoreDataSource, GKDashboardLeaderboardScoreHeaderView, GKLeaderboard;

@interface GKDashboardLeaderboardScoreViewController : GKDashboardCollectionViewController
{
    GKDashboardLeaderboardScoreHeaderView *_headerView;
    GKLeaderboard *_leaderboard;
    GKDashboardLeaderboardScoreDataSource *_friendDataSource;
    GKDashboardLeaderboardScoreDataSource *_globalDataSource;
    long long _timeScope;
}

+ (void)setInitialTimeScope:(long long)arg1;
+ (long long)initialTimeScope;
@property(nonatomic) long long timeScope; // @synthesize timeScope=_timeScope;
@property(retain, nonatomic) GKDashboardLeaderboardScoreDataSource *globalDataSource; // @synthesize globalDataSource=_globalDataSource;
@property(retain, nonatomic) GKDashboardLeaderboardScoreDataSource *friendDataSource; // @synthesize friendDataSource=_friendDataSource;
@property(retain, nonatomic) GKLeaderboard *leaderboard; // @synthesize leaderboard=_leaderboard;
@property(retain, nonatomic) GKDashboardLeaderboardScoreHeaderView *headerView; // @synthesize headerView=_headerView;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)donePressed:(id)arg1;
- (void)timeScopePressed:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)updateColumnLayoutForSize:(struct CGSize)arg1;
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;
- (void)dataUpdated:(_Bool)arg1 withError:(id)arg2;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithGameRecord:(id)arg1 leaderboard:(id)arg2;

@end

