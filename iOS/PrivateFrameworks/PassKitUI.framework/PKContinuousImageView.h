//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class CAShapeLayer;

@interface PKContinuousImageView : UIImageView
{
    CAShapeLayer *_maskLayer;
    struct CGRect _continuousCornerMaskingBounds;
    struct CGRect _lastLayoutContinuousCornerMaskingBounds;
    double _lastLayoutContinuousCornerRadius;
    double _continuousCornerRadius;
}

@property(nonatomic) double continuousCornerRadius; // @synthesize continuousCornerRadius=_continuousCornerRadius;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(nonatomic) struct CGRect continuousCornerMaskingBounds;

@end

