//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AccountsUI/NSObject-Protocol.h>

@class NSObject, PSViewController;
@protocol ACUIAccountViewsProviderProtocol, ACUISettingsPluginProtocol;

@protocol ACUIPluginProviderProtocol <NSObject>
- (NSObject<ACUIAccountViewsProviderProtocol> *)accountViewsProvider;
- (NSObject<ACUISettingsPluginProtocol> *)settingsPluginWithParent:(PSViewController *)arg1;
@end

