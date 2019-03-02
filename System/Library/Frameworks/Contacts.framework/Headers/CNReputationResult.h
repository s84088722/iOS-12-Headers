/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:26:25 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNReputationHandle;

@interface CNReputationResult : NSObject {

	CNReputationHandle* _handle;
	long long _score;

}

@property (copy,readonly) CNReputationHandle * handle;              //@synthesize handle=_handle - In the implementation block
@property (readonly) long long score;                               //@synthesize score=_score - In the implementation block
+(id)descriptionForScore:(long long)arg1 ;
-(CNReputationHandle *)handle;
-(id)initWithHandle:(id)arg1 score:(long long)arg2 ;
-(long long)score;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
