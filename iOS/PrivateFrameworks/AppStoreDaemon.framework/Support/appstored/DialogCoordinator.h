//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface DialogCoordinator : NSObject
{
    NSMutableDictionary *_dialogCount;
    NSMutableDictionary *_dialogQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)sharedCoordinator;
- (void).cxx_destruct;
- (void)_presentSystemDialogType:(id)arg1;
- (void)presentSystemDialog:(id)arg1;
- (id)init;

@end

