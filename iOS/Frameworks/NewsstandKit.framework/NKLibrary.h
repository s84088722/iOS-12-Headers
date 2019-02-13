//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NKIssue, NSArray, NSFileManager, NSMapTable, NSURL;

@interface NKLibrary : NSObject
{
    NSArray *_issues;
    NKIssue *_currentlyReadingIssue;
    NSMapTable *_issuesByName;
    NSMapTable *_issuesByDirectory;
    NSURL *_contentURL;
    NSFileManager *_fileManager;
    NSURL *_appSupportURL;
    NSURL *_libraryURL;
    _Bool _inited;
    int _needsSaving;
    int _savePending;
    NSArray *_assetsFromLaunch;
}

+ (_Bool)_isNewsstandApp;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedLibrary;
- (id)description;
- (void)_applicationWillTerminate:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_setIssues:(id)arg1;
@property(readonly) NSArray *issues;
- (void)_load;
- (void)_saveNowIfNeeded;
- (void)_saveIfNeeded;
- (void)_saveIfNeededAfterDelay:(double)arg1;
- (void)__actuallySave;
- (void)_markAsDirtyAndSave;
- (void)_markIssuesAndSave;
- (id)_libraryURL;
- (id)_appSupportURL;
- (void)_didFinishLaunchingWasCalled;
- (void)_performBackgroundTask:(CDUnknownBlockType)arg1 withDescription:(id)arg2;
- (void)_issueChanged:(id)arg1;
- (_Bool)_canPerformBackgroundDownloads;
- (id)_fileManager;
- (id)_issueForDirectory:(id)arg1;
- (id)_contentURL;
- (void)removeIssue:(id)arg1;
- (id)addIssueWithName:(id)arg1 date:(id)arg2;
- (id)issueWithName:(id)arg1;
@property(retain) NKIssue *currentlyReadingIssue;
@property(readonly) NSArray *downloadingAssets;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

