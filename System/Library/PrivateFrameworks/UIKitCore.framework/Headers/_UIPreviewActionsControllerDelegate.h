/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:01 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIPreviewActionsControllerDelegate <NSObject>
@required
-(CGSize*)maximumPreviewActionsViewSizeForPreviewActionsController:(id)arg1;
-(void)previewActionsController:(id)arg1 didCompleteWithSelectedAction:(id)arg2;
-(void)didDismissPreviewActionsController:(id)arg1;
-(CGPoint*)initialPlatterPositionForPreviewActionsController:(id)arg1;
-(void)previewActionsController:(id)arg1 didUpdatePlatterTranslation:(CGVector)arg2 withVelocity:(CGVector)arg3;

@end
