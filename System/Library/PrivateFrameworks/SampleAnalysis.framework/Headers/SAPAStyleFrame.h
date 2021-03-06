/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:01:53 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SampleAnalysis/SampleAnalysis-Structs.h>
@class SAFrame;

@interface SAPAStyleFrame : NSObject {

	SAFrame* _frame;

}

@property (retain) SAFrame * frame;              //@synthesize frame=_frame - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA2*)arg1 bufferLength:(unsigned long long)arg2 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(void*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(NSMutableDictionary*)arg3 ;
-(void)populateReferencesUsingBuffer:(const SCD_Struct_SA2*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(NSMutableDictionary*)arg3 andDataBufferDictionary:(NSMutableDictionary*)arg4 ;
-(void)setFrame:(SAFrame *)arg1 ;
-(SAFrame *)frame;
@end

