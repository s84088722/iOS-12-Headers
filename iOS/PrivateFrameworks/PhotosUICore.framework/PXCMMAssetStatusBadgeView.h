//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import <PhotosUICore/PXReusableObject-Protocol.h>
#import <PhotosUICore/PXUIViewBasicTile-Protocol.h>

@class NSString, UIView;

@interface PXCMMAssetStatusBadgeView : UIImageView <PXUIViewBasicTile, PXReusableObject>
{
    CDStruct_637f5cce _needsUpdateFlags;
    long long _status;
}

+ (struct CGSize)preferredSize;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void)_updateImageViewIfNeeded;
- (void)_invalidateImageView;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)prepareForReuse;
- (void)becomeReusable;
@property(readonly, nonatomic) UIView *view;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

