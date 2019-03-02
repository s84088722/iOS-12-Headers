/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:29:23 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MLCompilerOptions : NSObject {

	BOOL _dryRun;
	NSString* _platform;
	NSString* _platformVersion;

}

@property (assign) BOOL dryRun;                             //@synthesize dryRun=_dryRun - In the implementation block
@property (retain) NSString * platform;                     //@synthesize platform=_platform - In the implementation block
@property (retain) NSString * platformVersion;              //@synthesize platformVersion=_platformVersion - In the implementation block
+(id)defaultOptions;
-(BOOL)dryRun;
-(void)setDryRun:(BOOL)arg1 ;
-(NSString *)platformVersion;
-(void)setPlatformVersion:(NSString *)arg1 ;
-(void)setPlatform:(NSString *)arg1 ;
-(NSString *)platform;
-(id)init;
@end
