//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIWindow;
@protocol TSKKeyboardObserver;

@interface TSKKeyboardMonitor : NSObject
{
    UIWindow *_rootWindow;
    _Bool _keyboardIsVisibleAndDocked;
    _Bool _keyboardIsAnimatingInOrDocking;
    _Bool _keyboardIsAnimatingOutOrUndocking;
    _Bool _weAreFakingAHideEvent;
    _Bool _lastHideWasFake;
    _Bool _suppressDidHide;
    struct CGRect _keyboardFrame;
    double _onScreenHeight;
    struct __CFArray *_keyboardObservers;
    NSMutableArray *_completionBlocks;
    id <TSKKeyboardObserver> _exclusiveKeyboardObserver;
    double _keyboardAnimationDuration;
}

+ (void)afterKeyboardAnimationPerformBlock:(CDUnknownBlockType)arg1;
+ (_Bool)keyboardIsAnimatingOutOrUndocking;
+ (_Bool)keyboardIsAnimatingInOrDocking;
+ (_Bool)keyboardIsAnimating;
+ (_Bool)keyboardIsVisibleAndDocked;
+ (void)setKeyboardHiddenByModalObserver:(id)arg1;
+ (void)setModalKeyboardObserver:(id)arg1;
+ (void)removeKeyboardObserver:(id)arg1;
+ (void)addKeyboardObserver:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedKeyboardMonitor;
+ (id)_singletonAlloc;
@property(readonly) double keyboardAnimationDuration; // @synthesize keyboardAnimationDuration=_keyboardAnimationDuration;
@property(readonly) double onScreenHeight; // @synthesize onScreenHeight=_onScreenHeight;
@property(readonly) struct CGRect keyboardFrame; // @synthesize keyboardFrame=_keyboardFrame;
@property(readonly) _Bool keyboardIsAnimatingOutOrUndocking; // @synthesize keyboardIsAnimatingOutOrUndocking=_keyboardIsAnimatingOutOrUndocking;
@property(readonly) _Bool keyboardIsAnimatingInOrDocking; // @synthesize keyboardIsAnimatingInOrDocking=_keyboardIsAnimatingInOrDocking;
@property(readonly) _Bool keyboardIsVisibleAndDocked; // @synthesize keyboardIsVisibleAndDocked=_keyboardIsVisibleAndDocked;
@property(nonatomic) UIWindow *rootWindow; // @synthesize rootWindow=_rootWindow;
- (void)p_KeyboardDidChangeFrame:(id)arg1;
- (void)p_KeyboardWillChangeFrame:(id)arg1;
- (void)p_keyboardDidHideOrUndock:(id)arg1;
- (void)p_keyboardWillHideOrUndock:(id)arg1;
- (void)p_keyboardDidShowOrDock:(id)arg1;
- (void)p_keyboardWillShowOrDock:(id)arg1;
- (void)p_enumerateObserversUsingBlock:(CDUnknownBlockType)arg1;
- (void)p_removeKeyboardNotifications;
- (void)p_installKeyboardNotifications;
- (void)p_performAnimationCompletionBlocksWithVisible:(_Bool)arg1;
- (void)p_updateKeyboardInfoFromNotification:(id)arg1;
- (id)p_keyboardFrameView;
- (double)keyboardHeightInView:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (void)afterKeyboardAnimationPerformBlock:(CDUnknownBlockType)arg1;
- (void)setKeyboardHiddenByModalObserver:(id)arg1;
- (void)setModalKeyboardObserver:(id)arg1;
- (void)removeKeyboardObserver:(id)arg1;
- (void)addKeyboardObserver:(id)arg1;
- (void)dealloc;
- (id)init;
@property(readonly) _Bool keyboardIsAnimating;

@end

