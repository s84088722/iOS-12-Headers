//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MapsSuggestionsCanKicker : NSObject <MapsSuggestionsObject>
{
    NSObject<OS_dispatch_queue> *_targetQueue;
    struct NSString *_name;
    CDUnknownBlockType _block;
    double _time;
    double _leeway;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _count;
}

- (void).cxx_destruct;
- (void)_kickCan;
@property(readonly, nonatomic) NSString *uniqueName;
- (void)kickCanBySameTime;
- (void)kickCanByTime:(double)arg1;
- (void)kickCanByTime:(double)arg1 leeway:(double)arg2;
- (void)cancel;
- (void)dealloc;
- (id)initWithName:(struct NSString *)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)initWithName:(struct NSString *)arg1 time:(double)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;
- (id)initWithName:(struct NSString *)arg1 time:(double)arg2 leeway:(double)arg3 queue:(id)arg4 block:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

