/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:58:10 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTDataProviderDuet.h>
#import <libobjc.A.dylib/RTDataProviderEventProtocol.h>

@class NSString;

@interface RTDataProviderApplication : RTDataProviderDuet <RTDataProviderEventProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)supportedEventClasses;
-(void)populateDataProviderWithHandler:(/*^block*/id)arg1 ;
-(id)supportedEventStreams;
@end

