//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRURLRoutable-Protocol.h"
#import "FRUserActivityRoutable-Protocol.h"

@class NSString, TSNewsTabSplitViewNavigator;
@protocol FCNewsAppConfigurationManager, FRFeldsparContext, FRLocalDraftsManager, NFResolver, TSActivityErrorHandlerType, TSBridgedNewsActivityFactoryType;

@interface FRDeeplinkRouter : NSObject <FRUserActivityRoutable, FRURLRoutable>
{
    TSNewsTabSplitViewNavigator *_navigator;
    id <TSBridgedNewsActivityFactoryType> _activityFactory;
    id <TSActivityErrorHandlerType> _activityErrorHandler;
    id <FRFeldsparContext> _feldsparContext;
    id <FCNewsAppConfigurationManager> _appConfigurationManager;
    id <NFResolver> _resolver;
    id <FRLocalDraftsManager> _localDraftsManager;
}

@property(readonly, nonatomic) id <FRLocalDraftsManager> localDraftsManager; // @synthesize localDraftsManager=_localDraftsManager;
@property(readonly, nonatomic) id <NFResolver> resolver; // @synthesize resolver=_resolver;
@property(retain, nonatomic) id <FCNewsAppConfigurationManager> appConfigurationManager; // @synthesize appConfigurationManager=_appConfigurationManager;
@property(readonly, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
@property(readonly, nonatomic) id <TSActivityErrorHandlerType> activityErrorHandler; // @synthesize activityErrorHandler=_activityErrorHandler;
@property(readonly, nonatomic) id <TSBridgedNewsActivityFactoryType> activityFactory; // @synthesize activityFactory=_activityFactory;
@property(readonly, nonatomic) TSNewsTabSplitViewNavigator *navigator; // @synthesize navigator=_navigator;
- (void).cxx_destruct;
- (id)_extractWidgetEngagementDestructivelyFromReferralURL:(id)arg1;
- (void)handleNewsTagURL:(id)arg1 sourceApplication:(id)arg2 referral:(id)arg3;
- (void)handleArticleURL:(id)arg1 sourceApplication:(id)arg2 referral:(id)arg3;
- (void)_navigateToArticleWithURL:(id)arg1 sourceApplication:(id)arg2 referral:(id)arg3 exploreArticleID:(id)arg4;
- (void)_navigateToArticleWithURL:(id)arg1 sourceApplication:(id)arg2 referral:(id)arg3;
- (void)_adReferralPropertiesFromURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleNotificationsURL:(id)arg1 fromReferral:(id)arg2;
- (void)_presentNotificationsControllerforTag:(id)arg1 fromReferral:(id)arg2;
- (void)handleWidgetPlaylistURL:(id)arg1 referral:(id)arg2;
- (void)handleSpotlightURL:(id)arg1 referral:(id)arg2 sourceApplication:(id)arg3;
- (void)handleForYouURL:(id)arg1 referral:(id)arg2;
- (void)handleAuthenticationCallbackURL:(id)arg1;
- (void)handleSubscriptionURL:(id)arg1 fromReferral:(id)arg2;
- (void)handlePreviewURL:(id)arg1;
- (void)handleInterstitialPreviewURL:(id)arg1;
- (id)referralForOpenURL:(id)arg1 sourceApplication:(id)arg2;
- (_Bool)handleURL:(id)arg1 sourceApplication:(id)arg2 fromReferral:(id)arg3;
- (_Bool)handleOpenURL:(id)arg1 sourceApplication:(id)arg2;
- (_Bool)canHandleURL:(id)arg1;
- (_Bool)continueUserActivity:(id)arg1;
- (_Bool)canContinueUserActivityWithType:(id)arg1;
- (id)initWithFeldsparContext:(id)arg1 resolver:(id)arg2 navigator:(id)arg3 activityFactory:(id)arg4 activityErrorHandler:(id)arg5 localDraftsManager:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
