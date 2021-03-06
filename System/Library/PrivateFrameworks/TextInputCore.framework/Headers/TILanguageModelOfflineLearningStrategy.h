/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:35:19 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TILanguageModelOfflineLearningTask;


@protocol TILanguageModelOfflineLearningStrategy <NSObject>
@property (readonly) TILanguageModelOfflineLearningTask * learningTask; 
@required
-(TILanguageModelOfflineLearningTask *)learningTask;
-(BOOL)learnMessages:(id)arg1 withRecipientRecords:(id)arg2;
-(id)filterMessages:(id)arg1;
-(void)didFinishLearning;

@end

