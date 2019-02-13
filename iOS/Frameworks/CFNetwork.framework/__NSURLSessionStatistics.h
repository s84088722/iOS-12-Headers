//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSUUID, PBCodable;

@interface __NSURLSessionStatistics : NSObject
{
    void *report;
    NSUUID *_externallyVisibleNwActivity;
    NSArray *_externallyVisibleConnectionUUIDs;
}

+ (void)fillCFNetworkTransactionMetricStruct:(CDStruct_a2c7495a *)arg1 from:(id)arg2 forTaskUUID:(unsigned char [16])arg3;
+ (int)getNetworkProtocol:(id)arg1;
+ (int)getTaskType:(id)arg1;
+ (CDStruct_34528418 *)createCFNetworkTaskMetrics_s:(id)arg1;
+ (void)reportMetricsToSymptoms:(id)arg1;
@property(retain) NSArray *externallyVisibleConnectionUUIDs; // @synthesize externallyVisibleConnectionUUIDs=_externallyVisibleConnectionUUIDs;
@property(retain) NSUUID *externallyVisibleNwActivity; // @synthesize externallyVisibleNwActivity=_externallyVisibleNwActivity;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBCodable *awdReport;
@property(readonly, nonatomic) unsigned int awdMetricID;
@property(readonly, nonatomic) NSArray *connectionUUIDS;
@property(readonly, nonatomic) NSUUID *nwActivity;
- (void)dealloc;
- (id)initWithCFNetworkReport:(void *)arg1 length:(long long)arg2;

@end

