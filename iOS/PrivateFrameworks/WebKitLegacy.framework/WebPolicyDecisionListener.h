//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/WebPolicyDecisionListener-Protocol.h>

@class NSString, WebPolicyDecisionListenerPrivate;

@interface WebPolicyDecisionListener : NSObject <WebPolicyDecisionListener>
{
    WebPolicyDecisionListenerPrivate *_private;
}

- (void)download;
- (void)ignore;
- (void)use;
- (void)_invalidate;
- (void)_usePolicy:(int)arg1;
- (void)dealloc;
- (id)_initWithTarget:(id)arg1 action:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

