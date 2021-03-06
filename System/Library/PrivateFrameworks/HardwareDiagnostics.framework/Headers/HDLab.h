/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:52:01 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/HardwareDiagnostics.framework/HardwareDiagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary;

@interface HDLab : NSObject {

	NSMutableDictionary* _experiments;
	NSMutableDictionary* _analyses;
	NSMutableDictionary* _diagnostics;

}

@property (nonatomic,readonly) NSDictionary * availableExperiments; 
@property (nonatomic,readonly) NSDictionary * availableAnalyses; 
@property (nonatomic,readonly) NSDictionary * availableDiagnostics; 
+(id)defaultLab;
-(NSDictionary *)availableExperiments;
-(void)addDiagnosticWithName:(id)arg1 experimentName:(id)arg2 analysisName:(id)arg3 block:(/*^block*/id)arg4 ;
-(id)experimentWithName:(id)arg1 ;
-(id)analysisWithName:(id)arg1 ;
-(void)addDiagnosticWithName:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)addExperimentWithName:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)addAnalysisWithName:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)addDiagnosticWithName:(id)arg1 summary:(id)arg2 experimentName:(id)arg3 analysisName:(id)arg4 ;
-(id)diagnosticWithName:(id)arg1 ;
-(NSDictionary *)availableAnalyses;
-(NSDictionary *)availableDiagnostics;
-(id)init;
@end

