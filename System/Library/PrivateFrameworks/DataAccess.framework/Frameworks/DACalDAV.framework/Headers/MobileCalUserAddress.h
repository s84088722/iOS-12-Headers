/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:40:36 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MobileCalDAVAccount, NSURL;

@interface MobileCalUserAddress : NSObject {

	MobileCalDAVAccount* _account;
	NSURL* _address;

}

@property (nonatomic,copy) NSURL * address;                                     //@synthesize address=_address - In the implementation block
@property (assign,nonatomic,__weak) MobileCalDAVAccount * account;              //@synthesize account=_account - In the implementation block
+(id)userAddress:(id)arg1 forAccount:(id)arg2 ;
+(id)userAddressFromDictionaryRepresentation:(id)arg1 forAccount:(id)arg2 ;
-(void)setAddress:(NSURL *)arg1 ;
-(NSURL *)address;
-(MobileCalDAVAccount *)account;
-(id)initWithAddress:(id)arg1 account:(id)arg2 ;
-(void)setAccount:(MobileCalDAVAccount *)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end
