/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:01:26 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilPairingUI/PencilPairingUI-Structs.h>
#import <UIKitCore/UIView.h>

@class PNPPencilView, PNPSyntheticPencilInteractionEventSource;

@interface PNPHardwareView : UIView {

	PNPPencilView* _pencilView;
	PNPSyntheticPencilInteractionEventSource* _eventSource;
	unsigned long long _animationType;

}

@property (assign,nonatomic) unsigned long long animationType;              //@synthesize animationType=_animationType - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setAnimationType:(unsigned long long)arg1 ;
-(unsigned long long)animationType;
@end

