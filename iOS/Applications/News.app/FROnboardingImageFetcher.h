//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FRFeldsparContext;

@interface FROnboardingImageFetcher : NSObject
{
    FRFeldsparContext *_feldsparContext;
}

+ (id)sharedFetcher;
@property(retain, nonatomic) FRFeldsparContext *feldsparContext; // @synthesize feldsparContext=_feldsparContext;
- (void).cxx_destruct;
- (void)_startDownloadingImagesForFeeds:(id)arg1;
- (void)startDownloadingImagesForItems:(id)arg1;
- (void)fetchImageForItem:(id)arg1 preferredContentSizeCategory:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

