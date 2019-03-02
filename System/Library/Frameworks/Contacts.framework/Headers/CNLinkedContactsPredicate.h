/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:26:24 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNSuggestedContactPredicate.h>

@class CNContact, NSString;

@interface CNLinkedContactsPredicate : CNPredicate <CNSuggestedContactPredicate> {

	CNContact* _contact;
	NSString* _contactIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) CNContact * contact;                       //@synthesize contact=_contact - In the implementation block
@property (nonatomic,copy,readonly) NSString * contactIdentifier;              //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)contactIdentifier;
-(id)initWithContactIdentifier:(id)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(CNContact *)contact;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
@end
