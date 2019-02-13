//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DADaemonSupport/DAAgent.h>

#import <DADaemonSupport/DABabysittable-Protocol.h>

@class CoreDAVOptionsTask, NSString, NSTimer;

@interface DACoreDAVAgent : DAAgent <DABabysittable>
{
    CoreDAVOptionsTask *_optionsProbe;
    NSTimer *_optionsTimeoutTimer;
}

@property(retain, nonatomic) NSTimer *optionsTimeoutTimer; // @synthesize optionsTimeoutTimer=_optionsTimeoutTimer;
@property(retain, nonatomic) CoreDAVOptionsTask *optionsProbe; // @synthesize optionsProbe=_optionsProbe;
- (void).cxx_destruct;
- (id)waiterID;
- (void)_probeAndSyncWithBlock:(CDUnknownBlockType)arg1;
- (void)_serverProbeTimedOut;
- (void)dealloc;
- (void)_cancelOptionsTimer;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

