/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:58:11 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSArray;

@interface RTPredictedApplicationNotification : RTNotification {

	NSArray* _predictedApplications;

}

@property (nonatomic,retain) NSArray * predictedApplications;              //@synthesize predictedApplications=_predictedApplications - In the implementation block
-(id)initWithPredictedApplications:(id)arg1 ;
-(NSArray *)predictedApplications;
-(void)setPredictedApplications:(NSArray *)arg1 ;
@end
