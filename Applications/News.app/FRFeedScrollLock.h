//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCObservable;

@interface FRFeedScrollLock : NSObject
{
    FCObservable *_state;
}

@property(readonly, nonatomic) FCObservable *state; // @synthesize state=_state;
- (void).cxx_destruct;
- (unsigned long long)enumState;
- (void)unlock;
- (void)lock;
- (id)init;

@end
