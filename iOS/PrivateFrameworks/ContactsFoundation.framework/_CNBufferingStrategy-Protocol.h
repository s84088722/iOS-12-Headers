//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsFoundation/NSObject-Protocol.h>

@class NSArray, _CNBufferingObservable;
@protocol CNObserver;

@protocol _CNBufferingStrategy <NSObject>
- (void)bufferDidSendResults:(_CNBufferingObservable *)arg1;
- (void)buffer:(_CNBufferingObservable *)arg1 didReceiveResults:(NSArray *)arg2 forObserver:(id <CNObserver>)arg3;
@end

