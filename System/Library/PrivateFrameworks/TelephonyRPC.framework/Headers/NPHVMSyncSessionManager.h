/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:55:13 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SYSessionDelegate.h>
#import <libobjc.A.dylib/SYChangeSerializer.h>

@protocol NPHVMSessionDelegate;
@class NSMutableArray, NSObject, NSString;

@interface NPHVMSyncSessionManager : NSObject <SYSessionDelegate, SYChangeSerializer> {

	NSMutableArray* _deltaSyncChanges;
	NSMutableArray* _deltaSyncChangeTypes;
	unsigned long long _deltaSyncCurrentIdx;
	/*^block*/id _completionCallback;
	BOOL _cancel;
	BOOL _sessionInvalidated;
	NSObject*<NPHVMSessionDelegate> _vmSessionDelegate;
	/*^block*/id _vmSessionProgressCallback;

}

@property (assign,nonatomic) NSObject*<NPHVMSessionDelegate> vmSessionDelegate;              //@synthesize vmSessionDelegate=_vmSessionDelegate - In the implementation block
@property (nonatomic,copy) id vmSessionProgressCallback;                                     //@synthesize vmSessionProgressCallback=_vmSessionProgressCallback - In the implementation block
@property (assign,nonatomic) BOOL sessionInvalidated;                                        //@synthesize sessionInvalidated=_sessionInvalidated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)sessionInvalidated;
-(id)decodeChangeData:(id)arg1 fromProtocolVersion:(long long)arg2 ofType:(long long)arg3 ;
-(id)dataFromChange:(id)arg1 ;
-(id)changeFromData:(id)arg1 ofType:(long long)arg2 ;
-(id)encodeSYChangeForBackwardCompatibility:(id)arg1 protocolVersion:(long long)arg2 ;
-(long long)syncSession:(id)arg1 enqueueChanges:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)syncSession:(id)arg1 didEndWithError:(id)arg2 ;
-(BOOL)syncSession:(id)arg1 resetDataStoreWithError:(id*)arg2 ;
-(void)setSessionInvalidated:(BOOL)arg1 ;
-(void)enqueueVoicemailChanges:(id)arg1 changeType:(long long)arg2 ;
-(NSObject*<NPHVMSessionDelegate>)vmSessionDelegate;
-(void)setVmSessionDelegate:(NSObject*<NPHVMSessionDelegate>)arg1 ;
-(id)vmSessionProgressCallback;
-(void)setVmSessionProgressCallback:(id)arg1 ;
-(id)init;
-(void)cancel;
@end
