//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PSStateRestoration-Protocol.h"

@class NSBundle, NSDictionary, NSMutableArray, NSString, PSRootController, PSSearchEntry, PSSpecifier, UIViewController;
@protocol PSController;

@protocol PSController <PSStateRestoration>
- (void)statusBarWillAnimateByHeight:(double)arg1;
- (void)willBecomeActive;
- (void)willResignActive;
- (id)readPreferenceValue:(PSSpecifier *)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(PSSpecifier *)arg2;
- (void)handleURL:(NSDictionary *)arg1;
- (void)showController:(UIViewController *)arg1 animate:(_Bool)arg2;
- (void)showController:(UIViewController *)arg1;
- (void)didWake;
- (void)didUnlock;
- (void)willUnlock;
- (void)didLock;
- (void)suspend;
- (PSSpecifier *)specifier;
- (void)setSpecifier:(PSSpecifier *)arg1;
- (PSRootController *)rootController;
- (void)setRootController:(PSRootController *)arg1;
- (UIViewController<PSController> *)parentController;
- (void)setParentController:(UIViewController<PSController> *)arg1;

@optional
+ (NSBundle *)searchBundle;
+ (void)formatSearchEntries:(NSMutableArray *)arg1 parent:(PSSearchEntry *)arg2;
+ (void)validateSpecifier:(PSSpecifier *)arg1;
- (void)highlightSpecifierWithID:(NSString *)arg1;
- (_Bool)prepareHandlingURLForSpecifierID:(NSString *)arg1 resourceDictionary:(NSDictionary *)arg2 animatePush:(_Bool *)arg3;
- (void)pushController:(UIViewController *)arg1 animate:(_Bool)arg2;
- (void)pushController:(UIViewController *)arg1;
@end

