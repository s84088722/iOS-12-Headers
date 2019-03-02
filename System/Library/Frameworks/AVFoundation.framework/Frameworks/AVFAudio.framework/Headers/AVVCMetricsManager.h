/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:24:23 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class CAReporter, NSMutableDictionary;

@interface AVVCMetricsManager : NSObject {

	CAReporter* mMetricsReporter;
	long long mAudioIssueDetector;
	unsigned long long _voiceTriggerStartHostTime;
	unsigned long long _callToStartRecordHostTime;
	NSMutableDictionary* _publicMetrics;
	NSMutableDictionary* _avvcProfilingInfoDictionary;

}

@property (retain) NSMutableDictionary * publicMetrics;                                 //@synthesize publicMetrics=_publicMetrics - In the implementation block
@property (retain) NSMutableDictionary * avvcProfilingInfoDictionary;                   //@synthesize avvcProfilingInfoDictionary=_avvcProfilingInfoDictionary - In the implementation block
@property (assign,nonatomic) unsigned long long voiceTriggerStartHostTime;              //@synthesize voiceTriggerStartHostTime=_voiceTriggerStartHostTime - In the implementation block
@property (assign,nonatomic) unsigned long long callToStartRecordHostTime;              //@synthesize callToStartRecordHostTime=_callToStartRecordHostTime - In the implementation block
+(void)createSharedManager;
+(void)destroySharedManager;
+(CAMutex*)getLock;
+(id)sharedManager;
-(void)logProfileMetrics:(id)arg1 ;
-(void)resetProfileMetrics;
-(id)retrieveMetrics;
-(void)logSessionMetric:(id)arg1 value:(id)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4 ;
-(int)setAudioIssueDetectorFormat:(CAStreamBasicDescription)arg1 numFrames:(unsigned)arg2 ;
-(int)resetAudioIssueDetector;
-(id)retrieveProfileMetrics;
-(unsigned long long)callToStartRecordHostTime;
-(unsigned long long)voiceTriggerStartHostTime;
-(int)audioIssueDetectorAnalyzeBuffer:(AudioBufferList*)arg1 numFrames:(unsigned)arg2 timeStamp:(const AudioTimeStamp*)arg3 ;
-(void)setPublicMetrics:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)publicMetrics;
-(void)setAvvcProfilingInfoDictionary:(NSMutableDictionary *)arg1 ;
-(void)setVoiceTriggerStartHostTime:(unsigned long long)arg1 ;
-(void)setCallToStartRecordHostTime:(unsigned long long)arg1 ;
-(void)updateWithReporterID:(long long)arg1 ;
-(NSMutableDictionary *)avvcProfilingInfoDictionary;
-(id)getStringDate:(id)arg1 ;
-(void)logSessionMetric:(id)arg1 value:(id)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4 context:(id)arg5 ;
-(void)checkAndUpdateReporterID;
-(BOOL)measureElapseTimeForMetric:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)logSingleMetric:(id)arg1 value:(id)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4 ;
-(void)logRecordAudioFormat:(CAStreamBasicDescription)arg1 ;
-(void)logRecordRoute:(id)arg1 andPlaybackRoute:(id)arg2 ;
-(id)init;
-(void)dealloc;
@end
