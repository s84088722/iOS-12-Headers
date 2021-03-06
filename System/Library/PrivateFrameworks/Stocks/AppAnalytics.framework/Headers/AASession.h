/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:02:09 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Stocks/AppAnalytics.framework/AppAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSDictionary;

@interface AASession : NSObject {

	 identifier;
	 kind;
	 name;
	 startDate;
	 sessionData;

}

@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) long long kind; 
@property (readonly,nonatomic) NSString * name; 
@property (readonly,nonatomic) NSDate * startDate; 
@property (readonly,nonatomic) NSDictionary * sessionData; 
-(NSDate *)startDate;
-(NSDictionary *)sessionData;
-(id)init;
-(NSString *)identifier;
-(NSString *)name;
-(long long)kind;
@end

