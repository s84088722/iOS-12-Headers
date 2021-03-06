/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:36:27 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoMetaAnalyzer.h>

@class NSMutableData, VCPVideoMetaFocusAnalyzer, VCPVideoMetaMotionAnalyzer;

@interface VCPVideoMetaLivePhotoMetaAnalyzer : VCPVideoMetaAnalyzer {

	CGVector _prevEstimatedCenterMv;
	NSMutableData* _deSerializedMetaBuffer;
	VCPVideoMetaFocusAnalyzer* _metaFocusAnalyzer;
	VCPVideoMetaMotionAnalyzer* _metaMotionAnalyzer;

}
+(id)defaultDesiredKeys;
-(id)privateResults;
-(int)processMetadataGroup:(id)arg1 flags:(unsigned long long*)arg2 ;
-(int)finalizeAnalysis;
-(int)convertLivePhotoStruct:(FigLivePhotoMetadata*)arg1 toDictionary:(id)arg2 ;
-(int)convertLivePhotoBinary:(id)arg1 toDictionary:(id)arg2 ;
-(id)init;
@end

