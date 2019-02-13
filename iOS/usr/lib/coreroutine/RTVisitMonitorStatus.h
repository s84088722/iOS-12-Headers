//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <coreroutine/NSCopying-Protocol.h>

@interface RTVisitMonitorStatus : NSObject <NSCopying>
{
    _Bool _monitoringVisitIncidents;
    _Bool _monitoringLeechedVisitIncidents;
    _Bool _monitoringLowConfidenceVisitIncidents;
    unsigned long long _engineDependentCount;
}

@property(nonatomic) unsigned long long engineDependentCount; // @synthesize engineDependentCount=_engineDependentCount;
@property(nonatomic) _Bool monitoringLowConfidenceVisitIncidents; // @synthesize monitoringLowConfidenceVisitIncidents=_monitoringLowConfidenceVisitIncidents;
@property(nonatomic) _Bool monitoringLeechedVisitIncidents; // @synthesize monitoringLeechedVisitIncidents=_monitoringLeechedVisitIncidents;
@property(nonatomic) _Bool monitoringVisitIncidents; // @synthesize monitoringVisitIncidents=_monitoringVisitIncidents;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)invalid;
- (id)description;
- (id)initWithMonitoringVisitIncidents:(_Bool)arg1 monitoringLeechedVisitIncidents:(_Bool)arg2 monitoringLowConfidenceVisitIncidents:(_Bool)arg3 engineDependentCount:(unsigned long long)arg4;

@end

