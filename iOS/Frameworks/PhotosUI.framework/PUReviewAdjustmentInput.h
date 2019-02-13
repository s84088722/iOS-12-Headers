//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSURL, UIImage;

__attribute__((visibility("hidden")))
@interface PUReviewAdjustmentInput : NSObject
{
    UIImage *_currentPreviewImage;
    NSData *_knownAdjustmentData;
    long long _adjustmentBaseVersion;
    NSURL *_baseImageFileURL;
    NSURL *_baseVideoFileURL;
}

@property(nonatomic, setter=_setBaseVideoFileURL:) NSURL *baseVideoFileURL; // @synthesize baseVideoFileURL=_baseVideoFileURL;
@property(nonatomic, setter=_setBaseImageFileURL:) NSURL *baseImageFileURL; // @synthesize baseImageFileURL=_baseImageFileURL;
@property(nonatomic, setter=_setBaseImageVersion:) long long adjustmentBaseVersion; // @synthesize adjustmentBaseVersion=_adjustmentBaseVersion;
@property(retain, nonatomic, setter=_setKnownAdjustmentData:) NSData *knownAdjustmentData; // @synthesize knownAdjustmentData=_knownAdjustmentData;
@property(retain, nonatomic, setter=_setCurrentPreviewImage:) UIImage *currentPreviewImage; // @synthesize currentPreviewImage=_currentPreviewImage;
- (void).cxx_destruct;

@end

