//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SFUserNotification : NSObject
{
    struct __CFUserNotification *_cfNotification;
    struct __CFRunLoopSource *_cfRunloopSource;
    NSString *_domain;
    NSString *_bundleID;
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (void)scheduleWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)cancel;
- (void)dealloc;
- (id)initWithDomain:(id)arg1 appBundleID:(id)arg2;

@end

