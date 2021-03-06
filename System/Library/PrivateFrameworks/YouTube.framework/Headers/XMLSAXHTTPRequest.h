/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:45:42 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@class NSURLRequest, NSURLConnection, NSMutableData, NSString;

@interface XMLSAXHTTPRequest : NSObject <NSURLConnectionDelegate> {

	NSURLRequest* _request;
	NSURLConnection* _connection;
	NSMutableData* _rawData;
	BOOL _invalidResponse;
	xmlSAXHandler* _saxHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned)uniqueQueryID;
+(id)serviceUnavailableError;
+(BOOL)anyRequestLoading;
+(id)authenticationFailureError;
-(void)_finishedLoading;
-(BOOL)receivedValidResponse:(id)arg1 ;
-(void)loadStatusChanged;
-(void)willParseData;
-(void)_startedLoading;
-(int)parseData:(id)arg1 ;
-(void)didParseData;
-(id)init;
-(void)dealloc;
-(void)cancel;
-(void)failWithError:(id)arg1 ;
-(id)request;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)loadRequest:(id)arg1 ;
-(BOOL)isLoading;
@end

