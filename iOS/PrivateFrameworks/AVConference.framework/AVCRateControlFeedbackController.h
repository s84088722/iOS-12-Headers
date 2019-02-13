//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCStatisticsCollector;

__attribute__((visibility("hidden")))
@interface AVCRateControlFeedbackController : NSObject
{
    unsigned int _mode;
    AVCStatisticsCollector *_statisticsCollector;
    unsigned int _feedbackMessageCount;
    unsigned int _remoteTotalPacketReceivedCount;
    _Bool _isFeedbackReceived;
    _Bool _didRegisterPacketReceivedHandler;
    unsigned int _maxBurstyLossCache;
}

@property(nonatomic) unsigned int maxBurstyLossCache; // @synthesize maxBurstyLossCache=_maxBurstyLossCache;
@property(nonatomic) unsigned int mode; // @synthesize mode=_mode;
- (void)setPacketReceivedStatistics:(CDStruct_4c5da9d9)arg1;
- (_Bool)detectOutOfOrderFeedbackMessage:(CDStruct_bcb9d60a)arg1;
- (_Bool)translateMediaControlInfo:(void *)arg1 feedbackMessage:(CDStruct_bcb9d60a *)arg2;
- (CDStruct_bcb9d60a)translateAFRCFeedbackMessage:(struct tagAFRCFB)arg1;
- (CDStruct_bcb9d60a)translateRateControlFeedbackMessageFromData:(id)arg1;
- (id)translateRateControlDataWithFeedbackMessage:(CDStruct_bcb9d60a)arg1;
- (_Bool)processRateControlProbingMessage:(CDStruct_4c345eff)arg1 type:(unsigned int)arg2 error:(id *)arg3;
- (_Bool)processRateControlFeedbackMessage:(CDStruct_bcb9d60a)arg1 type:(unsigned int)arg2 error:(id *)arg3;
- (_Bool)getVCStatisticsFeedbackMessage:(CDStruct_48a7b5a5 *)arg1 time:(double)arg2;
- (_Bool)getRateControlFeedbackMessage:(id *)arg1 type:(unsigned int)arg2 metaData:(id *)arg3 error:(id *)arg4;
- (_Bool)processFeedbackMessage:(id)arg1 type:(unsigned int)arg2 metaData:(id)arg3 error:(id *)arg4;
- (_Bool)getFeedbackMessage:(id *)arg1 type:(unsigned int)arg2 metaData:(id *)arg3 error:(id *)arg4;
- (id)initWithStatisticsCollector:(id)arg1;

@end

