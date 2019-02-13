//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPModelObject;

@interface MPLibraryAddStatusObserver : NSObject
{
    _Bool _needsStatusUpdate;
    struct MPLibraryAddStatusObserverConfiguration _configuration;
    unsigned long long _currentStatus;
    CDUnknownBlockType _statusBlock;
    MPModelObject *_identifyingModelObject;
}

@property(readonly, nonatomic) MPModelObject *identifyingModelObject; // @synthesize identifyingModelObject=_identifyingModelObject;
@property(readonly, nonatomic) struct MPLibraryAddStatusObserverConfiguration configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) CDUnknownBlockType statusBlock; // @synthesize statusBlock=_statusBlock;
@property(readonly, nonatomic) unsigned long long currentStatus; // @synthesize currentStatus=_currentStatus;
- (void).cxx_destruct;
- (void)_updateCurrentStatus;
- (unsigned long long)_calculateCurrentStatus;
- (void)_updateInProgressDidChangeNotification:(id)arg1;
- (void)_transientStateDidChangeNotification:(id)arg1;
- (void)_subscriptionStatusDidChangeNotification:(id)arg1;
- (void)_cloudLibraryEnabledDidChangeNotification:(id)arg1;
- (void)_allowsExplicitContentDidChangeNotification:(id)arg1;
- (void)setConfiguration:(struct MPLibraryAddStatusObserverConfiguration)arg1 identifyingModelObject:(id)arg2;
- (void)configureWithModelObject:(id)arg1;
- (void)dealloc;
- (id)init;

@end

