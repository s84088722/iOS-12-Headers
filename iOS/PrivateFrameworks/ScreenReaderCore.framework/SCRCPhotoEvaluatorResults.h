//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCRCPhotoEvaluatorResult;

@interface SCRCPhotoEvaluatorResults : NSObject
{
    SCRCPhotoEvaluatorResult *_blurResult;
    SCRCPhotoEvaluatorResult *_colorResult;
    SCRCPhotoEvaluatorResult *_luminanceResult;
}

@property(readonly, nonatomic) SCRCPhotoEvaluatorResult *luminanceResult; // @synthesize luminanceResult=_luminanceResult;
@property(readonly, nonatomic) SCRCPhotoEvaluatorResult *colorResult; // @synthesize colorResult=_colorResult;
@property(readonly, nonatomic) SCRCPhotoEvaluatorResult *blurResult; // @synthesize blurResult=_blurResult;
- (void).cxx_destruct;
- (id)initWithBlurResult:(id)arg1 colorResult:(id)arg2 luminanceResult:(id)arg3;

@end
