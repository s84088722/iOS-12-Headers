//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKitLegacy/DOMUIEvent.h>

@class DOMNode;
@protocol DOMEventTarget;

@interface DOMMouseEvent : DOMUIEvent
{
}

- (void)initMouseEvent:(id)arg1 canBubble:(_Bool)arg2 cancelable:(_Bool)arg3 view:(id)arg4 detail:(int)arg5 screenX:(int)arg6 screenY:(int)arg7 clientX:(int)arg8 clientY:(int)arg9 ctrlKey:(_Bool)arg10 altKey:(_Bool)arg11 shiftKey:(_Bool)arg12 metaKey:(_Bool)arg13 button:(unsigned short)arg14 relatedTarget:(id)arg15;
@property(readonly) DOMNode *toElement;
@property(readonly) DOMNode *fromElement;
@property(readonly) int y;
@property(readonly) int x;
@property(readonly) int offsetY;
@property(readonly) int offsetX;
@property(readonly) id <DOMEventTarget> relatedTarget;
@property(readonly) unsigned short button;
@property(readonly) _Bool metaKey;
@property(readonly) _Bool altKey;
@property(readonly) _Bool shiftKey;
@property(readonly) _Bool ctrlKey;
@property(readonly) int clientY;
@property(readonly) int clientX;
@property(readonly) int screenY;
@property(readonly) int screenX;
- (void)initMouseEvent:(id)arg1:(_Bool)arg2:(_Bool)arg3:(id)arg4:(int)arg5:(int)arg6:(int)arg7:(int)arg8:(int)arg9:(_Bool)arg10:(_Bool)arg11:(_Bool)arg12:(_Bool)arg13:(unsigned short)arg14:(id)arg15;

@end

