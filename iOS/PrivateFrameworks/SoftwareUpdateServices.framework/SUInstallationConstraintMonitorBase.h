//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoftwareUpdateServices/SUInstallationConstraintMonitor-Protocol.h>

@class SUDownload;
@protocol OS_dispatch_queue, SUInstallationConstraintMonitorDelegate;

@interface SUInstallationConstraintMonitorBase : NSObject <SUInstallationConstraintMonitor>
{
    NSObject<OS_dispatch_queue> *_queue;
    SUDownload *_download;
    unsigned long long _representedConstraints;
    id <SUInstallationConstraintMonitorDelegate> _queue_delegate;
}

- (void).cxx_destruct;
- (_Bool)isSatisfied;
@property(nonatomic) id <SUInstallationConstraintMonitorDelegate> delegate;
@property(readonly, nonatomic) unsigned long long unsatisfiedConstraints;
@property(readonly, nonatomic) unsigned long long representedConstraints;
@property(readonly, retain, nonatomic) SUDownload *download;
- (void)dealloc;
- (id)initOnQueue:(id)arg1 withRepresentedInstallationConstraints:(unsigned long long)arg2 andDownload:(id)arg3;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2;

@end

