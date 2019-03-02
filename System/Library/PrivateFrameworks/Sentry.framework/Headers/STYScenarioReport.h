/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:02:00 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Sentry.framework/Sentry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class STYUserScenario, NSString, SignpostInterval, NSMutableDictionary;

@interface STYScenarioReport : NSObject {

	float _observedLatencyInMs;
	float _targetLatencyInMs;
	float _observedFps;
	float _targetFps;
	unsigned long long _scenarioStartTime;
	unsigned long long _scenarioEndTime;
	STYUserScenario* _scenario;
	NSString* _metadata;
	SignpostInterval* _interval;
	NSMutableDictionary* _symptomsSignature;

}

@property (retain) NSString * metadata;                                  //@synthesize metadata=_metadata - In the implementation block
@property (retain) SignpostInterval * interval;                          //@synthesize interval=_interval - In the implementation block
@property (retain) NSMutableDictionary * symptomsSignature;              //@synthesize symptomsSignature=_symptomsSignature - In the implementation block
@property (readonly) float observedLatencyInMs;                          //@synthesize observedLatencyInMs=_observedLatencyInMs - In the implementation block
@property (readonly) float targetLatencyInMs;                            //@synthesize targetLatencyInMs=_targetLatencyInMs - In the implementation block
@property (readonly) float observedFps;                                  //@synthesize observedFps=_observedFps - In the implementation block
@property (readonly) float targetFps;                                    //@synthesize targetFps=_targetFps - In the implementation block
@property (readonly) unsigned long long scenarioStartTime;               //@synthesize scenarioStartTime=_scenarioStartTime - In the implementation block
@property (readonly) unsigned long long scenarioEndTime;                 //@synthesize scenarioEndTime=_scenarioEndTime - In the implementation block
@property (readonly) STYUserScenario * scenario;                         //@synthesize scenario=_scenario - In the implementation block
+(id)reportFromSignpostEvent:(id)arg1 error:(id*)arg2 ;
+(id)reportFromSignpostInterval:(id)arg1 error:(id*)arg2 ;
-(void)setMetadata:(NSString *)arg1 ;
-(STYUserScenario *)scenario;
-(float)observedLatencyInMs;
-(float)targetLatencyInMs;
-(float)observedFps;
-(float)targetFps;
-(id)symptomsSignatureForReport;
-(id)convertDictionaryToString:(id)arg1 ;
-(id)initWithSignpostInterval:(id)arg1 scenario:(id)arg2 error:(id*)arg3 ;
-(id)initWithScenario:(id)arg1 ;
-(unsigned long long)scenarioStartTime;
-(unsigned long long)scenarioEndTime;
-(NSMutableDictionary *)symptomsSignature;
-(void)setSymptomsSignature:(NSMutableDictionary *)arg1 ;
-(NSString *)metadata;
-(void)setInterval:(SignpostInterval *)arg1 ;
-(SignpostInterval *)interval;
@end
