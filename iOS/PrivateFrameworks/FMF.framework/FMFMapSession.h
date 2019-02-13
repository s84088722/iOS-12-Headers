//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FMFMapCache, NSXPCConnection;

@interface FMFMapSession : NSObject
{
    FMFMapCache *_mapCache;
    NSXPCConnection *_connection;
}

+ (id)newConnection;
+ (id)sharedInstance;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) FMFMapCache *mapCache; // @synthesize mapCache=_mapCache;
- (void).cxx_destruct;
- (void)mapImageForLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 screenRatio:(double)arg4 andCompletion:(CDUnknownBlockType)arg5;
- (void)noLocationImageForScreenRatio:(double)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void)gridImageForScreenRatio:(double)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void)mapImageForRequest:(id)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void)mapImageForLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 width:(double)arg4 height:(double)arg5 cache:(_Bool)arg6 andCompletion:(CDUnknownBlockType)arg7;
- (void)noLocationImageForWidth:(double)arg1 height:(double)arg2 cache:(_Bool)arg3 andCompletion:(CDUnknownBlockType)arg4;
- (void)gridImageForWidth:(double)arg1 height:(double)arg2 cache:(_Bool)arg3 andCompletion:(CDUnknownBlockType)arg4;

@end

