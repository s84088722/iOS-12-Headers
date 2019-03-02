/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:20:51 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Security.framework/Security
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Security/Security-Structs.h>
#import <libobjc.A.dylib/OS_sec_trust.h>

@class NSString;

@interface SecConcrete_sec_trust : NSObject <OS_sec_trust> {

	SecTrustRef trust;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTrust:(SecTrustRef)arg1 ;
-(void)dealloc;
@end
