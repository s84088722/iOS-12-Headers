/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:53:26 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NTKZeusColorPalette;


@protocol NTKZeusComplicationDisplay <NSObject>
@property (assign,nonatomic) unsigned long long style; 
@property (nonatomic,readonly) NTKZeusColorPalette * palette; 
@required
-(NTKZeusColorPalette *)palette;
-(void)applyPalette:(id)arg1;
-(void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3;
-(void)setStyle:(unsigned long long)arg1;
-(unsigned long long)style;

@end
