/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:59:38 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ExportDelegate <NSObject>
@optional
-(void)exportController:(id)arg1 progressedTo:(float)arg2 preventBackslide:(BOOL)arg3;
-(void)didFinishExport;
-(BOOL)didFinishTestModeExport;
-(void)exportControllerWillStartCopyToCameraRoll:(id)arg1;
-(void)autoExportAlertCompleted;

@end

