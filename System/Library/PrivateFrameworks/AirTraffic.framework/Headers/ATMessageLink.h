/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:32:10 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATMessageLink.h>
@class NSString;


@protocol ATMessageLink <NSObject>
@property (getter=isInitialized,nonatomic,readonly) BOOL initialized; 
@property (getter=isOpen,nonatomic,readonly) BOOL open; 
@property (nonatomic,readonly) int endpointType; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@required
-(int)endpointType;
-(void)removeRequestHandlerForDataClass:(id)arg1;
-(BOOL)isInitialized;
-(void)sendRequest:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)addRequestHandler:(id)arg1 forDataClass:(id)arg2;
-(void)sendResponse:(id)arg1 withProgress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)isOpen;
-(NSString *)identifier;
-(void)removeObserver:(id)arg1;
-(void)addObserver:(id)arg1;
-(void)sendResponse:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end


@class NSString;

@interface ATMessageLink : NSObject <ATMessageLink>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isInitialized,nonatomic,readonly) BOOL initialized; 
@property (getter=isOpen,nonatomic,readonly) BOOL open; 
@property (nonatomic,readonly) int endpointType; 
@property (nonatomic,copy,readonly) NSString * identifier; 
-(int)endpointType;
-(void)removeRequestHandlerForDataClass:(id)arg1 ;
-(BOOL)isInitialized;
-(void)sendRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)addRequestHandler:(id)arg1 forDataClass:(id)arg2 ;
-(void)sendResponse:(id)arg1 withProgress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isOpen;
-(id)init;
-(NSString *)identifier;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)sendResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

