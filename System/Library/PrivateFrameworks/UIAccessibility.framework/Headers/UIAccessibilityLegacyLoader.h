//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIAccessibility/UIAccessibilityLoader.h>

@interface UIAccessibilityLegacyLoader : UIAccessibilityLoader
{
}

+ (id)_accessibilityBundlesForBundle:(id)arg1;
+ (void)loadAccessibilityBundle:(id)arg1 didLoadCallback:(CDUnknownBlockType)arg2 loadSubbundles:(_Bool)arg3;
+ (void)loadAccessibilityBundleForBundle:(id)arg1 didLoadCallback:(CDUnknownBlockType)arg2 forceLoad:(_Bool)arg3 loadSubbundles:(_Bool)arg4 loadAllAccessibilityInfo:(_Bool)arg5;
+ (_Bool)_accessibilityShouldSortBundlesBeforeLoading;
+ (long long)_accessibilityLoadingPriorityForBundle:(id)arg1;
+ (void)_accessibilityLoadSubbundles:(id)arg1;
+ (id)_axBundleForBundle:(id)arg1;
+ (void)loadExtendedAccessibilityBundles;
+ (void)initialize;

@end
