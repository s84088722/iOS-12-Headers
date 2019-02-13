//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLKDevice, NSDate, NSMapTable, NSMutableArray, NTKComplication;
@protocol NTKComplicationDisplay;

@interface NTKComplicationController : NSObject
{
    _Bool _hasGoneLive;
    _Bool _active;
    id <NTKComplicationDisplay> _legacyDisplayDEPRECATED;
    NSMutableArray *_displayWrappers;
    NSMapTable *_displayWrappersToDataMode;
    _Bool _showsLockedUI;
    _Bool _faceZooming;
    NTKComplication *_complication;
    long long _complicationFamily;
    CLKDevice *_device;
    CDUnknownBlockType _invalidationHandler;
    NSDate *_pauseDate;
    long long _cachingMode;
    long long _updatingMode;
    long long _animationMode;
    long long _effectiveFaceDataMode;
}

+ (id)DEPRECATEDControllerForComplication:(id)arg1 withLegacyDisplay:(id)arg2 forDevice:(id)arg3;
+ (_Bool)_isLegacy;
+ (_Bool)_acceptsComplicationType:(unsigned long long)arg1 family:(long long)arg2 forDevice:(id)arg3;
+ (_Bool)_acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;
+ (Class)controllerClassForComplicationType:(unsigned long long)arg1 family:(long long)arg2 forDevice:(id)arg3;
+ (id)controllerForComplication:(id)arg1 withRequestedFamily:(long long)arg2 face:(id)arg3 slot:(id)arg4;
@property(readonly, nonatomic) long long effectiveFaceDataMode; // @synthesize effectiveFaceDataMode=_effectiveFaceDataMode;
@property(readonly, nonatomic) long long animationMode; // @synthesize animationMode=_animationMode;
@property(readonly, nonatomic) long long updatingMode; // @synthesize updatingMode=_updatingMode;
@property(readonly, nonatomic) long long cachingMode; // @synthesize cachingMode=_cachingMode;
@property(nonatomic, getter=isFaceZooming) _Bool faceZooming; // @synthesize faceZooming=_faceZooming;
@property(nonatomic) _Bool showsLockedUI; // @synthesize showsLockedUI=_showsLockedUI;
@property(retain, nonatomic) NSDate *pauseDate; // @synthesize pauseDate=_pauseDate;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) long long complicationFamily; // @synthesize complicationFamily=_complicationFamily;
@property(readonly, nonatomic) NTKComplication *complication; // @synthesize complication=_complication;
- (void).cxx_destruct;
- (id)complicationApplicationIdentifier;
- (void)performBackgroundDataRefresh;
- (void)_openApp:(id)arg1 withURL:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)_openAppWithURL:(id)arg1;
- (void)didTouchUpInside;
- (void)didTouchDown;
- (void)performTapAction;
- (_Bool)hasTapAction;
- (void)handleFaceDefaultsChanged;
- (void)_configureForLegacyDisplay:(id)arg1;
@property(readonly, nonatomic) __weak id <NTKComplicationDisplay> legacyDisplay;
- (void)enumerateDisplayWrappersWithBlock:(CDUnknownBlockType)arg1;
- (void)removeDisplayWrapper:(id)arg1;
- (void)addDisplayWrapper:(id)arg1;
- (void)dealloc;
- (void)_activate;
- (void)activate;
- (void)_deactivate;
- (void)deactivate;
- (void)setDataMode:(long long)arg1 forDisplayWrapper:(id)arg2;
- (void)_updateIsComplicationActive:(_Bool)arg1;
- (void)_applyAnimationMode;
- (void)_applyCachingMode;
- (void)_applyUpdatingMode;
- (void)_updateInternalModes:(_Bool)arg1;
- (void)_updateEffectiveFaceDataMode;
- (void)_updateEffectiveAnimationMode;
- (void)_updateEffectiveUpdatingMode;
- (void)_updateEffectiveCachingMode;
- (void)DEPRECATEDInvalidate;
- (id)_initWithComplication:(id)arg1 legacyDisplay:(id)arg2 forDevice:(id)arg3;
- (id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;
- (Class)richComplicationDisplayViewClass;
- (_Bool)wantsLegacyDisplay;

@end

