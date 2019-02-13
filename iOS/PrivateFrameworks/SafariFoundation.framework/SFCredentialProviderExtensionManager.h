//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSExtension, NSMutableOrderedSet, NSSet;
@protocol OS_dispatch_queue;

@interface SFCredentialProviderExtensionManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    id _extensionMatchingToken;
    NSSet *_extensions;
    NSMutableOrderedSet *_observers;
    _Bool _errorEncounteredDuringLastExtensionDiscovery;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (_Bool)shouldShowConfigurationUIForEnablingExtension:(id)arg1;
- (id)displayNameForExtension:(id)arg1;
- (void)setExtension:(id)arg1 isEnabled:(_Bool)arg2;
- (_Bool)extensionIsEnabled:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) NSExtension *primaryExtensionSync;
@property(readonly, nonatomic) NSExtension *primaryExtension;
- (id)_extensions;
@property(readonly, nonatomic) NSSet *extensions;
- (void)_notifyObservers:(id)arg1;
- (void)_updateExtensions:(id)arg1;
- (void)_endExtensionDiscovery;
- (void)_beginExtensionDiscovery;
- (void)getPrimaryExtensionWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

