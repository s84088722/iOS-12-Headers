/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:50:17 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString, NSDictionary;

@interface ASTTestAttributes : NSObject {

	NSNumber* _testId;
	NSString* _version;

}

@property (nonatomic,readonly) NSDictionary * dictionary; 
@property (nonatomic,retain) NSNumber * testId;                        //@synthesize testId=_testId - In the implementation block
@property (nonatomic,retain) NSString * version;                       //@synthesize version=_version - In the implementation block
+(id)attributesWithTestId:(id)arg1 version:(id)arg2 ;
-(NSNumber *)testId;
-(id)initWithTestId:(id)arg1 version:(id)arg2 ;
-(void)setTestId:(NSNumber *)arg1 ;
-(id)init;
-(NSDictionary *)dictionary;
-(id)description;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
@end

