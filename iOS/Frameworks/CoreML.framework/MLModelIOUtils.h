//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MLModelIOUtils : NSObject
{
}

+ (id)orderedFeatureNamesFromInterface:(struct _MLModelDescriptionSpecification *)arg1 forInput:(_Bool)arg2;
+ (id)outputDescriptionFromInterface:(struct _MLModelDescriptionSpecification *)arg1;
+ (id)inputDescriptionFromInterface:(struct _MLModelDescriptionSpecification *)arg1;
+ (id)deserializeMetadataAndInterfaceFromArchive:(struct _MLModelInputArchiver *)arg1 error:(id *)arg2;
+ (_Bool)serializeMetadataAndInterfaceFromSpecification:(struct _MLModelSpecification *)arg1 archive:(struct _MLModelOutputArchiver *)arg2 error:(id *)arg3;
+ (id)deserializeVersionInfoFromArchive:(struct _MLModelInputArchiver *)arg1 error:(id *)arg2;
+ (_Bool)serializeVersionInfo:(id)arg1 archive:(struct _MLModelOutputArchiver *)arg2 error:(id *)arg3;
+ (id)orderedNamesFromProto:(const RepeatedPtrField_6c6d963a *)arg1;
+ (id)descriptionFromProto:(const RepeatedPtrField_6c6d963a *)arg1;
+ (id)populateConstraintsForFeatureDescription:(const struct FeatureDescription *)arg1;
+ (struct _NSRange)rangeFromAllowedSizeRangeProtoMessage:(const struct SizeRange *)arg1;
+ (_Bool)deserializeInterfaceFormat:(struct _MLModelDescriptionSpecification *)arg1 archive:(struct _MLModelInputArchiver *)arg2 error:(id *)arg3;
+ (_Bool)serializeInterfaceFormat:(struct _MLModelDescriptionSpecification *)arg1 archive:(struct _MLModelOutputArchiver *)arg2 error:(id *)arg3;
+ (id)serializeSpecification:(struct _MLModelSpecification *)arg1 toArchive:(struct _MLModelOutputArchiver *)arg2 error:(id *)arg3;
+ (id)versionForSerializedSpecification:(struct _MLModelSpecification *)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)loadFromModelSpecificationInArchive:(struct _MLModelInputArchiver *)arg1 withClass:(Class)arg2 versionInfo:(id)arg3 configuration:(id)arg4 error:(id *)arg5;

@end

