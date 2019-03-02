/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:24:17 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@interface BWPortraitHDRStagingNode : BWNode {

	os_unfair_lock_s _lock;
	long long _settingsID;
	BOOL _passthroughBuffer;
	opaqueCMSampleBufferRef _stagedBuffer;

}
+(void)initialize;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)bufferReceivedWithFlags:(unsigned)arg1 error:(int)arg2 ;
-(id)init;
-(void)dealloc;
-(id)nodeType;
@end
