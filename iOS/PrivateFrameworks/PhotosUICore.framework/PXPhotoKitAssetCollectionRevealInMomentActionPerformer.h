//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXPhotoKitAssetCollectionActionPerformer.h>

@interface PXPhotoKitAssetCollectionRevealInMomentActionPerformer : PXPhotoKitAssetCollectionActionPerformer
{
}

+ (id)_assetToRevealInAssetCollection:(id)arg1;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollection:(id)arg2 person:(id)arg3;
+ (id)createPreviewActionGroupForAssetCollection:(id)arg1 mutableActionTypeToPreviewActionMap:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
+ (id)createPreviewActionForAssetCollection:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
+ (id)createBarButtonItemForAssetCollection:(id)arg1 withTarget:(id)arg2 action:(SEL)arg3;
+ (_Bool)canPerformOnAssetCollection:(id)arg1 people:(id)arg2;
- (void)performUserInteractionTask;

@end
