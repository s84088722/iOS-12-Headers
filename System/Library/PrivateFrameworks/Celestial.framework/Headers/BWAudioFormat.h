/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:24:18 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWFormat.h>

@class NSDictionary;

@interface BWAudioFormat : BWFormat {

	opaqueCMFormatDescriptionRef _audioFormatDescription;
	NSDictionary* _avAudioSettings;

}

@property (readonly) opaqueCMFormatDescriptionRef audioFormatDescription; 
@property (readonly) NSDictionary * audioCompressionSBPOptions; 
+(id)formatWithAudioFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
+(id)formatForAVAudioSettings:(id)arg1 inputFormat:(id)arg2 ;
+(void)initialize;
-(id)_initWithAudioFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(id)_initForAVAudioSettings:(id)arg1 inputFormat:(id)arg2 ;
-(NSDictionary *)audioCompressionSBPOptions;
-(unsigned)mediaType;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(opaqueCMFormatDescriptionRef)audioFormatDescription;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
@end

