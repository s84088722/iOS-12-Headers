/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:32:07 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <Message/MFSASLAuthenticator.h>

@interface _MFNTLMAuthenticator : MFSASLAuthenticator {

	NtlmGeneratorRef _ntlmGeneratorRef;
	int _ntlmError;

}
-(id)responseForServerData:(id)arg1 ;
-(void)setAuthenticationState:(int)arg1 ;
-(void)dealloc;
@end

