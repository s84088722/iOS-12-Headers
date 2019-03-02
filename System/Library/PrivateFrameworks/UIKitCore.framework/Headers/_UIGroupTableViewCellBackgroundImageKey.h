/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:07 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface _UIGroupTableViewCellBackgroundImageKey : NSObject <NSCopying> {

	BOOL _opaque;
	BOOL _selected;
	int _sectionLocation;
	UIColor* _backgroundColor;
	UIColor* _sectionBorderColor;
	double _sectionCornerRadius;
	double _sectionBorderWidth;
	UIColor* _separatorColor;
	UIColor* _topShadowColor;
	UIColor* _bottomShadowColor;
	UIColor* _fillColor;
	UIColor* _selectionColor;
	double _leftPhase;
	double _rightPhase;
	long long _selectionStyle;
	double _screenScale;
	CGSize _size;

}

@property (assign,nonatomic) BOOL opaque;                               //@synthesize opaque=_opaque - In the implementation block
@property (assign,nonatomic) BOOL selected;                             //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) CGSize size;                               //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                 //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * sectionBorderColor;              //@synthesize sectionBorderColor=_sectionBorderColor - In the implementation block
@property (assign,nonatomic) double sectionCornerRadius;                //@synthesize sectionCornerRadius=_sectionCornerRadius - In the implementation block
@property (assign,nonatomic) double sectionBorderWidth;                 //@synthesize sectionBorderWidth=_sectionBorderWidth - In the implementation block
@property (nonatomic,retain) UIColor * separatorColor;                  //@synthesize separatorColor=_separatorColor - In the implementation block
@property (nonatomic,retain) UIColor * topShadowColor;                  //@synthesize topShadowColor=_topShadowColor - In the implementation block
@property (nonatomic,retain) UIColor * bottomShadowColor;               //@synthesize bottomShadowColor=_bottomShadowColor - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                       //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,retain) UIColor * selectionColor;                  //@synthesize selectionColor=_selectionColor - In the implementation block
@property (assign,nonatomic) double leftPhase;                          //@synthesize leftPhase=_leftPhase - In the implementation block
@property (assign,nonatomic) double rightPhase;                         //@synthesize rightPhase=_rightPhase - In the implementation block
@property (assign,nonatomic) int sectionLocation;                       //@synthesize sectionLocation=_sectionLocation - In the implementation block
@property (assign,nonatomic) long long selectionStyle;                  //@synthesize selectionStyle=_selectionStyle - In the implementation block
@property (assign,nonatomic) double screenScale;                        //@synthesize screenScale=_screenScale - In the implementation block
-(CGSize)size;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setOpaque:(BOOL)arg1 ;
-(UIColor *)backgroundColor;
-(void)setSelected:(BOOL)arg1 ;
-(UIColor *)fillColor;
-(BOOL)selected;
-(void)setSize:(CGSize)arg1 ;
-(UIColor *)separatorColor;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(int)sectionLocation;
-(void)setSectionLocation:(int)arg1 ;
-(double)sectionBorderWidth;
-(void)setSectionBorderWidth:(double)arg1 ;
-(long long)selectionStyle;
-(void)setSelectionStyle:(long long)arg1 ;
-(BOOL)opaque;
-(void)setFillColor:(UIColor *)arg1 ;
-(void)setScreenScale:(double)arg1 ;
-(UIColor *)sectionBorderColor;
-(UIColor *)topShadowColor;
-(UIColor *)bottomShadowColor;
-(void)setBottomShadowColor:(UIColor *)arg1 ;
-(void)setSectionBorderColor:(UIColor *)arg1 ;
-(void)setSectionCornerRadius:(double)arg1 ;
-(void)setTopShadowColor:(UIColor *)arg1 ;
-(void)setSelectionColor:(UIColor *)arg1 ;
-(void)setLeftPhase:(double)arg1 ;
-(void)setRightPhase:(double)arg1 ;
-(double)screenScale;
-(double)sectionCornerRadius;
-(double)leftPhase;
-(double)rightPhase;
-(UIColor *)selectionColor;
@end
