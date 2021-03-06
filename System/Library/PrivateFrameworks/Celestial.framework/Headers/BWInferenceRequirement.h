/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:24:17 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BWInferenceProvider;
@class BWInferenceConfiguration;

@interface BWInferenceRequirement : NSObject {

	id<BWInferenceProvider> _provider;
	BWInferenceConfiguration* _configuration;

}

@property (nonatomic,readonly) id<BWInferenceProvider> provider;                      //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) BWInferenceConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(id)initWithProvider:(id)arg1 configuration:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(BWInferenceConfiguration *)configuration;
-(id<BWInferenceProvider>)provider;
@end

