/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:58:47 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface _LSValidationToken : NSObject <NSSecureCoding> {

	NSData* _payload;
	NSData* _nonce;
	NSData* _HMAC;
	id _owner;

}

@property (assign,nonatomic,__weak) id owner;              //@synthesize owner=_owner - In the implementation block
+(id)HMACWithPayload:(id)arg1 nonce:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isCorrectForPayload:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPayload:(id)arg1 ;
-(id)owner;
-(void)setOwner:(id)arg1 ;
@end
