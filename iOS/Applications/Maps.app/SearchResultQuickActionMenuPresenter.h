//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QuickActionMenuPresenter.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSIndexPath, NSString, SearchResultTouchCancellingGesture, UITableView, UITableViewCell;
@protocol SearchResultQuickActionMenuPresenterDelegate;

__attribute__((visibility("hidden")))
@interface SearchResultQuickActionMenuPresenter : QuickActionMenuPresenter <UIGestureRecognizerDelegate>
{
    UITableView *_tableView;
    SearchResultTouchCancellingGesture *_cancellingGesture;
    UITableViewCell *_tableViewCell;
    NSIndexPath *_indexPath;
}

@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak UITableViewCell *tableViewCell; // @synthesize tableViewCell=_tableViewCell;
- (void).cxx_destruct;
- (id)anchorContentView;
- (void)reset;
- (void)actionMenuDidFinish;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)_shouldBeginOrbGestureAtLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (id)initWithPresentingViewController:(id)arg1 inTableView:(id)arg2;
- (id)initWithPresentingViewController:(id)arg1 inView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SearchResultQuickActionMenuPresenterDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

