//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsDonation/CNDSIMCardMonitor-Protocol.h>

@class CNReplaySubject, CoreTelephonyClient, NSString;
@protocol CNCancelable, CNDCoreTelephonyServices, OS_dispatch_queue;

@interface CNDSIMCardMonitor : NSObject <CNDSIMCardMonitor>
{
    CoreTelephonyClient *_coreTelephonyClient;
    id <CNDCoreTelephonyServices> _coreTelephonyServices;
    CNReplaySubject *_subject;
    id <CNCancelable> _subjectToken;
    struct __CTServerConnection *_serverConnection;
    NSObject<OS_dispatch_queue> *_serverConnectionQueue;
}

+ (void)infoWithClient:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)infoWithCompletion:(CDUnknownBlockType)arg1;
+ (id)phoneNumberObservableWithCoreTelephonyClient:(id)arg1;
+ (id)phoneNumberChangedObservableWithCoreTelephonyServices:(id)arg1 serverConnection:(struct __CTServerConnection *)arg2;
+ (id)continuousPhoneNumberObservableWithCoreTelephonyClient:(id)arg1 services:(id)arg2 serverConnection:(struct __CTServerConnection *)arg3;
+ (id)os_log;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serverConnectionQueue; // @synthesize serverConnectionQueue=_serverConnectionQueue;
@property(nonatomic) struct __CTServerConnection *serverConnection; // @synthesize serverConnection=_serverConnection;
@property(retain, nonatomic) id <CNCancelable> subjectToken; // @synthesize subjectToken=_subjectToken;
@property(readonly, nonatomic) CNReplaySubject *subject; // @synthesize subject=_subject;
@property(readonly, nonatomic) id <CNDCoreTelephonyServices> coreTelephonyServices; // @synthesize coreTelephonyServices=_coreTelephonyServices;
@property(readonly, nonatomic) CoreTelephonyClient *coreTelephonyClient; // @synthesize coreTelephonyClient=_coreTelephonyClient;
- (void).cxx_destruct;
- (void)nts_configureSubjectIfNecessary;
- (void)nts_configureConnectionIfNecessary;
- (void)configureStateIfNecessary;
- (id)addInfoChangeHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithCoreTelephonyClient:(id)arg1 services:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

