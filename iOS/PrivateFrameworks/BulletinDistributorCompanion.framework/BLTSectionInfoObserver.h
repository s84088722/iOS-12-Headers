//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/BBObserverDelegate-Protocol.h>

@class BBObserver, BBSettingsGateway, NSString;
@protocol BLTSectionInfoObserverDelegate, OS_dispatch_queue;

@interface BLTSectionInfoObserver : NSObject <BBObserverDelegate>
{
    BBObserver *_observer;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _reloadSectionInfoCompletion;
    BBSettingsGateway *_settingsGateway;
    id <BLTSectionInfoObserverDelegate> _delegate;
}

@property(nonatomic) __weak id <BLTSectionInfoObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)observer:(id)arg1 removeSection:(id)arg2;
- (void)observer:(id)arg1 updateSectionInfo:(id)arg2;
- (void)_getBBSectionInfoExtendedProperties:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_reloadSectionInfosWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateSectionInfoBySectionIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reloadWithCompletion:(CDUnknownBlockType)arg1;
- (void)observer:(id)arg1 noteServerConnectionStateChanged:(_Bool)arg2;
- (void)_settingsGatewayReconnected:(id)arg1;
- (void)dealloc;
- (id)initWithSettingsGateway:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

