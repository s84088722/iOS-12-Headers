/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:49:09 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UIActivityIndicatorView;

@interface BTTableCell : PSTableCell {

	int _state;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic) int state;                                      //@synthesize state=_state - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)setDeviceStatePaired:(BOOL)arg1 andConnected:(BOOL)arg2 ;
-(void)setDeviceState:(int)arg1 ;
-(void)dealloc;
-(int)state;
-(void)layoutSubviews;
-(void)setState:(int)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
@end

