//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXReusableObject-Protocol.h>
#import <PhotosUICore/PXUIViewBasicTile-Protocol.h>

@class NSString, UIActivityIndicatorView;

@interface PXPlaceholderView : UIView <PXReusableObject, PXUIViewBasicTile>
{
    UIActivityIndicatorView *_indicator;
    _Bool _shouldShowIndicatorView;
}

@property(nonatomic) _Bool shouldShowIndicatorView; // @synthesize shouldShowIndicatorView=_shouldShowIndicatorView;
- (void).cxx_destruct;
- (void)_updateSubviews;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
@property(readonly, nonatomic) UIView *view;
- (void)layoutSubviews;
- (void)becomeReusable;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

