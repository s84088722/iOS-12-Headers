/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:48:57 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WCMessage, NSDate;

@interface WCQueuedMessage : NSObject {

	WCMessage* _message;
	/*^block*/id _completionHandler;
	NSDate* _creationDate;
	long long _retryCount;

}

@property (retain) WCMessage * message;                  //@synthesize message=_message - In the implementation block
@property (copy) id completionHandler;                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) NSDate * creationDate;              //@synthesize creationDate=_creationDate - In the implementation block
@property (assign) long long retryCount;                 //@synthesize retryCount=_retryCount - In the implementation block
-(void)setRetryCount:(long long)arg1 ;
-(long long)retryCount;
-(NSDate *)creationDate;
-(id)initWithMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)description;
-(void)setMessage:(WCMessage *)arg1 ;
-(WCMessage *)message;
-(long long)compare:(id)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
@end
