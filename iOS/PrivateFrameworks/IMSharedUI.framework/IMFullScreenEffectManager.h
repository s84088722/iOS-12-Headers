//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMSharedUI/IMFullScreenEffectDelegate-Protocol.h>

@class IMFullScreenEffect, IMScheduledUpdater, NSMutableArray, NSString, NSTimer;
@protocol IMFullScreenEffectManagerDelegate;

@interface IMFullScreenEffectManager : NSObject <IMFullScreenEffectDelegate>
{
    IMFullScreenEffect *_currentEffect;
    NSObject<IMFullScreenEffectManagerDelegate> *_delegate;
    NSMutableArray *_effectQueue;
    NSTimer *_effectDurationTimer;
    IMScheduledUpdater *_triggerUpdater;
}

@property(retain, nonatomic) IMScheduledUpdater *triggerUpdater; // @synthesize triggerUpdater=_triggerUpdater;
@property(retain, nonatomic) NSTimer *effectDurationTimer; // @synthesize effectDurationTimer=_effectDurationTimer;
@property(retain, nonatomic) NSMutableArray *effectQueue; // @synthesize effectQueue=_effectQueue;
@property(nonatomic) __weak NSObject<IMFullScreenEffectManagerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IMFullScreenEffect *currentEffect; // @synthesize currentEffect=_currentEffect;
- (void).cxx_destruct;
- (void)endHoldingUpdatesForKey:(id)arg1;
- (void)beginHoldingUpdatesForKey:(id)arg1;
- (void)stopFullscreenEffect;
- (void)fullScreenEffectDidPrepareSoundEffect:(id)arg1;
- (void)triggerNextEffect;
- (void)startFullscreenEffectForChatItem:(id)arg1 language:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

