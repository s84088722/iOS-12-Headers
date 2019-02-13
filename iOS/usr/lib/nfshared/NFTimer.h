//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface NFTimer : NSObject
{
    NSObject<OS_dispatch_source> *_src;
}

- (void)stopTimer;
- (void)startTimer:(double)arg1 leeway:(double)arg2;
- (void)startTimer:(double)arg1;
- (void)dealloc;
- (id)initWithCallback:(CDUnknownBlockType)arg1 queue:(id)arg2;

@end
