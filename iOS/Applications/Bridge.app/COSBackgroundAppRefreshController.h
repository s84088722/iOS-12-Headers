//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

@class NARApplicationWorkspace, NPSDomainAccessor, NPSManager, NSArray, NSCache, NSMutableArray;

@interface COSBackgroundAppRefreshController : PSListController
{
    NARApplicationWorkspace *_applicationWorkspace;
    NSArray *_applicationList;
    NSMutableArray *_disabledAppList;
    NPSManager *_syncManager;
    NPSDomainAccessor *_backgroundAppRefreshDomainAccessor;
    NSCache *_iconCache;
}

@property(readonly, nonatomic) NSCache *iconCache; // @synthesize iconCache=_iconCache;
@property(retain, nonatomic) NPSDomainAccessor *backgroundAppRefreshDomainAccessor; // @synthesize backgroundAppRefreshDomainAccessor=_backgroundAppRefreshDomainAccessor;
@property(retain, nonatomic) NPSManager *syncManager; // @synthesize syncManager=_syncManager;
@property(retain, nonatomic) NSMutableArray *disabledAppList; // @synthesize disabledAppList=_disabledAppList;
@property(retain, nonatomic) NSArray *applicationList; // @synthesize applicationList=_applicationList;
@property(retain, nonatomic) NARApplicationWorkspace *applicationWorkspace; // @synthesize applicationWorkspace=_applicationWorkspace;
- (void).cxx_destruct;
- (id)backgroundAppRefreshState:(id)arg1;
- (void)setBackgroundAppRefreshState:(id)arg1 specifier:(id)arg2;
- (void)backgroundAppRefreshSwitchStateDidChange;
- (void)applicationsDidChange;
- (id)specifiers;
- (void)refreshAppList;
- (void)dealloc;
- (id)init;

@end

