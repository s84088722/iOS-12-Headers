//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSString, PXImageRequester, UIImageView;
@protocol PXDisplayAsset, PXUIImageProvider;

@interface PXCMMImageView : UIView <PXChangeObserver>
{
    UIImageView *_imageView;
    UIView *_highlightView;
    id <PXDisplayAsset> _asset;
    id <PXUIImageProvider> _mediaProvider;
    PXImageRequester *_imageRequester;
}

@property(retain, nonatomic) PXImageRequester *imageRequester; // @synthesize imageRequester=_imageRequester;
@property(retain, nonatomic) id <PXUIImageProvider> mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(retain, nonatomic) id <PXDisplayAsset> asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateImageView;
- (void)_updateContent;
- (void)_updateImageRequester;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setAsset:(id)arg1 mediaProvider:(id)arg2;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

