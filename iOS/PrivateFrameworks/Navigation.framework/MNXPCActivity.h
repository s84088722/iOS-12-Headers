//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface MNXPCActivity : NSObject
{
    CDUnknownBlockType _codeBlock;
    _Bool _repeat;
    _Bool _shouldWakeDevice;
    _Bool _useCoreDuetPowerBudgeting;
    _Bool _runOnBattery;
    NSString *_identifier;
    double _tolerance;
    unsigned long long _qualityOfService;
    unsigned long long _networkRequirements;
    NSDate *_scheduledDate;
}

@property(readonly, nonatomic) NSDate *scheduledDate; // @synthesize scheduledDate=_scheduledDate;
@property(readonly, nonatomic) unsigned long long networkRequirements; // @synthesize networkRequirements=_networkRequirements;
@property(readonly, nonatomic) unsigned long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(readonly, nonatomic) double tolerance; // @synthesize tolerance=_tolerance;
@property(readonly, nonatomic) _Bool runOnBattery; // @synthesize runOnBattery=_runOnBattery;
@property(readonly, nonatomic) _Bool useCoreDuetPowerBudgeting; // @synthesize useCoreDuetPowerBudgeting=_useCoreDuetPowerBudgeting;
@property(readonly, nonatomic) _Bool shouldWakeDevice; // @synthesize shouldWakeDevice=_shouldWakeDevice;
@property(readonly, nonatomic) _Bool repeat; // @synthesize repeat=_repeat;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (_Bool)_needsNetworkRequirement:(unsigned long long)arg1;
- (void)invalidate;
- (void)scheduleForDate:(id)arg1 codeBlock:(CDUnknownBlockType)arg2;
- (double)remainingTime;
- (id)initWithIdentifier:(id)arg1 repeat:(_Bool)arg2 shouldWakeDevice:(_Bool)arg3 useCoreDuetPowerBudgeting:(_Bool)arg4 runOnBattery:(_Bool)arg5 tolerance:(double)arg6 qualityOfService:(unsigned long long)arg7 networkRequirements:(unsigned long long)arg8;

@end

