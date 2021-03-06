/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:59:17 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
#import <QuartzCore/CALayer.h>

@interface APHUDLayer : CALayer {

	CTFontRef _Font;
	CFDictionaryRef _TextAttributes;
	CFArrayRef _Labels;
	CFArrayRef _Values;
	CFArrayRef _Colors;

}
-(void)addLine:(CFStringRef)arg1 withColorIndex:(int)arg2 ;
-(void)setValueAtIndex:(int)arg1 format:(id)arg2 ;
-(void)setValue:(CFStringRef)arg1 atIndex:(int)arg2 ;
-(id)init;
-(void)dealloc;
-(void)drawInContext:(CGContextRef)arg1 ;
@end

