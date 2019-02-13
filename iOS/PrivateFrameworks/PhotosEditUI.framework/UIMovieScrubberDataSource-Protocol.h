//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosEditUI/NSObject-Protocol.h>

@class NSArray, NSNumber, UIMovieScrubber;

@protocol UIMovieScrubberDataSource <NSObject>
- (void)movieScrubber:(UIMovieScrubber *)arg1 requestThumbnailImageForTimestamp:(NSNumber *)arg2;
- (double)movieScrubberThumbnailAspectRatio:(UIMovieScrubber *)arg1;
- (NSArray *)movieScrubber:(UIMovieScrubber *)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(NSNumber *)arg3 endingAt:(NSNumber *)arg4;
- (double)movieScrubberDuration:(UIMovieScrubber *)arg1;

@optional
- (void)movieScrubber:(UIMovieScrubber *)arg1 requestThumbnailImageForTimestamp:(NSNumber *)arg2 isSummaryThumbnail:(_Bool)arg3;
@end

