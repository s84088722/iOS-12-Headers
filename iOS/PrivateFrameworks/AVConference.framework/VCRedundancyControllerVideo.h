//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCRedundancyControllerProtocol-Protocol.h>

@class AVCStatisticsCollector, NSString;
@protocol VCRedundancyControlAlgorithm;

__attribute__((visibility("hidden")))
@interface VCRedundancyControllerVideo : NSObject <VCRedundancyControllerProtocol>
{
    id _redundancyControllerDelegate;
    AVCStatisticsCollector *_statisticsCollector;
    unsigned int _mode;
    id <VCRedundancyControlAlgorithm> _algorithm;
    unsigned int _currentRedundancyPercentage;
    int _forceRedundancyPercentage;
    double _lastDefaultSettingLoadingTime;
    int _type;
    unsigned long long _statisticsID;
}

@property(nonatomic) unsigned long long statisticsID; // @synthesize statisticsID=_statisticsID;
- (void)loadDefaultSettings;
- (void)reportRedundancyPercentage:(unsigned int)arg1 redundancyInterval:(double)arg2;
- (void)updateRedundancyStrategyWithNetworkStatistics:(CDStruct_48a7b5a5)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 statisticsCollector:(id)arg2 mode:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

