/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:26:25 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/CNRegulatoryLogger.h>

@class NSString;

@interface _CNRegulatoryLogger : NSObject <CNRegulatoryLogger> {

	ct_green_tea_logger_sRef _log;

}

@property (nonatomic,readonly) ct_green_tea_logger_sRef log;              //@synthesize log=_log - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)readingContactsData;
-(void)modifyingContactsData;
-(void)readAndTransmittingContactsData;
-(id)init;
-(void)dealloc;
-(ct_green_tea_logger_sRef)log;
@end
