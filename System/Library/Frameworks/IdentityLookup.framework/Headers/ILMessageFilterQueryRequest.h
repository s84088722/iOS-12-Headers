/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:40:05 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ILMessageFilterQueryRequest : NSObject <NSSecureCoding> {

	NSString* _sender;
	NSString* _messageBody;
	NSString* _extensionIdentifier;

}

@property (nonatomic,copy,readonly) NSString * extensionIdentifier;              //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * sender;                                    //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy) NSString * messageBody;                               //@synthesize messageBody=_messageBody - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)messageBody;
-(void)setMessageBody:(NSString *)arg1 ;
-(id)initWithExtensionIdentifier:(id)arg1 ;
-(BOOL)isEqualToRequest:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)sender;
-(NSString *)extensionIdentifier;
-(void)setSender:(NSString *)arg1 ;
@end
