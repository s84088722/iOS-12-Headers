//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import <DocumentManagerUICore/DOCThumbnailListener-Protocol.h>

@class NSLayoutConstraint, NSString;
@protocol DOCFittingImageViewDelegate, DOCThumbnail;

@interface DOCFittingImageView : UIImageView <DOCThumbnailListener>
{
    _Bool _addDecoration;
    _Bool _inTableMode;
    id <DOCFittingImageViewDelegate> _delegate;
    id <DOCThumbnail> _thumbnail;
    NSLayoutConstraint *_aspectRatioConstraint;
    struct CGSize _fittingSize;
}

@property(retain, nonatomic) NSLayoutConstraint *aspectRatioConstraint; // @synthesize aspectRatioConstraint=_aspectRatioConstraint;
@property(nonatomic) struct CGSize fittingSize; // @synthesize fittingSize=_fittingSize;
@property(nonatomic, getter=isInTableMode) _Bool inTableMode; // @synthesize inTableMode=_inTableMode;
@property(nonatomic) _Bool addDecoration; // @synthesize addDecoration=_addDecoration;
@property(retain, nonatomic) id <DOCThumbnail> thumbnail; // @synthesize thumbnail=_thumbnail;
@property(nonatomic) __weak id <DOCFittingImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)updateCornerRadius;
- (void)updateBorderWidth;
- (void)updateImage:(id)arg1 addDecoration:(_Bool)arg2;
- (void)thumbnailLoaded:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setImage:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

