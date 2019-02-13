//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSArray, NSMutableArray;

@interface PHResourceAvailabilityJob : PLDaemonJob
{
    NSMutableArray *_requests;
    NSArray *_cancelledRequestIdentifiers;
}

- (void).cxx_destruct;
- (void)runDaemonSide;
- (void)cancelAll;
- (long long)daemonOperation;
- (_Bool)shouldRunOnDaemonSerialQueue;
- (void)run;
- (id)description;
- (void)encodeToXPCObject:(id)arg1;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (void)addRequest:(id)arg1;

@end

