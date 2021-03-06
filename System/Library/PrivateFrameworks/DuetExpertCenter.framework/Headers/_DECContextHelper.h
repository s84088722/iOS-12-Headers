/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:33:35 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _CDLocalContext;
@interface _DECContextHelper : NSObject {

	id<_CDLocalContext> _context;

}

@property (nonatomic,readonly) id<_CDLocalContext> context;              //@synthesize context=_context - In the implementation block
+(id)sharedInstance;
-(id)fetchContextValueForKeyPath:(id)arg1 ;
-(id)fetchDataDictionaryForKeyPath:(id)arg1 ;
-(void)registerForNotifications:(id)arg1 ;
-(id)init;
-(id<_CDLocalContext>)context;
@end

