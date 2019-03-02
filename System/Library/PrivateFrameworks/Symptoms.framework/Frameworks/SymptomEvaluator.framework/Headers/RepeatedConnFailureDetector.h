/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:55:07 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSMutableDictionary, NSDate;

@interface RepeatedConnFailureDetector : NSObject {

	NSSet* _whitelistedDaemons;
	NSMutableDictionary* _flowRecords;
	NSMutableDictionary* _reportDampeners;
	NSDate* _lastFlush;

}
-(void)noteSuspectFlow:(id)arg1 withOwner:(id)arg2 ;
-(void)_excessiveConnFailuresDetectedOn:(id)arg1 owner:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_flush;
@end
