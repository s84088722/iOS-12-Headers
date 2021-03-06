/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:44:06 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet;


@protocol HUQuickControlContentCharacteristicWriting <NSObject>
@property (assign,nonatomic,__weak) id<HUQuickControlContentCharacteristicWritingDelegate> characteristicWritingDelegate; 
@property (nonatomic,copy,readonly) NSSet * affectedCharacteristics; 
@required
-(id)overrideValueForCharacteristic:(id)arg1;
-(NSSet *)affectedCharacteristics;
-(void)setCharacteristicWritingDelegate:(id)arg1;
-(id<HUQuickControlContentCharacteristicWritingDelegate>)characteristicWritingDelegate;

@end

