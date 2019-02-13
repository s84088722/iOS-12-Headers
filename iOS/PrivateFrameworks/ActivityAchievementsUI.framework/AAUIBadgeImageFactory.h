//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AAUIAchievementResourceProvider, AAUIBadgeView, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AAUIBadgeImageFactory : NSObject
{
    NSMutableDictionary *_cache;
    AAUIAchievementResourceProvider *_resourceProvider;
    AAUIBadgeView *_earnedBadgeView;
    AAUIBadgeView *_unearnedBadgeView;
    NSObject<OS_dispatch_queue> *_imageCreationQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *imageCreationQueue; // @synthesize imageCreationQueue=_imageCreationQueue;
@property(retain, nonatomic) AAUIBadgeView *unearnedBadgeView; // @synthesize unearnedBadgeView=_unearnedBadgeView;
@property(retain, nonatomic) AAUIBadgeView *earnedBadgeView; // @synthesize earnedBadgeView=_earnedBadgeView;
@property(retain, nonatomic) AAUIAchievementResourceProvider *resourceProvider; // @synthesize resourceProvider=_resourceProvider;
@property(retain, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (id)generateImageForConfiguration:(id)arg1 size:(struct CGSize)arg2 unearned:(_Bool)arg3;
- (void)clearAllCachedImages;
- (_Bool)hasCachedThumbnailImageForAchievement:(id)arg1 size:(struct CGSize)arg2;
- (id)thumbnailImageForAchievement:(id)arg1 size:(struct CGSize)arg2;
- (id)init;

@end

