//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXProtoFeaturePlaceholderView.h>

@class UIActivityIndicatorView, UILabel;

@interface PXProtoFeatureLoadingPlaceholderView : PXProtoFeaturePlaceholderView
{
    UIActivityIndicatorView *_spinner;
    UILabel *_label;
}

- (void).cxx_destruct;
- (void)_updateLabelText;
- (void)statusDescriptionDidChange;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (_Bool)wantsContentView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

