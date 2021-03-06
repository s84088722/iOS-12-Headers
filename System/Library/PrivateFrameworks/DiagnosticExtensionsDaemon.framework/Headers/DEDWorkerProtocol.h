/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:51:30 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DEDWorkerProtocol <NSObject>
@required
-(long long)transportType;
-(void)pingSession:(id)arg1;
-(void)listAvailableExtensionsForSession:(id)arg1;
-(void)getSessionStatusWithSession:(id)arg1;
-(void)syncSessionStatusWithSession:(id)arg1;
-(void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 session:(id)arg3;
-(void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 deferRunUntil:(id)arg3 session:(id)arg4;
-(void)scheduleNotificationForSession:(id)arg1;
-(void)cancelNotificationForSession:(id)arg1;
-(void)adoptFiles:(id)arg1 forSession:(id)arg2;
-(void)commitSession:(id)arg1;
-(void)terminateExtension:(id)arg1 info:(id)arg2 session:(id)arg3;
-(void)cancelSession:(id)arg1;

@end

