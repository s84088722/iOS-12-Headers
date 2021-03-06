/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:53:31 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NearField/NFFieldNotification.h>

@class NSArray;

@interface NFFieldNotificationECP2_0 : NFFieldNotification {

	unsigned char _odaRequired;
	unsigned char _terminalSubType;
	unsigned long long _terminalType;
	NSArray* _tciArray;

}

@property (readonly) unsigned char odaRequired;                    //@synthesize odaRequired=_odaRequired - In the implementation block
@property (readonly) unsigned long long terminalType;              //@synthesize terminalType=_terminalType - In the implementation block
@property (readonly) unsigned char terminalSubType;                //@synthesize terminalSubType=_terminalSubType - In the implementation block
@property (retain,readonly) NSArray * tciArray;                    //@synthesize tciArray=_tciArray - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)tciArray;
-(unsigned long long)terminalType;
-(unsigned char)odaRequired;
-(unsigned char)terminalSubType;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
@end

