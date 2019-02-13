//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXAssetTile-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXReusableObject-Protocol.h>
#import <PhotosUICore/PXUIImageViewBasicTile-Protocol.h>

@class NSString, PXFocusableUIImageView, PXImageRequester, UIColor, UIImage, UIView;

@interface PXAssetUIImageViewTile : NSObject <PXChangeObserver, PXReusableObject, PXAssetTile, PXUIImageViewBasicTile>
{
    PXFocusableUIImageView *_imageView;
    UIView *_contentView;
    _Bool _hasPlaceholder;
    _Bool _shouldAllowFocus;
    PXImageRequester *_imageRequester;
    UIColor *_placeholderColor;
    UIImage *_placeholderImage;
    struct CGSize __contentSize;
    struct CGRect __desiredContentsRect;
}

@property(nonatomic, setter=_setDesiredContentsRect:) struct CGRect _desiredContentsRect; // @synthesize _desiredContentsRect=__desiredContentsRect;
@property(nonatomic, setter=_setContentSize:) struct CGSize _contentSize; // @synthesize _contentSize=__contentSize;
@property(nonatomic) _Bool shouldAllowFocus; // @synthesize shouldAllowFocus=_shouldAllowFocus;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(retain, nonatomic) PXImageRequester *imageRequester; // @synthesize imageRequester=_imageRequester;
- (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)imageDidChange;
- (void)_updateImageView;
- (void)_updateImageRequester;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)prepareForReuse;
- (void)becomeReusable;
- (void)_updateContentView;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) UIView *view;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

