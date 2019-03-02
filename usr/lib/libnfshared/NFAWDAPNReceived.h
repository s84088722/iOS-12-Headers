/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:40:03 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCTSMAPNReceivedEvent, NSString;

@interface NFAWDAPNReceived : NSObject <NFAWDEventProtocol> {

	AWDNFCTSMAPNReceivedEvent* _metric;

}

@property (nonatomic,retain) AWDNFCTSMAPNReceivedEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)getMetricId;
-(id)getMetric;
-(void)setMetric:(AWDNFCTSMAPNReceivedEvent *)arg1 ;
-(AWDNFCTSMAPNReceivedEvent *)metric;
-(id)init;
-(void)dealloc;
@end
