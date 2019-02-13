//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface JobSchedulerBootstrapResult : NSObject
{
    long long _jobID;
    NSError *_error;
    unsigned long long _order;
    long long _priority;
    unsigned long long _result;
}

+ (id)newResultForPID:(long long)arg1 withOrder:(unsigned long long)arg2 priority:(long long)arg3;
@property(nonatomic) unsigned long long result; // @synthesize result=_result;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) unsigned long long order; // @synthesize order=_order;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long jobID; // @synthesize jobID=_jobID;
- (void).cxx_destruct;
- (id)_humanReadableResult;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isEqualToBootstrapResult:(id)arg1;
- (long long)compare:(id)arg1;

@end

