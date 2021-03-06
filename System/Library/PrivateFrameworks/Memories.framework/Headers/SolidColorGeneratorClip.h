/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:52:59 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/MotionGeneratorClip.h>

@class UIColor;

@interface SolidColorGeneratorClip : MotionGeneratorClip {

	UIColor* _color;

}

@property (nonatomic,retain) UIColor * color;              //@synthesize color=_color - In the implementation block
-(id)plistRepresentationFromProject:(id)arg1 ;
-(void)setContentsFromPlist:(id)arg1 inProject:(id)arg2 ;
-(id)generatorEffect;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
@end

