//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelephonyUI/NSObject-Protocol.h>

@class UIView;
@protocol TPDialerKeypadDelegate, TPNumberPadButtonProtocol;

@protocol TPDialerKeypadProtocol <NSObject>
- (void)setPlaysSounds:(_Bool)arg1;
- (long long)indexForHighlightedKey;
- (void)highlightKeyAtIndex:(long long)arg1;
- (void)setDelegate:(id <TPDialerKeypadDelegate>)arg1;

@optional
- (void)replaceButton:(UIView<TPNumberPadButtonProtocol> *)arg1 atIndex:(unsigned long long)arg2;
- (void)performTapActionCancelForHighlightedKey;
- (void)performTapActionEndForHighlightedKey;
- (void)performTapActionDownForHighlightedKey;
@end
