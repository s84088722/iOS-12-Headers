/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:26:31 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString, NSArray;

@interface SSVRedeemCodeMetadata : NSObject <NSCopying> {

	NSDictionary* _dictionary;
	NSString* _inputCode;

}

@property (nonatomic,readonly) BOOL allowsAutoSubmission; 
@property (nonatomic,readonly) NSDictionary * redeemCodeDictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) NSString * code; 
@property (nonatomic,readonly) NSString * codeType; 
@property (nonatomic,copy) NSString * inputCode;                                 //@synthesize inputCode=_inputCode - In the implementation block
@property (nonatomic,readonly) NSArray * items; 
-(NSString *)codeType;
-(NSDictionary *)redeemCodeDictionary;
-(NSString *)inputCode;
-(BOOL)allowsAutoSubmission;
-(id)initWithRedeemCodeDictionary:(id)arg1 ;
-(void)setInputCode:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)items;
-(NSString *)code;
@end

