/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:20:56 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /usr/lib/libboringssl.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OS_boringssl_handshake_callback_status.h>

@class NSString;

@interface boringssl_concrete_boringssl_handshake_callback_status : NSObject <OS_boringssl_handshake_callback_status> {

	BOOL complete;
	int message_type;
	/*^block*/id completion_callback;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@end
