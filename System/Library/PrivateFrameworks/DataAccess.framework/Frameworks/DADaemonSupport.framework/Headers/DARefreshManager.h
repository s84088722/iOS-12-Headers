/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:39:29 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableSet, APSConnection, NSTimer, NSObject;

@interface DARefreshManager : NSObject {

	BOOL _persistAPSAfterShutdown;
	BOOL _dailyRefreshInitialized;
	NSMutableDictionary* _enabledTopicWrappersByEnv;
	NSMutableDictionary* _suspendedTopicWrappersByEnv;
	NSMutableSet* _wrappers;
	NSMutableSet* _wrappersForDailyRefresh;
	APSConnection* _connection;
	NSMutableDictionary* _apsConnections;
	NSTimer* _tokenRegistrationTimer;
	NSObject*<OS_dispatch_queue> _pcQueue;

}

@property (nonatomic,retain) NSMutableDictionary * enabledTopicWrappersByEnv;                //@synthesize enabledTopicWrappersByEnv=_enabledTopicWrappersByEnv - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * suspendedTopicWrappersByEnv;              //@synthesize suspendedTopicWrappersByEnv=_suspendedTopicWrappersByEnv - In the implementation block
@property (nonatomic,retain) NSMutableSet * wrappers;                                        //@synthesize wrappers=_wrappers - In the implementation block
@property (nonatomic,retain) NSMutableSet * wrappersForDailyRefresh;                         //@synthesize wrappersForDailyRefresh=_wrappersForDailyRefresh - In the implementation block
@property (assign,nonatomic) BOOL dailyRefreshInitialized;                                   //@synthesize dailyRefreshInitialized=_dailyRefreshInitialized - In the implementation block
@property (nonatomic,retain) APSConnection * connection;                                     //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * apsConnections;                           //@synthesize apsConnections=_apsConnections - In the implementation block
@property (nonatomic,retain) NSTimer * tokenRegistrationTimer;                               //@synthesize tokenRegistrationTimer=_tokenRegistrationTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> pcQueue;                           //@synthesize pcQueue=_pcQueue - In the implementation block
@property (assign,nonatomic) BOOL persistAPSAfterShutdown;                                   //@synthesize persistAPSAfterShutdown=_persistAPSAfterShutdown - In the implementation block
+(id)sharedManager;
-(id)stateString;
-(void)pushPreferenceDidChange;
-(void)establishAllApsConnections;
-(void)setPersistAPSAfterShutdown:(BOOL)arg1 ;
-(void)_tearDownAllApsConnections;
-(id)_apsEnvStringForDAEnvString:(id)arg1 ;
-(id)_connectionForEnv:(id)arg1 ;
-(void)_registerAPSTopicsForDelegates:(id)arg1 withConnection:(id)arg2 ;
-(void)_registerAPSTopics;
-(int)_currentTruePCStyleForDelegate:(id)arg1 ;
-(id)_enabledTopicsForWrapper:(id)arg1 ;
-(id)_suspendedTopicsForWrapper:(id)arg1 ;
-(void)_resumeTopicsForSuspendedDelegate:(id)arg1 ;
-(void)_suspendTopicsForDelegate:(id)arg1 ;
-(id)_refreshWrapperForDelegate:(id)arg1 ;
-(void)_unregisterTopicLocked:(id)arg1 forDelegate:(id)arg2 inEnvironment:(id)arg3 ;
-(void)_dailyRefreshActivityFired;
-(BOOL)_wrapperIsSuspended:(id)arg1 ;
-(void)_unregisterWrapper:(id)arg1 forTopic:(id)arg2 inTopicDictionary:(id)arg3 ;
-(void)_tearDownAPS;
-(int)_overriddenPCStyleForWrapper:(id)arg1 ;
-(void)_pushRegistrationForDelegateFailed:(id)arg1 ;
-(void)_performBlockOnRefreshManagerThread:(/*^block*/id)arg1 ;
-(void)startDailyRefreshActivityForWrapper:(id)arg1 ;
-(void)endDailyRefreshActivityForWrapper:(id)arg1 ;
-(void)registerTopic:(id)arg1 forDelegate:(id)arg2 inEnvironment:(id)arg3 ;
-(void)unregisterTopic:(id)arg1 forDelegate:(id)arg2 inEnvironment:(id)arg3 ;
-(void)delegateDidCompleteRefresh:(id)arg1 ;
-(void)retryRefreshForDelegate:(id)arg1 withCollections:(id)arg2 after:(double)arg3 originalRefreshReason:(int)arg4 ;
-(id)pushTokenForEnvironment:(id)arg1 ;
-(BOOL)persistAPSAfterShutdown;
-(NSMutableDictionary *)enabledTopicWrappersByEnv;
-(void)setEnabledTopicWrappersByEnv:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)suspendedTopicWrappersByEnv;
-(void)setSuspendedTopicWrappersByEnv:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)wrappers;
-(void)setWrappers:(NSMutableSet *)arg1 ;
-(NSMutableSet *)wrappersForDailyRefresh;
-(void)setWrappersForDailyRefresh:(NSMutableSet *)arg1 ;
-(BOOL)dailyRefreshInitialized;
-(void)setDailyRefreshInitialized:(BOOL)arg1 ;
-(NSMutableDictionary *)apsConnections;
-(void)setApsConnections:(NSMutableDictionary *)arg1 ;
-(NSTimer *)tokenRegistrationTimer;
-(void)setTokenRegistrationTimer:(NSTimer *)arg1 ;
-(NSObject*<OS_dispatch_queue>)pcQueue;
-(void)setPcQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)registerDelegate:(id)arg1 ;
-(void)unregisterDelegate:(id)arg1 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(id)_portNameForEnvironmentName:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(APSConnection *)connection;
-(void)setConnection:(APSConnection *)arg1 ;
@end

