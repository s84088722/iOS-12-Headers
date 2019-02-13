//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusKit/OKActionBinding.h>

#import <OpusKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UISwipeGestureRecognizer;

@interface OKActionBindingSwipe : OKActionBinding <UIGestureRecognizerDelegate>
{
    unsigned long long _numberOfTouchesRequired;
    unsigned long long _direction;
    UISwipeGestureRecognizer *_swipeGestureRecognizer;
}

+ (id)supportedSettings;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(nonatomic) unsigned long long numberOfTouchesRequired; // @synthesize numberOfTouchesRequired=_numberOfTouchesRequired;
- (void)handleSwipe:(id)arg1;
- (_Bool)ownsGestureRecognizer:(id)arg1;
- (_Bool)respondsToAction:(id)arg1 isTouchCountAgnostic:(_Bool)arg2;
- (void)unload;
- (void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2;
- (id)settingObjectForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithSettings:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

