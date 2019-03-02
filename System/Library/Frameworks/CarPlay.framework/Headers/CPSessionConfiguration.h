/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:58:42 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPSessionConfigurationDelegate;
@class CARSessionStatus;

@interface CPSessionConfiguration : NSObject {

	unsigned long long _limitedUserInterfaces;
	id<CPSessionConfigurationDelegate> _delegate;
	CARSessionStatus* _currentStatus;

}

@property (assign,nonatomic) unsigned long long limitedUserInterfaces;                        //@synthesize limitedUserInterfaces=_limitedUserInterfaces - In the implementation block
@property (nonatomic,retain) CARSessionStatus * currentStatus;                                //@synthesize currentStatus=_currentStatus - In the implementation block
@property (assign,nonatomic,__weak) id<CPSessionConfigurationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(unsigned long long)convertLimitableUserInterfaces:(unsigned long long)arg1 ;
-(void)setCurrentStatus:(CARSessionStatus *)arg1 ;
-(CARSessionStatus *)currentStatus;
-(void)_updateLimitedUIStatus;
-(void)setLimitedUserInterfaces:(unsigned long long)arg1 ;
-(unsigned long long)limitedUserInterfaces;
-(void)dealloc;
-(void)setDelegate:(id<CPSessionConfigurationDelegate>)arg1 ;
-(id<CPSessionConfigurationDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)_limitedUIDidChange:(id)arg1 ;
@end
