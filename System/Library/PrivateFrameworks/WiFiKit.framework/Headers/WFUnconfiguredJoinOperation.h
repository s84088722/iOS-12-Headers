/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:45:41 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiKit/WFOperation.h>
#import <libobjc.A.dylib/AirPortAssistantControllerDelegate.h>

@class AirPortAssistantController, UINavigationController, UIViewController, NSDictionary;

@interface WFUnconfiguredJoinOperation : WFOperation <AirPortAssistantControllerDelegate> {

	AirPortAssistantController* _airportController;
	UINavigationController* _navigationController;
	UIViewController* _rootViewController;
	NSDictionary* _parameters;

}

@property (nonatomic,retain) AirPortAssistantController * airportController;              //@synthesize airportController=_airportController - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationController;               //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) UIViewController * rootViewController;                       //@synthesize rootViewController=_rootViewController - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;                                   //@synthesize parameters=_parameters - In the implementation block
-(void)airPortAssistantComplete:(id)arg1 result:(int)arg2 context:(id)arg3 animated:(BOOL)arg4 ;
-(id)initWithParameters:(id)arg1 rootViewController:(id)arg2 ;
-(AirPortAssistantController *)airportController;
-(void)setAirportController:(AirPortAssistantController *)arg1 ;
-(UIViewController *)rootViewController;
-(void)setRootViewController:(UIViewController *)arg1 ;
-(UINavigationController *)navigationController;
-(void)start;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(void)finish;
-(void)setNavigationController:(UINavigationController *)arg1 ;
@end

