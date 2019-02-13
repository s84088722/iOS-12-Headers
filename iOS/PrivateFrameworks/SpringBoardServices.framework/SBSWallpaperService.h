//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SBSWallpaperClient;
@protocol OS_dispatch_queue;

@interface SBSWallpaperService : NSObject
{
    SBSWallpaperClient *_client;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    _Bool _wasInvalidated;
}

- (void).cxx_destruct;
- (_Bool)setWallpaperWithVideo:(id)arg1 cropRect:(struct CGRect)arg2;
- (void)fetchThumbnailForVariant:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end

