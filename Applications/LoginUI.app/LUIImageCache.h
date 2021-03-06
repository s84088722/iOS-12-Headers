//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;

@interface LUIImageCache : NSObject
{
    NSCache *_diameterPhotoCache;
    NSCache *_diameterMonogramCache;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSCache *diameterMonogramCache; // @synthesize diameterMonogramCache=_diameterMonogramCache;
@property(retain, nonatomic) NSCache *diameterPhotoCache; // @synthesize diameterPhotoCache=_diameterPhotoCache;
- (void).cxx_destruct;
- (id)imageForContact:(id)arg1 forMonogramDiameter:(double)arg2;
- (void)cacheImage:(id)arg1 forContact:(id)arg2 monogramDiameter:(double)arg3 imageType:(unsigned long long)arg4;
- (id)_cacheForImageType:(unsigned long long)arg1;

@end

