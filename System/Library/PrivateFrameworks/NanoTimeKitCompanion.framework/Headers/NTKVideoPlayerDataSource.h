//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NTKVideoPlayerListing, UIImage;

@interface NTKVideoPlayerDataSource : NSObject
{
    UIImage *_posterImage;
    NTKVideoPlayerListing *_currentListing;
}

@property(retain, nonatomic) NTKVideoPlayerListing *currentListing; // @synthesize currentListing=_currentListing;
@property(retain, nonatomic) UIImage *posterImage; // @synthesize posterImage=_posterImage;
- (void).cxx_destruct;
- (id)listingToQueueOncePlaybackStarts;
- (id)listingsToQueueAfterCurrent;
- (void)advanceToNextListing:(unsigned long long)arg1;
- (id)init;

@end
