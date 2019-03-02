/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:34:00 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKInternalDrawingViewDelegate <NSObject>
@required
-(void)setIsDrawing:(BOOL)arg1;
-(void)drawingDidChange:(id)arg1;
-(void)renderingDidFinish;
-(BOOL)canBeginDrawingWithTouch:(id)arg1;
-(void)willBeginDrawingWithTouch:(id)arg1;
-(void)didFinishRenderingStroke:(id)arg1 inDrawing:(id)arg2;
-(void)drawingCancelled;

@end
