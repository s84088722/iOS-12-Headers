//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

@class NSMutableArray, NSMutableDictionary;

@interface PSUIAutomaticContentDownloadController : PSListController
{
    id _settingsChangedObserver;
    NSMutableArray *_applications;
    NSMutableDictionary *_applicationStates;
}

@property(retain, nonatomic) NSMutableDictionary *applicationStates; // @synthesize applicationStates=_applicationStates;
@property(retain, nonatomic) NSMutableArray *applications; // @synthesize applications=_applications;
- (void).cxx_destruct;
- (id)applicationEnabled:(id)arg1;
- (void)setApplicationEnabled:(id)arg1 forSpecifier:(id)arg2;
- (id)backgroundRefreshState:(id)arg1;
- (void)setBackgroundRefreshState:(id)arg1 withSpecifier:(id)arg2;
- (id)specifiers;
- (id)whitelist;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)init;

@end

