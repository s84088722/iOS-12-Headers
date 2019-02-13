//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPPlaybackContext.h>

@class NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface VideosExtrasPlaybackContext : MPPlaybackContext
{
    NSMutableArray *_bookmarkTimes;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_assetTypes;
    _Bool _isBackgroundContext;
    NSArray *_assets;
}

+ (Class)queueFeederClass;
@property(readonly, nonatomic) _Bool isBackgroundContext; // @synthesize isBackgroundContext=_isBackgroundContext;
@property(readonly, nonatomic) NSArray *assets; // @synthesize assets=_assets;
- (void).cxx_destruct;
- (id)descriptionComponents;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)itemTypeForAssetAtIndex:(unsigned long long)arg1;
- (double)startTimeForAssetAtIndex:(unsigned long long)arg1;
- (void)loadExtrasBookmarksWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithMediaElements:(id)arg1 isBackgroundContent:(_Bool)arg2;

@end

