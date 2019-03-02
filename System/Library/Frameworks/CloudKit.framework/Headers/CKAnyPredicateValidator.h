/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:26:07 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKPredicateValidatorInstance.h>

@class NSArray;

@interface CKAnyPredicateValidator : CKPredicateValidatorInstance {

	NSArray* _validators;

}

@property (nonatomic,retain) NSArray * validators;              //@synthesize validators=_validators - In the implementation block
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(void)setValidators:(NSArray *)arg1 ;
-(id)initWithValidators:(id)arg1 ;
-(NSArray *)validators;
-(id)CKPropertiesDescription;
@end
