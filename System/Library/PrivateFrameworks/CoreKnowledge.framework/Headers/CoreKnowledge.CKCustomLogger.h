/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:42:04 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CoreKnowledge.CKCustomLogger : NSObject {

	 name;
	 level;
	 settings;
	 enabled;
	 defaultSettings;

}

@property (readonly,nonatomic) NSString * name; 
@property (assign,nonatomic) BOOL enabled; 
-(void)setFormatWithName:(BOOL)arg1 file:(BOOL)arg2 method:(BOOL)arg3 ;
-(id)init;
-(NSString *)name;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)enabled;
@end

