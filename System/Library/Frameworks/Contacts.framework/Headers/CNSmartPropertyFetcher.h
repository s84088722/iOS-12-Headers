/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:26:24 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/CNKeyDescriptor_Private.h>

@class NSString;

@interface CNSmartPropertyFetcher : NSObject <CNKeyDescriptor_Private>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)_cn_requiredKeys;
-(id)_cn_optionalKeys;
-(void)_cn_executeGetterForRepresentedKeys:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
