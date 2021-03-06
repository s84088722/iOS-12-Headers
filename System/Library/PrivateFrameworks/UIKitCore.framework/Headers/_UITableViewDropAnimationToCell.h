/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:07 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UITableViewDropAnimation.h>

@class UITableViewCell, UIDragPreviewParameters;

@interface _UITableViewDropAnimationToCell : _UITableViewDropAnimation {

	UITableViewCell* _cell;
	UIDragPreviewParameters* _previewParameters;

}

@property (assign,nonatomic,__weak) UITableViewCell * cell;                            //@synthesize cell=_cell - In the implementation block
@property (nonatomic,retain) UIDragPreviewParameters * previewParameters;              //@synthesize previewParameters=_previewParameters - In the implementation block
-(UITableViewCell *)cell;
-(id)initWithDragItem:(id)arg1 cell:(id)arg2 previewParameters:(id)arg3 ;
-(void)setCell:(UITableViewCell *)arg1 ;
-(UIDragPreviewParameters *)previewParameters;
-(void)setPreviewParameters:(UIDragPreviewParameters *)arg1 ;
@end

