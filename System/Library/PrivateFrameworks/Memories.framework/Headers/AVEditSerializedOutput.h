/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:53:00 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AVEditSerializedOutput : NSObject
+(id)sharedSerialOutput;
+(void)initialize;
-(id)serializeComposition:(id)arg1 containingAssetURLs:(id)arg2 ;
-(id)serializeVideoComposition:(id)arg1 ;
-(id)serializeAudioMix:(id)arg1 ;
-(void)exportSerializedToURL:(id)arg1 withComposition:(id)arg2 andVideoComposition:(id)arg3 andAudioMix:(id)arg4 ;
@end
