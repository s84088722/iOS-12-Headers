//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (TSPObjectSerialization)
+ (id)tsp_decoderResourceNameDictionaryFromMessage:(const RepeatedPtrField_fe6aca30 *)arg1;
+ (id)tsp_decoderDataInfoDictionaryFromMessage:(const RepeatedPtrField_fe6aca30 *)arg1;
+ (id)tsp_identifierToObjectUUIDDictionaryFromMessage:(const RepeatedPtrField_c964a194 *)arg1;
+ (id)tsp_identifierToObjectUUIDDictionaryFromWeakExternalReferences:(id)arg1 updatingComponentInfo:(struct ComponentInfo *)arg2 failIfReferenceIsNotPersisted:(_Bool)arg3 context:(id)arg4 error:(id *)arg5;
- (void)tsp_saveIdentifierToObjectUUIDDictionaryToMessage:(RepeatedPtrField_c964a194 *)arg1;
@end

