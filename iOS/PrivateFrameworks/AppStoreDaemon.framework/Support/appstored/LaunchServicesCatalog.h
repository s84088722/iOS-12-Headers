//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreServices/LSApplicationWorkspaceObserver.h>

#import "LibraryCatalog-Protocol.h"
#import "LibraryOpen-Protocol.h"
#import "LibraryQueryEvaluator-Protocol.h"

@class LibraryQueryPlanner, NSDictionary, NSObject, NSString, ProgressCache;
@protocol LibraryCatalogObserver, OS_dispatch_queue;

@interface LaunchServicesCatalog : LSApplicationWorkspaceObserver <LibraryCatalog, LibraryOpen, LibraryQueryEvaluator>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id <LibraryCatalogObserver> _observer;
    LibraryQueryPlanner *_planner;
    ProgressCache *_progressCache;
    NSDictionary *_systemAppMappingByBundleID;
    NSDictionary *_systemAppMappingByItemID;
}

+ (id)sharedInstance;
@property __weak id <LibraryCatalogObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (void)_handleAppUnregisteredNotification:(id)arg1;
- (void)_handleAppRegisteredNotification:(id)arg1;
- (void)_refreshSystemAppMapping;
- (void)_getAppsOfType:(unsigned long long)arg1 matchingPredicate:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_enumerateApplicationsOfType:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_createAppFromProxy:(id)arg1 isPlaceholder:(_Bool)arg2;
- (id)_createAppFromProxy:(id)arg1;
- (id)resultsWithItemIDs:(id)arg1 error:(id *)arg2;
- (id)resultsWithBundleIDs:(id)arg1 error:(id *)arg2;
- (id)resultsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (void)launchApp:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (void)launchApp:(id)arg1 extensionType:(long long)arg2 withResultHandler:(CDUnknownBlockType)arg3;
- (void)executeQuery:(id)arg1 excludingBundleIDs:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (id)_initWithProgressCache:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

