/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:40:31 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AutoLoop/AutoLoop-Structs.h>
@interface VideoFrameWriterElement : NSObject {

	CVBufferRef _pixelBuffer;
	long long _frameNumber;
	SCD_Struct_Pr1 _frameTime;

}

@property (assign,nonatomic) CVBufferRef pixelBuffer;               //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (assign,nonatomic) SCD_Struct_Pr1 frameTime;              //@synthesize frameTime=_frameTime - In the implementation block
@property (assign,nonatomic) long long frameNumber;                 //@synthesize frameNumber=_frameNumber - In the implementation block
-(CVBufferRef)pixelBuffer;
-(void)setPixelBuffer:(CVBufferRef)arg1 ;
-(void)DeallocPixBuffer;
-(long long)frameNumber;
-(void)setFrameNumber:(long long)arg1 ;
-(SCD_Struct_Pr1)frameTime;
-(void)setFrameTime:(SCD_Struct_Pr1)arg1 ;
-(void)dealloc;
@end

