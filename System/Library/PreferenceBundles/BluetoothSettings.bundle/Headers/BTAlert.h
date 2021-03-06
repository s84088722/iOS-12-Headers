/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:49:09 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BTAlertDelegate;
@class UIAlertView, BTSDevice;

@interface BTAlert : NSObject {

	id<BTAlertDelegate> _delegate;
	UIAlertView* _alert;
	BTSDevice* _device;

}
-(void)showAlertWithResult:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)dismiss;
@end

