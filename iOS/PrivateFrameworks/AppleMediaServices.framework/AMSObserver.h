//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSObserver : NSObject
{
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _failureBlock;
    CDUnknownBlockType _resultBlock;
}

@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (void)_sendResult:(id)arg1 usingQueue:(id)arg2;
- (void)_sendFailure:(id)arg1 usingQueue:(id)arg2;
- (void)_sendCompletionUsingQueue:(id)arg1;
- (id)initWithResultBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)initWithResultBlock:(CDUnknownBlockType)arg1;

@end

