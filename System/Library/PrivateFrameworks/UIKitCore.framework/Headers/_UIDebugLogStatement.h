/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:02:54 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _UIDebugLogStatement : NSObject {

	long long _type;
	unsigned long long _indentLevel;
	NSString* _prefix;
	NSString* _text;

}

@property (assign,nonatomic) long long type;                              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long indentLevel;              //@synthesize indentLevel=_indentLevel - In the implementation block
@property (nonatomic,copy) NSString * prefix;                             //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,copy) NSString * text;                               //@synthesize text=_text - In the implementation block
-(id)init;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSString *)prefix;
-(void)setPrefix:(NSString *)arg1 ;
-(void)setIndentLevel:(unsigned long long)arg1 ;
-(unsigned long long)indentLevel;
@end
