/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:40:47 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _SUICEditScriptData <NSObject>
@required
+(id)EditScriptDataWithString:(id)arg1 chunkSize:(long long)arg2;
+(id)EditScriptDataWithArray:(id)arg1;
-(long long)indexOfFirstDifferenceWithOtherData:(id)arg1 shouldReverseIterate:(BOOL)arg2 fallsOnWordBoundary:(BOOL*)arg3;
-(long long)length;
-(id)stringValue;
-(id)stringAtIndex:(long long)arg1;
-(long long)lengthOfItem:(long long)arg1;
-(long long)characterIndexForItem:(long long)arg1;

@end
