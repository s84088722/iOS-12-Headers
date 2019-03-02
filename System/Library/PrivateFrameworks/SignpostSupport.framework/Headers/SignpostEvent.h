/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:45:00 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SignpostSupport/SignpostSupport-Structs.h>
#import <SignpostSupport/SignpostObject.h>
#import <SignpostSupport/SignpostSupportLoggingSupportArchiveEvent.h>

@class NSUUID, NSString, NSArray;

@interface SignpostEvent : SignpostObject <SignpostSupportLoggingSupportArchiveEvent> {

	BOOL __hasTotalFrames;
	BOOL _isAnimationStart;
	int _tv_usec;
	int _tz_minuteswest;
	int _tz_dsttime;
	int _processID;
	long long _tv_sec;
	unsigned long long _processUniqueID;
	unsigned long long _threadID;
	unsigned long long _eventType;
	unsigned long long _overridingBeginMachContinuousTime;
	unsigned long long _overridingEndMachContinuousTime;
	unsigned long long _overridingEmitMachContinuousTime;
	NSUUID* _processImageUUID;
	NSString* _processImagePath;
	NSString* _processName;
	NSString* _metadata;
	NSArray* _metadataSegments;
	unsigned long long __totalFrameCount;
	unsigned long long __machContinuousTimestamp;

}

@property (assign,nonatomic) BOOL _hasTotalFrames;                                              //@synthesize _hasTotalFrames=__hasTotalFrames - In the implementation block
@property (assign,nonatomic) unsigned long long _totalFrameCount;                               //@synthesize _totalFrameCount=__totalFrameCount - In the implementation block
@property (assign,nonatomic) BOOL isAnimationStart;                                             //@synthesize isAnimationStart=_isAnimationStart - In the implementation block
@property (assign,nonatomic) long long tv_sec;                                                  //@synthesize tv_sec=_tv_sec - In the implementation block
@property (assign,nonatomic) int tv_usec;                                                       //@synthesize tv_usec=_tv_usec - In the implementation block
@property (assign,nonatomic) int tz_minuteswest;                                                //@synthesize tz_minuteswest=_tz_minuteswest - In the implementation block
@property (assign,nonatomic) int tz_dsttime;                                                    //@synthesize tz_dsttime=_tz_dsttime - In the implementation block
@property (assign,nonatomic) unsigned long long _machContinuousTimestamp;                       //@synthesize _machContinuousTimestamp=__machContinuousTimestamp - In the implementation block
@property (assign,nonatomic) int processID;                                                     //@synthesize processID=_processID - In the implementation block
@property (assign,nonatomic) unsigned long long processUniqueID;                                //@synthesize processUniqueID=_processUniqueID - In the implementation block
@property (assign,nonatomic) unsigned long long threadID;                                       //@synthesize threadID=_threadID - In the implementation block
@property (nonatomic,retain) NSUUID * processImageUUID;                                         //@synthesize processImageUUID=_processImageUUID - In the implementation block
@property (nonatomic,retain) NSString * processImagePath;                                       //@synthesize processImagePath=_processImagePath - In the implementation block
@property (nonatomic,retain) NSString * processName;                                            //@synthesize processName=_processName - In the implementation block
@property (nonatomic,retain) NSString * metadata;                                               //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) NSArray * metadataSegments;                                        //@synthesize metadataSegments=_metadataSegments - In the implementation block
@property (assign,nonatomic) unsigned long long eventType;                                      //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) NSString * _key; 
@property (nonatomic,readonly) BOOL overridesTime; 
@property (assign,nonatomic) unsigned long long overridingBeginMachContinuousTime;              //@synthesize overridingBeginMachContinuousTime=_overridingBeginMachContinuousTime - In the implementation block
@property (assign,nonatomic) unsigned long long overridingEndMachContinuousTime;                //@synthesize overridingEndMachContinuousTime=_overridingEndMachContinuousTime - In the implementation block
@property (assign,nonatomic) unsigned long long overridingEmitMachContinuousTime;               //@synthesize overridingEmitMachContinuousTime=_overridingEmitMachContinuousTime - In the implementation block
@property (nonatomic,readonly) unsigned long long timeRecordedMachContinuousTime; 
@property (nonatomic,readonly) unsigned long long timeRecordedNanoseconds; 
@property (nonatomic,readonly) BOOL overridesBeginTime; 
@property (nonatomic,readonly) BOOL overridesEndTime; 
@property (nonatomic,readonly) BOOL overridesEmitTime; 
@property (nonatomic,readonly) unsigned long long overridingBeginNanoseconds; 
@property (nonatomic,readonly) unsigned long long overridingEndNanoseconds; 
@property (nonatomic,readonly) unsigned long long overridingEmitNanoseconds; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serializationTypeNumber;
-(id)initWithOSLogEventProxy:(id)arg1 ;
-(unsigned long long)_extractValuesFromStr:(const char*)arg1 strlen:(unsigned long long)arg2 startIndex:(unsigned long long)arg3 results:(metadata_parsing_results*)arg4 ;
-(BOOL)_processName:(id)arg1 formatterName:(id)arg2 formatType:(id)arg3 value:(id)arg4 ;
-(id)_parseMetadata:(id)arg1 ;
-(void)setProcessName:(NSString *)arg1 ;
-(void)setEventType:(unsigned long long)arg1 ;
-(void)setMetadata:(NSString *)arg1 ;
-(void)setProcessID:(int)arg1 ;
-(int)processID;
-(NSUUID *)processImageUUID;
-(unsigned long long)processUniqueID;
-(unsigned long long)threadID;
-(BOOL)isAnimationStart;
-(BOOL)_hasTotalFrames;
-(void)set_totalFrameCount:(unsigned long long)arg1 ;
-(void)set_hasTotalFrames:(BOOL)arg1 ;
-(unsigned long long)startMachContinuousTime;
-(unsigned long long)endMachContinuousTime;
-(unsigned long long)_totalFrameCount;
-(id)humanReadableType;
-(id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)arg1 ;
-(BOOL)overridesBeginTime;
-(unsigned long long)overridingBeginMachContinuousTime;
-(BOOL)overridesEndTime;
-(unsigned long long)overridingEndMachContinuousTime;
-(BOOL)overridesEmitTime;
-(unsigned long long)overridingEmitMachContinuousTime;
-(NSArray *)metadataSegments;
-(void)setIsAnimationStart:(BOOL)arg1 ;
-(void)setOverridingBeginMachContinuousTime:(unsigned long long)arg1 ;
-(void)setOverridingEndMachContinuousTime:(unsigned long long)arg1 ;
-(void)setOverridingEmitMachContinuousTime:(unsigned long long)arg1 ;
-(void)setMetadataSegments:(NSArray *)arg1 ;
-(unsigned long long)_machContinuousTimestamp;
-(long long)tv_sec;
-(int)tv_usec;
-(int)tz_minuteswest;
-(int)tz_dsttime;
-(void)set_machContinuousTimestamp:(unsigned long long)arg1 ;
-(void)setProcessUniqueID:(unsigned long long)arg1 ;
-(void)setProcessImageUUID:(NSUUID *)arg1 ;
-(void)setProcessImagePath:(NSString *)arg1 ;
-(void)setTv_sec:(long long)arg1 ;
-(void)setTv_usec:(int)arg1 ;
-(void)setTz_minuteswest:(int)arg1 ;
-(void)setTz_dsttime:(int)arg1 ;
-(void)_adjustBeginTimeVal:(timeval*)arg1 ;
-(void)_adjustEndTimeVal:(timeval*)arg1 ;
-(id)descriptionStringForColumn:(unsigned long long)arg1 timeFormat:(unsigned long long)arg2 ;
-(float)durationSeconds;
-(unsigned long long)durationMachContinuousTime;
-(BOOL)_overridesOwnTime;
-(unsigned long long)timeRecordedMachContinuousTime;
-(unsigned long long)_resolvedTime;
-(unsigned long long)timeRecordedNanoseconds;
-(void)_adjustTimeStruct:(timeval*)arg1 ;
-(id)initWithSubsystem:(id)arg1 category:(id)arg2 timebaseRatio:(double)arg3 unixDate:(timeval*)arg4 unixTimeZone:(timezone*)arg5 ;
-(unsigned long long)overridingBeginNanoseconds;
-(unsigned long long)overridingEndNanoseconds;
-(unsigned long long)overridingEmitNanoseconds;
-(BOOL)overridesTime;
-(NSString *)processImagePath;
-(void)setThreadID:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)debugDescription;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)_key;
-(NSString *)metadata;
-(unsigned long long)eventType;
-(NSString *)processName;
@end
