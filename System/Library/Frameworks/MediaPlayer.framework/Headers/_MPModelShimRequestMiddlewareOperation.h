/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:30:58 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>
#import <libobjc.A.dylib/MPMiddlewareOperation.h>

@class NSError, NSArray, _MPModelShimRequestMiddleware, MPModelRequest, NSString;

@interface _MPModelShimRequestMiddlewareOperation : MPAsyncOperation <MPMiddlewareOperation> {

	NSArray* _invalidationObservers;
	/*^block*/id _invalidationHandler;
	_MPModelShimRequestMiddleware* _middleware;
	MPModelRequest* _modelRequest;

}

@property (nonatomic,retain) _MPModelShimRequestMiddleware * middleware;              //@synthesize middleware=_middleware - In the implementation block
@property (nonatomic,retain) MPModelRequest * modelRequest;                           //@synthesize modelRequest=_modelRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,readonly) NSArray * invalidationObservers;                       //@synthesize invalidationObservers=_invalidationObservers - In the implementation block
-(NSArray *)invalidationObservers;
-(_MPModelShimRequestMiddleware *)middleware;
-(void)setMiddleware:(_MPModelShimRequestMiddleware *)arg1 ;
-(id)initWithMiddleware:(id)arg1 modelRequest:(id)arg2 ;
-(MPModelRequest *)modelRequest;
-(void)setModelRequest:(MPModelRequest *)arg1 ;
-(void)execute;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
@end
