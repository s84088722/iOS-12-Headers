//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKPredicateValidatorInstance.h>

@protocol CKObjectValidating;

__attribute__((visibility("hidden")))
@interface CKConstantValueExpressionValidator : CKPredicateValidatorInstance
{
    id <CKObjectValidating> _validator;
}

@property(retain, nonatomic) id <CKObjectValidating> validator; // @synthesize validator=_validator;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (_Bool)validate:(id)arg1 error:(id *)arg2;
- (id)initWithValidator:(id)arg1;

@end

