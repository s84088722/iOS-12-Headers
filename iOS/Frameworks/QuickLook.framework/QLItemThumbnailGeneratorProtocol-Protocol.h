//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/NSObject-Protocol.h>

@class QLItem;

@protocol QLItemThumbnailGeneratorProtocol <NSObject>
- (void)generateThumbnailForItem:(QLItem *)arg1 ofSize:(struct CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 badgeType:(unsigned long long)arg5 completionBlock:(void (^)(UIImage *))arg6;
- (void)generateThumbnailForItem:(QLItem *)arg1 ofSize:(struct CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 completionBlock:(void (^)(UIImage *))arg5;
@end

