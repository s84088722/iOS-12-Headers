/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:21:23 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLCaptureScope;
@interface MTLCaptureManager : NSObject {

	BOOL _isCapturing;
	id<MTLCaptureScope> _defaultCaptureScope;

}

@property (retain) id<MTLCaptureScope> defaultCaptureScope;              //@synthesize defaultCaptureScope=_defaultCaptureScope - In the implementation block
@property (readonly) BOOL isCapturing;                                   //@synthesize isCapturing=_isCapturing - In the implementation block
+(id)sharedCaptureManager;
-(id)newCaptureScopeWithDevice:(id)arg1 ;
-(id)newCaptureScopeWithCommandQueue:(id)arg1 ;
-(void)startCaptureWithDevice:(id)arg1 ;
-(void)startCaptureWithCommandQueue:(id)arg1 ;
-(void)startCaptureWithScope:(id)arg1 ;
-(id<MTLCaptureScope>)defaultCaptureScope;
-(void)setDefaultCaptureScope:(id<MTLCaptureScope>)arg1 ;
-(void)stopCapture;
-(BOOL)isCapturing;
-(void)dealloc;
@end
