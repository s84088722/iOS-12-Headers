//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenTimeUI/STRootGroupSpecifierProvider.h>

#import <ScreenTimeUI/MCProfileConnectionObserver-Protocol.h>

@class NSString, PSSpecifier, UIViewController;

@interface STEnableScreenTimeGroupSpecifierProvider : STRootGroupSpecifierProvider <MCProfileConnectionObserver>
{
    PSSpecifier *_setupScreenTimeSpecifier;
    UIViewController *_rootViewController;
}

+ (id)providerWithCoordinator:(id)arg1 rootViewController:(id)arg2;
@property __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain) PSSpecifier *setupScreenTimeSpecifier; // @synthesize setupScreenTimeSpecifier=_setupScreenTimeSpecifier;
- (void).cxx_destruct;
- (void)saveValuesForModel:(id)arg1;
- (void)setupScreenTime:(id)arg1;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCoordinator:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

