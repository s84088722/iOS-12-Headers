/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:20:30 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface CFPDSourceLookUpKey : NSObject {

	CFStringRef domain;
	CFStringRef userName;
	CFStringRef containerPath;
	CFStringRef cloudPath;
	BOOL byHost;
	BOOL managed;
	BOOL managedUsesContainer;
	BOOL cloud;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end
