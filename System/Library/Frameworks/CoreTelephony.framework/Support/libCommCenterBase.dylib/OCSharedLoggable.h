/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:40:53 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/libCommCenterBase.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libCommCenterBase.dylib/libCommCenterBase.dylib-Structs.h>
@interface OCSharedLoggable : NSObject {

	queue* _queue;
	OsLogContext* _logContext;

}

@property (assign,getter=getQueue,nonatomic) queue* queue;                               //@synthesize queue=_queue - In the implementation block
@property (assign,getter=getLogContext,nonatomic) OsLogContext* logContext;              //@synthesize logContext=_logContext - In the implementation block
-(void)executeBlock:(/*^block*/id)arg1 ;
-(id)initWithQueue:(queue*)arg1 logContext:(OsLogContext*)arg2 ;
-(id)initWithName:(const char*)arg1 qosClass:(unsigned)arg2 logContext:(OsLogContext*)arg3 ;
-(void)executeFunction:(function<void ()>*)arg1 ;
-(queue*)getQueue;
-(OsLogContext*)getLogContext;
-(void)setLogContext:(OsLogContext*)arg1 ;
-(void)setQueue:(queue*)arg1 ;
@end
