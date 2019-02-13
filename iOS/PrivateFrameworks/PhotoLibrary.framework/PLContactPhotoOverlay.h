//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIImageView, UILabel;

@interface PLContactPhotoOverlay : UIView
{
    UILabel *_titleLabel;
    UIImageView *__avatarPreview;
    CAShapeLayer *_circularLayer;
}

@property(retain, nonatomic) CAShapeLayer *circularLayer; // @synthesize circularLayer=_circularLayer;
@property(readonly, nonatomic) UIImageView *_avatarPreview; // @synthesize _avatarPreview=__avatarPreview;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)endAvatarTracking;
- (void)beginAvatarTrackingFromImageView:(id)arg1;
- (struct CGRect)inscribingBounds;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonPLContactPhotoOverlayInitialization;
@property(readonly, nonatomic) struct UIEdgeInsets overlayEdgeInsets;

@end

