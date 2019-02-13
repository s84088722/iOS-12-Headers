//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol OS_dispatch_source;

@interface SpringBoardPendingAlert : NSObject
{
    CDUnknownBlockType _completionBlock;
    NSDictionary *_options;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSString *_viewControllerName;
}

@property(copy, nonatomic) NSString *viewControllerName; // @synthesize viewControllerName=_viewControllerName;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (void)cancelTimeoutTimer;
- (void)dealloc;

@end

