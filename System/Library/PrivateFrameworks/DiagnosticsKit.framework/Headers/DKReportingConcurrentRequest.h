/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:51:32 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DiagnosticsKit/DiagnosticsKit-Structs.h>
@class DKExtensionAdapter, NSMutableSet;

@interface DKReportingConcurrentRequest : NSObject {

	DKExtensionAdapter* _generator;
	NSMutableSet* _manifest;

}

@property (nonatomic,retain) DKExtensionAdapter * generator;              //@synthesize generator=_generator - In the implementation block
@property (nonatomic,retain) NSMutableSet * manifest;                     //@synthesize manifest=_manifest - In the implementation block
+(id)concurrentRequestWithGenerator:(id)arg1 ;
-(DKExtensionAdapter *)generator;
-(id)initWithGenerator:(id)arg1 ;
-(NSMutableSet *)manifest;
-(void)setManifest:(NSMutableSet *)arg1 ;
-(void)setGenerator:(DKExtensionAdapter *)arg1 ;
@end

