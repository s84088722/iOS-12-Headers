/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:44:01 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class HKQuantity;


@protocol _HDDemoDataModuleDelegate <NSObject>
@property (nonatomic,readonly) long long activityType; 
@property (nonatomic,readonly) HKQuantity * speed; 
@required
-(void)demoDataModule:(id)arg1 didProduceDataObject:(id)arg2;
-(HKQuantity *)speed;
-(long long)activityType;

@end

