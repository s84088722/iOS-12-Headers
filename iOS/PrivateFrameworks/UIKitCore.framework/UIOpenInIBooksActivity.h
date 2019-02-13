//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIActivity.h>

#import <UIKitCore/LSOpenResourceOperationDelegate-Protocol.h>
#import <UIKitCore/UIManagedConfigurationRestrictableActivity-Protocol.h>

@class LSApplicationProxy, NSOperation, NSString, NSURL;

@interface UIOpenInIBooksActivity : UIActivity <LSOpenResourceOperationDelegate, UIManagedConfigurationRestrictableActivity>
{
    _Bool _sourceIsManaged;
    _Bool _shouldUnlinkFile;
    NSString *_sourceApplicationBundleID;
    NSURL *_url;
    NSString *_applicationIdentifier;
    LSApplicationProxy *_applicationProxy;
    NSOperation *_operation;
}

+ (id)bestJobNameForActivityItems:(id)arg1;
+ (id)jobNameFormatForFile;
+ (id)defaultJobName;
+ (long long)activityCategory;
+ (unsigned long long)_xpcAttributes;
@property(retain, nonatomic) NSOperation *operation; // @synthesize operation=_operation;
@property(retain, nonatomic) LSApplicationProxy *applicationProxy; // @synthesize applicationProxy=_applicationProxy;
@property(retain, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(nonatomic) _Bool shouldUnlinkFile; // @synthesize shouldUnlinkFile=_shouldUnlinkFile;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *sourceApplicationBundleID; // @synthesize sourceApplicationBundleID=_sourceApplicationBundleID;
@property(nonatomic) _Bool sourceIsManaged; // @synthesize sourceIsManaged=_sourceIsManaged;
- (void).cxx_destruct;
- (void)prepareWithActivityItems:(id)arg1;
- (void)_cleanup;
- (void)performActivity;
- (void)_finishedCopyingResource;
- (void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2;
- (void)_openDocumentWithApplication;
- (id)_loadedApplicationProxy;
- (id)printInteractionController;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (_Bool)_appIsDocumentTypeOwner;
- (id)activityTitle;
- (id)_bundleIdentifierForActivityImageCreation;
- (id)activityType;
- (long long)_defaultSortGroup;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

