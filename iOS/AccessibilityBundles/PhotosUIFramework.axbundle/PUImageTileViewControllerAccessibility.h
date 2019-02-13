//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUIFramework/__PUImageTileViewControllerAccessibility_super.h>

#import <PhotosUIFramework/AXFullScreenTileControllerDelegate-Protocol.h>

@interface PUImageTileViewControllerAccessibility : __PUImageTileViewControllerAccessibility_super <AXFullScreenTileControllerDelegate>
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)_axResetLandmarks;
- (_Bool)removeLandmarks;
- (struct CGPoint)modifiedPointForValue:(id)arg1 inFrame:(struct CGRect)arg2;
- (struct CGRect)rectForValuePoints:(id)arg1 inFrame:(struct CGRect)arg2;
- (struct CGRect)modifyRectToDisplayedScale:(struct CGRect)arg1;
- (id)elementForLandmark:(unsigned long long)arg1 fromLandmarks:(id)arg2 inFaceFrame:(struct CGRect)arg3 cancelAction:(id)arg4 container:(id)arg5;
- (void)addLandmarksForFace:(id)arg1 withName:(id)arg2 toArray:(id)arg3;
- (_Bool)findFaceLandmarks;
- (void)_axApplyLandmarkCustomAction;
- (id)_axImageView;
- (void)_setAXFaces:(id)arg1;
- (id)_axGetFaces;
- (void)_axApplyCustomAction:(id)arg1;
- (id)_axMainImageView;
- (void)assetDidChange;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axApplyAssetToView;
- (_Bool)_axConformsToFullScreenTileControllerDelegate;
- (void)dealloc;

@end

