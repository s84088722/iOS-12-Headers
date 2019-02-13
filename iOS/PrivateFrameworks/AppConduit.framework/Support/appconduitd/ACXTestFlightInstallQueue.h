//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACXTimedIdentifierList;
@protocol OS_dispatch_queue;

@interface ACXTestFlightInstallQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    ACXTimedIdentifierList *_list;
}

+ (id)sharedInstaller;
@property(readonly) ACXTimedIdentifierList *list; // @synthesize list=_list;
@property(readonly) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
- (void).cxx_destruct;
- (void)removePendingInstallForApp:(id)arg1;
- (void)installWatchApp:(id)arg1 targetDevice:(id)arg2;
- (id)init;

@end

