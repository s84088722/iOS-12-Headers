/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:29:19 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PDImageDecoder : NSObject
+(id)sharedDecoder;
-(unsigned long long)decodeImageFromData:(id)arg1 orFileURL:(id)arg2 maxSideLength:(long long)arg3 applyOrientationTransform:(BOOL)arg4 waitUntilComplete:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)cancelDecodeRequestForID:(unsigned long long)arg1 ;
@end
