/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:52:02 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HardwareSupport/HardwareSupport-Structs.h>
#import <libobjc.A.dylib/HSIOSimpleReporting.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HSIORChannelDescription, NSNumber, NSString;

@interface HSIORSample : NSObject <HSIOSimpleReporting, NSCopying> {

	HSIORChannelDescription* _channelDescription;
	NSNumber* _count;

}

@property (nonatomic,retain) HSIORChannelDescription * channelDescription;              //@synthesize channelDescription=_channelDescription - In the implementation block
@property (nonatomic,retain) NSNumber * count;                                          //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) id<HSIOReporting> channel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HSIORChannelDescription *)channelDescription;
-(void)setChannelDescription:(HSIORChannelDescription *)arg1 ;
-(BOOL)isEqualToSample:(id)arg1 ;
-(id)initWithIOReportSampleRef:(CFDictionaryRef)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSNumber *)count;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<HSIOReporting>)channel;
-(void)setCount:(NSNumber *)arg1 ;
@end
