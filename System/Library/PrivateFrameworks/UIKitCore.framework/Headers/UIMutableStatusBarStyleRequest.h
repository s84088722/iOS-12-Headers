/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:06 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBarStyleRequest.h>

@class UIColor, NSNumber;

@interface UIMutableStatusBarStyleRequest : UIStatusBarStyleRequest

@property (assign,nonatomic) long long style; 
@property (assign,getter=isLegacy,nonatomic) BOOL legacy; 
@property (assign,nonatomic) long long legibilityStyle; 
@property (nonatomic,retain) UIColor * foregroundColor; 
@property (assign,nonatomic) double foregroundAlpha; 
@property (nonatomic,retain) NSNumber * overrideHeight; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(void)setForegroundAlpha:(double)arg1 ;
-(void)setLegacy:(BOOL)arg1 ;
-(void)setLegibilityStyle:(long long)arg1 ;
-(void)setOverrideHeight:(NSNumber *)arg1 ;
@end
