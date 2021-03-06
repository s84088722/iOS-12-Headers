//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface COSRegistryDispatcher : NSObject
{
    NSObject<OS_dispatch_source> *_timer;
    CDUnknownBlockType _clientBlock;
}

@property(copy, nonatomic) CDUnknownBlockType clientBlock; // @synthesize clientBlock=_clientBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (void)invalidate;
- (void)nanoRegistryBecameActive;
- (void)nanoRegistryStatusChanged:(id)arg1;
- (id)initWithBecameReadyCompletion:(CDUnknownBlockType)arg1 andTimeout:(double)arg2;

@end

