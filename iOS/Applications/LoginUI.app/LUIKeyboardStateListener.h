//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol LUIKeyboardStateListenerDelegate;

@interface LUIKeyboardStateListener : NSObject
{
    _Bool _isVisible;
    id <LUIKeyboardStateListenerDelegate> _delegate;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id <LUIKeyboardStateListenerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didHide:(id)arg1;
- (void)didShow:(id)arg1;
- (void)willHide:(id)arg1;
- (void)willShow:(id)arg1;
- (_Bool)isVisibleWithDelay:(double)arg1;
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
- (id)init;

@end
