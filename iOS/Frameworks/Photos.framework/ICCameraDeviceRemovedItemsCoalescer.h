//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, PHImportDeviceSource;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ICCameraDeviceRemovedItemsCoalescer : NSObject
{
    NSObject<OS_dispatch_source> *_timer;
    NSDate *_lastNotify;
    NSMutableArray *_items;
    PHImportDeviceSource *_source;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _block;
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak PHImportDeviceSource *source; // @synthesize source=_source;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSDate *lastNotify; // @synthesize lastNotify=_lastNotify;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (void)coalesceItems:(id)arg1;
- (id)initWithDevice:(id)arg1 block:(CDUnknownBlockType)arg2;

@end

