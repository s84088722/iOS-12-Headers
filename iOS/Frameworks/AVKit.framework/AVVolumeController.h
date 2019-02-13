//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVSystemController, NSNumber, NSString;

@interface AVVolumeController : NSObject
{
    _Bool _changingVolume;
    _Bool _currentRouteHasVolumeControl;
    _Bool _prefersSystemVolumeHUDHidden;
    _Bool _prefersSystemVolumeHUDHiddenInternal;
    _Bool _EUVolumeLimitEnabled;
    _Bool _EUVolumeLimitOverridden;
    _Bool _volumeChangesThrottled;
    _Bool _canOverrideEUVolumeLimit;
    _Bool _fullyInitialized;
    float _volume;
    float _EUVolumeLimit;
    NSNumber *_targetVolumeInternal;
    NSNumber *_maximumTargetVolumeSinceChangingVolumeBegan;
    NSString *_volumeCategory;
    AVSystemController *_sharedSystemController;
}

+ (id)clientsPreferringVolumeHUDHidden;
+ (id)sharedVolumeController;
@property(nonatomic, getter=isFullyInitialized) _Bool fullyInitialized; // @synthesize fullyInitialized=_fullyInitialized;
@property(retain, nonatomic) AVSystemController *sharedSystemController; // @synthesize sharedSystemController=_sharedSystemController;
@property(readonly, nonatomic) NSString *volumeCategory; // @synthesize volumeCategory=_volumeCategory;
@property(retain, nonatomic) NSNumber *maximumTargetVolumeSinceChangingVolumeBegan; // @synthesize maximumTargetVolumeSinceChangingVolumeBegan=_maximumTargetVolumeSinceChangingVolumeBegan;
@property(retain, nonatomic) NSNumber *targetVolumeInternal; // @synthesize targetVolumeInternal=_targetVolumeInternal;
@property(nonatomic) _Bool canOverrideEUVolumeLimit; // @synthesize canOverrideEUVolumeLimit=_canOverrideEUVolumeLimit;
@property(nonatomic) _Bool volumeChangesThrottled; // @synthesize volumeChangesThrottled=_volumeChangesThrottled;
@property(nonatomic, getter=isEUVolumeLimitOverridden) _Bool EUVolumeLimitOverridden; // @synthesize EUVolumeLimitOverridden=_EUVolumeLimitOverridden;
@property(nonatomic, getter=isEUVolumeLimitEnabled) _Bool EUVolumeLimitEnabled; // @synthesize EUVolumeLimitEnabled=_EUVolumeLimitEnabled;
@property(nonatomic) float EUVolumeLimit; // @synthesize EUVolumeLimit=_EUVolumeLimit;
@property(nonatomic) _Bool prefersSystemVolumeHUDHiddenInternal; // @synthesize prefersSystemVolumeHUDHiddenInternal=_prefersSystemVolumeHUDHiddenInternal;
@property(nonatomic) _Bool prefersSystemVolumeHUDHidden; // @synthesize prefersSystemVolumeHUDHidden=_prefersSystemVolumeHUDHidden;
@property(nonatomic) _Bool currentRouteHasVolumeControl; // @synthesize currentRouteHasVolumeControl=_currentRouteHasVolumeControl;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic, getter=isChangingVolume) _Bool changingVolume; // @synthesize changingVolume=_changingVolume;
- (void).cxx_destruct;
- (void)_performOnMainThread:(CDUnknownBlockType)arg1;
- (void)_applyProposedVolumeImmediately;
- (void)_applyProposedVolumeIfNeeded;
- (void)_handleCurrentRouteHasVolumeControlDidChangeNotification:(id)arg1;
- (void)_handleSystemVolumeDidChangeNotification:(id)arg1;
- (void)_handleEUVolumeLimitDidChangeNotification:(id)arg1;
- (void)_handleSystemControllerServerDiedNotification;
- (void)_unobserveSystemController;
- (void)_observeSystemController;
@property(readonly, nonatomic) float effectiveVolumeLimit;
- (void)setTargetVolume:(float)arg1;
- (void)setSystemVolumeHUDEnabled:(_Bool)arg1;
- (void)setClientWithIdentifier:(id)arg1 prefersSystemVolumeHUDHidden:(_Bool)arg2;
- (void)endChangingVolume;
- (void)beginChangingVolume;
- (void)dealloc;
- (id)init;

@end

