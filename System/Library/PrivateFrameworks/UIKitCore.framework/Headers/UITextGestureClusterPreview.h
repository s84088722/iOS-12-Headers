/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:00 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextGestureCluster.h>

@class UIPreviewItemController;

@interface UITextGestureClusterPreview : UITextGestureCluster {

	UIPreviewItemController* _previewItemController;
	BOOL _detachOnDealloc;

}
-(void)dealloc;
-(id)initWithView:(id)arg1 ;
-(void)detach;
-(BOOL)doesControlDelegate;
-(void)_resetForLink;
-(BOOL)shouldClusterAllowSelectionGestures:(BOOL)arg1 atPoint:(CGPoint)arg2 toBegin:(BOOL)arg3 ;
@end
