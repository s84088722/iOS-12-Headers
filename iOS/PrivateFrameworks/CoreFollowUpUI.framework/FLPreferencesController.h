//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreFollowUpUI/FLSpecifierTapHandlerDelegate-Protocol.h>

@class FLPreferencesFollowUpItemListViewController, NSSet, NSString, PSListController;
@protocol FLViewModel;

@interface FLPreferencesController : NSObject <FLSpecifierTapHandlerDelegate>
{
    id <FLViewModel> _topViewModel;
    FLPreferencesFollowUpItemListViewController *_spyglassController;
    NSSet *_spyglassWhitelist;
    _Bool _activityIndicatorActive;
    PSListController *_listViewController;
    CDUnknownBlockType _itemChangeObserver;
}

@property(copy, nonatomic) CDUnknownBlockType itemChangeObserver; // @synthesize itemChangeObserver=_itemChangeObserver;
@property(nonatomic) __weak PSListController *listViewController; // @synthesize listViewController=_listViewController;
- (void).cxx_destruct;
- (void)stopSpinnerForSpecifier:(id)arg1;
- (void)startSpinnerForSpecifier:(id)arg1;
- (void)preflightNetworkConnectivityForHandler:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)startPresentingForHandler:(id)arg1 withRemoteController:(id)arg2;
- (void)_zeroActionFailure:(id)arg1;
- (void)_presentSpecifier:(id)arg1;
- (void)_handleEmptyRefreshResult:(id)arg1;
- (void)_refreshItemsAndPresentDetailForSpecifier:(id)arg1;
- (void)loadSpecifier:(id)arg1;
- (id)spyglassSpecifiers;
- (void)_updateSpecifier:(id)arg1 withCommonPropertiesForGroup:(id)arg2;
- (id)_urlBasedSpecifierWithName:(id)arg1;
- (id)_deferredLoadSpecifierWithName:(id)arg1;
- (id)_specifierForGroup:(id)arg1;
- (id)_specifierForItem:(id)arg1 group:(id)arg2;
- (id)topLevelSpecifiers;
- (id)initWithViewModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

