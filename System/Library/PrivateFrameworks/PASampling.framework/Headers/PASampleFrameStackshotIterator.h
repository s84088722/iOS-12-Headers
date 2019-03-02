/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:42:23 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PASampling/PASampleFrameIterator.h>

@class PAStackshotThread, PASampleKernelFrame, PASampleUserFrame, NSString;

@interface PASampleFrameStackshotIterator : NSObject <PASampleFrameIterator> {

	PAStackshotThread* _stackshotThread;
	PASampleKernelFrame* _kernel;
	PASampleUserFrame* _user;
	BOOL _hideKernelFrames;
	BOOL _hideUserFrames;

}

@property (retain) PAStackshotThread * stackshotThread;              //@synthesize stackshotThread=_stackshotThread - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PAStackshotThread *)stackshotThread;
-(void)setStackshotThread:(PAStackshotThread *)arg1 ;
-(void)iterateFrames:(/*^block*/id)arg1 ;
-(void)exposeUserFramesOnly;
-(void)exposeKernelFramesOnly;
-(void)exposeAllFrames;
@end
