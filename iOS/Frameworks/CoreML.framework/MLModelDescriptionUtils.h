//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MLModelDescriptionUtils : NSObject
{
}

+ (_Bool)saveModelDescription:(id)arg1 toSpecification:(struct _MLModelSpecification *)arg2 error:(id *)arg3;
+ (struct ModelDescription *)createModelDescription:(id)arg1 error:(id *)arg2;
+ (void)copyFeatureDescriptionFrom:(id)arg1 to:(struct FeatureDescription *)arg2 error:(id *)arg3;
+ (struct FeatureType *)createFeatureTypeFromFeatureDescription:(id)arg1 error:(id *)arg2;
+ (struct SequenceFeatureType *)getSequenceFeatureTypeFromConstraint:(id)arg1 error:(id *)arg2;
+ (struct DictionaryFeatureType *)getDictionaryFeatureTypeFromConstraint:(id)arg1 error:(id *)arg2;
+ (struct ArrayFeatureType *)getArrayFeatureTypeFromConstraint:(id)arg1;
+ (struct ImageFeatureType *)getImageFeatureTypeFromConstraint:(id)arg1;
+ (struct Metadata *)createMetaData:(id)arg1;

@end

