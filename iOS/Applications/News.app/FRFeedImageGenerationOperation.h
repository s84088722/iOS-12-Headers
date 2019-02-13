//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class FRFeedImageGenerationOptions, UIImage;
@protocol FCOperationCanceling><FCOperationPrioritizing;

@interface FRFeedImageGenerationOperation : NSOperation
{
    FRFeedImageGenerationOptions *_options;
    UIImage *_image;
    id <FCOperationCanceling><FCOperationPrioritizing> _coverDownloadOperation;
    id <FCOperationCanceling><FCOperationPrioritizing> _logoDownloadOperation;
}

+ (struct CGRect)bannerRectForSize:(struct CGSize)arg1;
+ (id)maskLookupTable;
+ (id)imageMaskOfSize:(struct CGSize)arg1;
+ (id)sharedOperationQueue;
@property(retain) id <FCOperationCanceling><FCOperationPrioritizing> logoDownloadOperation; // @synthesize logoDownloadOperation=_logoDownloadOperation;
@property(retain) id <FCOperationCanceling><FCOperationPrioritizing> coverDownloadOperation; // @synthesize coverDownloadOperation=_coverDownloadOperation;
@property(retain) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) FRFeedImageGenerationOptions *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (id)_finalizeImageWithCoverImage:(id)arg1;
- (id)_tintedImageWithCoverImage:(id)arg1;
- (id)_topicCardImage;
- (struct CGRect)rectForOnePixelStroke:(struct CGRect)arg1;
- (id)_bannerImageForTheme:(id)arg1 punchOutEffect:(_Bool)arg2;
- (void)cancel;
- (void)main;
- (id)initWithOptions:(id)arg1;

@end

