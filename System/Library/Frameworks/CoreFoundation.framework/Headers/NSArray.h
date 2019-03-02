/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:20:31 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/MPSectionedIdentifierListIdentifierPair.h>
#import <libobjc.A.dylib/INIntentResolutionResultDataProviding.h>
#import <libobjc.A.dylib/INImageProxyInjecting.h>
#import <libobjc.A.dylib/INCacheableContainer.h>
#import <libobjc.A.dylib/INKeyImageProducing.h>
#import <libobjc.A.dylib/CKRecordValue.h>
#import <libobjc.A.dylib/CSCoderEncoder.h>
#import <libobjc.A.dylib/CUByteCodable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSString, INImage, NSDictionary;

@interface NSArray : NSObject <MPSectionedIdentifierListIdentifierPair, INIntentResolutionResultDataProviding, INImageProxyInjecting, INCacheableContainer, INKeyImageProducing, CKRecordValue, CSCoderEncoder, CUByteCodable, NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>

@property (nonatomic,readonly) BOOL isQueryResultSetInvalidated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * sectionIdentifier; 
@property (nonatomic,readonly) NSString * itemIdentifier; 
@property (nonatomic,readonly) unsigned long long prevailingLocalSecretType; 
@property (nonatomic,readonly) id ic_randomObject; 
@property (nonatomic,readonly) NSDictionary * bw_builtInMicRouteDictionary; 
@property (readonly) INImage * _keyImage; 
@property (nonatomic,readonly) NSArray * mf_tail; 
@property (readonly) unsigned long long count; 
+(void)initialize;
+(id)PDFKitFieldTypeArray;
+(id)PDFKitHighlightingModeArray;
+(id)PDFKitAppearanceDictionaryArray;
+(id)PDFKitBorderStyleArray;
+(id)PDFKitAnnotationKeys;
+(id)PDFKitAnnotationKeysIgnored;
+(id)PDFKitSubtypeArray;
+(void)pk_updateSpecifiers:(id)arg1 withIconsFromCache:(id)arg2 isInterfaceRTL:(BOOL)arg3 ;
+(void)pk_updateSpecifiers:(id)arg1 withIconsFromCache:(id)arg2 ;
+(id)bw_selectedInputsArrayForBuiltInMicRouteDictionary:(id)arg1 dataSource:(id)arg2 polarPattern:(unsigned)arg3 ;
+(id)safari_arrayWithPropertyListData:(id)arg1 options:(unsigned long long)arg2 ;
+(id)safari_arrayFromDictionaryOfObjectsByIndex:(id)arg1 ;
+(id)arrayOfSetsBySplitting:(id)arg1 batchSize:(unsigned long long)arg2 ;
+(id)_arrayWithIntArg:(int)arg1 additionalArgs:(char*)arg2 ;
+(id)cdvArrayWithIntegers:(int)arg1 ;
+(id)_cn_arrayWithObject:(id)arg1 count:(unsigned long long)arg2 ;
+(id)fm_arrayByRepeatingWithCount:(unsigned long long)arg1 generatorBlock:(/*^block*/id)arg2 ;
+(id)fm_arrayWithSafeObject:(id)arg1 ;
+(id)createWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)fp_sortDescriptorByHierarchyPath;
+(id)fp_sortDescriptorByDisplayName;
+(id)fp_sortDescriptorByModifiedDateDescending;
+(id)ak_arrayWithResponseData:(id)arg1 ;
+(id)ak_arrayWithJSONResponseData:(id)arg1 ;
+(id)arrayWithValues:(id)arg1 inBlock:(/*^block*/id)arg2 ;
+(id)arrayByFilteringLaunchProhibitedAppsFrom:(id)arg1 ;
+(id)newWithContentsOf:(id)arg1 immutable:(BOOL)arg2 ;
+(id)arrayWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
+(id)arrayWithContentsOfFile:(id)arg1 ;
+(id)arrayWithContentsOfURL:(id)arg1 ;
+(id)_alloc;
+(id)newArrayWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
+(id)arrayWithArray:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
+(id)arrayWithArray:(id)arg1 range:(NSRange)arg2 ;
+(id)arrayWithArray:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)arrayWithOrderedSet:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
+(id)arrayWithOrderedSet:(id)arg1 range:(NSRange)arg2 ;
+(id)arrayWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)arrayWithOrderedSet:(id)arg1 ;
+(id)arrayWithSet:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)arrayWithSet:(id)arg1 ;
+(id)array;
+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)arrayWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
+(id)arrayWithObject:(id)arg1 ;
+(id)arrayWithObjects:(id)arg1 ;
+(id)arrayWithArray:(id)arg1 ;
-(unsigned long long)indexForInsertingObject:(id)arg1 sortDescriptor:(id)arg2 ;
-(unsigned long long)indexForInsertingObject:(id)arg1 sortFunction:(/*function pointer*/void*)arg2 context:(void*)arg3 ;
-(id)copyGroupIntoDictionary:(/*^block*/id)arg1 ;
-(unsigned long long)indexForInsertingObject:(id)arg1 sortSelector:(SEL)arg2 ;
-(id)firstObjectPassingTest:(/*^block*/id)arg1 ;
-(unsigned long long)countObjectsPassingTest:(/*^block*/id)arg1 ;
-(id)objectsPassingTest:(/*^block*/id)arg1 ;
-(id)firstObjectPassingTest:(/*^block*/id)arg1 ;
-(unsigned long long)countObjectsPassingTest:(/*^block*/id)arg1 ;
-(id)objectsPassingTest:(/*^block*/id)arg1 ;
-(id)_pl_prettyDescriptionWithIndent:(long long)arg1 ;
-(id)_pl_firstObjectPassingTest:(/*^block*/id)arg1 ;
-(id)_pl_indexBy:(/*^block*/id)arg1 ;
-(id)_pl_flatMap:(/*^block*/id)arg1 ;
-(BOOL)_pl_any:(/*^block*/id)arg1 ;
-(id)_pl_groupBy:(/*^block*/id)arg1 ;
-(id)_pl_filter:(/*^block*/id)arg1 ;
-(id)_pl_map:(/*^block*/id)arg1 ;
-(id)pl_shortDescription;
-(unsigned long long)pl_countOfObjectsPassingTest:(/*^block*/id)arg1 ;
-(unsigned long long)pl_indexOfFirstObjectInRange:(NSRange)arg1 passingTest:(/*^block*/id)arg2 ;
-(unsigned long long)pl_indexOfLastObjectInRange:(NSRange)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)pl_arrayOfUniqueObjectsNotInOrderedSet:(id)arg1 ;
-(unsigned long long)pl_indexOfLastObjectPassingTest:(/*^block*/id)arg1 ;
-(unsigned long long)pl_indexOfFirstObjectPassingTest:(/*^block*/id)arg1 ;
-(id)cplDeepCopy;
-(id)plistArchiveWithCPLArchiver:(id)arg1 ;
-(id)initWithCPLArchiver:(id)arg1 ;
-(id)MSDSPAssetCollectionWithMasterFileHash:(id)arg1 ;
-(id)MSMutableDeepCopyWithZone:(NSZone*)arg1 ;
-(id)MSDeepCopyWithZone:(NSZone*)arg1 ;
-(id)MSMutableDeepCopy;
-(id)MSDeepCopy;
-(id)pr_objectPassingTest:(/*^block*/id)arg1 ;
-(id)arrayAfterFilteringOutEmptyStrings;
-(id)stringFromContentsOfArrayWithDelimiter:(id)arg1 ;
-(id)stringFromContentsOfArray;
-(id)aaui_map:(/*^block*/id)arg1 ;
-(void)_mapkit_orientableAnnotationViewsFixed:(id*)arg1 notFixed:(id*)arg2 ;
-(id)_mapkit_arrayByRemovingObject:(id)arg1 ;
-(unsigned long long)_mapkit_indexForObject:(id)arg1 usingSortFunction:(/*function pointer*/void*)arg2 context:(void*)arg3 ;
-(id)_mapkit_componentsJoinedInCommaDelimitedList;
-(id)_mapkit_joinedAddressComponents;
-(id)specifierForID:(id)arg1 ;
-(unsigned long long)indexOfSpecifierWithID:(id)arg1 ;
-(id)arrayByPerformingSpecifierUpdatesUsingBlock:(/*^block*/id)arg1 ;
-(void)mf_enumerateByStoreUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)mf_indexOfMailboxDictionaryWithName:(id)arg1 ;
-(BOOL)isQueryResultSetInvalidated;
-(NSString *)itemIdentifier;
-(NSString *)sectionIdentifier;
-(BOOL)MPIsEmpty;
-(id)subarraysOfSize:(unsigned long long)arg1 ;
-(id)arrayByMergingWithArray:(id)arg1 ;
-(id)_scrambledKeywordsAndAddToSet:(id)arg1 ;
-(id)_nextKeywordUsingCursors:(CFDictionaryRef)arg1 ;
-(unsigned long long)prevailingLocalSecretType;
-(id)objectBefore:(id)arg1 wrap:(BOOL)arg2 ;
-(id)ic_randomObject;
-(BOOL)ic_indexIsValid:(long long)arg1 ;
-(id)objectBefore:(id)arg1 ;
-(id)objectAfter:(id)arg1 ;
-(id)objectPassingTest:(/*^block*/id)arg1 ;
-(id)objectsOfClass:(Class)arg1 ;
-(id)arrayByGroupingIntoArraysWithMaxCount:(unsigned long long)arg1 ;
-(unsigned long long)ic_indexOfSortedObject:(id)arg1 insertionIndex:(out unsigned long long*)arg2 usingComparator:(/*^block*/id)arg3 ;
-(BOOL)containsObjectPassingTest:(/*^block*/id)arg1 ;
-(id)objectAfter:(id)arg1 wrap:(BOOL)arg2 ;
-(id)objectsPassingTest:(/*^block*/id)arg1 ;
-(NSDictionary *)bw_builtInMicRouteDictionary;
-(id)pickableRouteWithUID:(id)arg1 ;
-(id)resolutionResultDataForIntent:(id)arg1 intentSlotDescription:(id)arg2 error:(id*)arg3 ;
-(id)_escapedComponentsJoinedByString:(id)arg1 forLocale:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)_intents_indexingRepresentation;
-(void)_injectProxiesForImages:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_intents_cacheableObjects;
-(void)_intents_updateContainerWithCache:(id)arg1 ;
-(id)_intents_readableDescriptionForLanguage:(id)arg1 ;
-(id)_intents_localizedCopyForLanguage:(id)arg1 ;
-(INImage *)_keyImage;
-(long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2 ;
-(id)safari_reduceObjectsWithInitialValue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_safari_computeLengthsOfLongestSubsequencesCommonWithArray:(id)arg1 ;
-(id)_safari_generateDiffWithLongestCommonSubsequenceLengths:(id)arg1 array:(id)arg2 indexIntoSelf:(unsigned long long)arg3 indexIntoArray:(unsigned long long)arg4 ;
-(id)safari_URLAtIndex:(unsigned long long)arg1 ;
-(id)safari_groupUsingBlock:(/*^block*/id)arg1 ;
-(id)safari_reduceObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)safari_maximumUsingComparator:(/*^block*/id)arg1 ;
-(id)safari_numberAtIndex:(unsigned long long)arg1 ;
-(id)safari_diffWithArray:(id)arg1 ;
-(id)safari_stringAtIndex:(unsigned long long)arg1 ;
-(id)safari_setByApplyingBlock:(/*^block*/id)arg1 ;
-(id)safari_arrayAtIndex:(unsigned long long)arg1 ;
-(id)safari_dictionaryAtIndex:(unsigned long long)arg1 ;
-(id)safari_minimumUsingComparator:(/*^block*/id)arg1 ;
-(id)safari_mapObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)safari_filterObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)safari_firstObjectPassingTest:(/*^block*/id)arg1 ;
-(id)safari_mapAndFilterObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)safari_mapAndFilterObjectsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)safari_containsObjectPassingTest:(/*^block*/id)arg1 ;
-(id)CalMutableRecursiveCopy;
-(id)_CalArrayOfValueForKeys:(id)arg1 ;
-(id)_CalStringForArrayOfValues:(id)arg1 ;
-(id)_CalArrayOfValueForKeyPaths:(id)arg1 ;
-(id)allObjectsWithClass:(Class)arg1 ;
-(BOOL)CalContainsObjectIdenticalTo:(id)arg1 ;
-(id)CalStringValueForKeys:(id)arg1 ;
-(id)CalStringValueForKeyPaths:(id)arg1 ;
-(id)CalStringValueForKeys:(id)arg1 keyPaths:(id)arg2 ;
-(id)filteredArrayUsingTest:(/*^block*/id)arg1 ;
-(id)_FTFilteredArrayForAPS;
-(id)_IDsFromURIs;
-(id)_URIsFromIDs;
-(id)CKComponentsAndSubcomponentsJoinedByString:(id)arg1 ;
-(void)CKAssignToContainerWithID:(id)arg1 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(id)abs_arrayByMappingTransform:(/*^block*/id)arg1 ;
-(id)_navigation_firstObjectPassingTest:(/*^block*/id)arg1 ;
-(void)cl_json_serializeValue:(value_ostream*)arg1 ;
-(BOOL)mr_isEqualToOutputDevicesArray:(id)arg1 ;
-(void)differencesFromArray:(id)arg1 removedIndexes:(id*)arg2 insertedIndexes:(id*)arg3 ;
-(void)differencesFromArray:(id)arg1 usingComparator:(/*^block*/id)arg2 removedIndexes:(id*)arg3 insertedIndexes:(id*)arg4 ;
-(id)__IMStripPotentialTokenURIs;
-(id)__imDeepCopy;
-(BOOL)containsObject:(id)arg1 matchingComparison:(SEL)arg2 ;
-(void)__imForEach:(/*^block*/id)arg1 ;
-(BOOL)containsObjectIdenticalTo:(id)arg1 ;
-(id)__imSetFromArray;
-(BOOL)__imIsMutable;
-(BOOL)_hasSameMembers:(id)arg1 ;
-(id)__imArrayByApplyingBlock:(/*^block*/id)arg1 ;
-(id)_copyForEnumerating;
-(id)__imFirstObject;
-(id)__imArrayByFilteringWithBlock:(/*^block*/id)arg1 ;
-(id)__imArrayByApplyingBlock:(/*^block*/id)arg1 filter:(/*^block*/id)arg2 ;
-(long long)indexOfObject:(id)arg1 matchingComparison:(SEL)arg2 ;
-(unsigned long long)cr_binaryInsertionIndexOfObject:(id)arg1 usingComparator:(/*^block*/id)arg2 match:(BOOL*)arg3 ;
-(id)cr_map:(/*^block*/id)arg1 ;
-(id)cr_firstObjectPassingTest:(/*^block*/id)arg1 ;
-(id)cr_insertionSortedArrayUsingComparator:(/*^block*/id)arg1 ;
-(NSArray *)mf_tail;
-(id)mf_foldLeftWithStart:(id)arg1 reduce:(/*^block*/id)arg2 ;
-(id)mf_permutations;
-(id)mf_uniquifyWithComparator:(/*^block*/id)arg1 ;
-(id)mf_reduce:(/*^block*/id)arg1 ;
-(id)mf_prefix:(unsigned long long)arg1 ;
-(id)mf_groupBy:(/*^block*/id)arg1 ;
-(BOOL)mf_all:(/*^block*/id)arg1 ;
-(id)mf_mapSelector:(SEL)arg1 ;
-(id)mf_partition:(/*^block*/id)arg1 ;
-(unsigned long long)mf_countObjectsPassingTest:(/*^block*/id)arg1 ;
-(id)mf_subarraysOfSize:(unsigned long long)arg1 ;
-(BOOL)mf_any:(/*^block*/id)arg1 ;
-(id)mf_filter:(/*^block*/id)arg1 ;
-(id)mf_map:(/*^block*/id)arg1 ;
-(id)mf_flatten;
-(id)mf_firstObjectPassingTest:(/*^block*/id)arg1 ;
-(id)mf_flatMap:(/*^block*/id)arg1 ;
-(id)mf_dictionaryWithMessagesSortedByStore;
-(unsigned long long)mf_indexWhereObjectWouldBeInserted:(id)arg1 usingSortFunction:(/*function pointer*/void*)arg2 context:(void*)arg3 ;
-(id)mf_objectEquivalentTo:(id)arg1 usingSortFunction:(/*function pointer*/void*)arg2 context:(void*)arg3 ;
-(unsigned long long)mf_indexOfObject:(id)arg1 usingSortFunction:(/*function pointer*/void*)arg2 context:(void*)arg3 ;
-(unsigned long long)mf_indexOfObject:(id)arg1 usingComparator:(/*^block*/id)arg2 ;
-(unsigned long long)mf_indexWhereObjectWouldBeInserted:(id)arg1 usingComparator:(/*^block*/id)arg2 ;
-(id)mf_objectEquivalentTo:(id)arg1 usingComparator:(/*^block*/id)arg2 ;
-(id)mf_indicesOfStringsWithPrefix:(id)arg1 ;
-(id)mf_objectsPassingTest:(/*^block*/id)arg1 ;
-(void)mf_enumerateObjectsInBatchesOfSize:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(id)mf_diffWithArray:(id)arg1 ;
-(id)mf_uncommentedAddressList;
-(id)mf_displayEmailAddressList;
-(id)DACPLogSubarrayFromIndexToEndOfArray:(unsigned long long)arg1 ;
-(BOOL)DACPLogArrayBeginsWithArray:(id)arg1 ;
-(void)_cn_each:(/*^block*/id)arg1 until:(/*^block*/id)arg2 ;
-(id)_cn_joinWithBlock:(/*^block*/id)arg1 ;
-(id)_cn_tail;
-(void)_cn_zip:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_cn_each:(/*^block*/id)arg1 untilCancelled:(id)arg2 ;
-(void)_cn_each_reverse:(/*^block*/id)arg1 ;
-(id)_cn_balancedSlicesWithMaximumCount:(unsigned long long)arg1 ;
-(BOOL)_cn_none:(/*^block*/id)arg1 ;
-(id)_cn_distinctObjects;
-(id)_cn_reduce:(/*^block*/id)arg1 ;
-(id)_cn_skip:(unsigned long long)arg1 ;
-(id)_cn_skipLast:(unsigned long long)arg1 ;
-(id)_cn_sortedArrayUsingAuxiliarySortOrder:(id)arg1 transform:(/*^block*/id)arg2 ;
-(id)_cn_reversed;
-(id)_cn_safeSortedArrayUsingComparator:(/*^block*/id)arg1 ;
-(BOOL)_cn_isNonEmpty;
-(id)_cn_slicesWithMaximumCount:(unsigned long long)arg1 ;
-(id)_cn_reduce:(/*^block*/id)arg1 initialValue:(id)arg2 ;
-(id)_cn_flatMap:(/*^block*/id)arg1 ;
-(id)_cn_partition:(/*^block*/id)arg1 ;
-(id)_cn_arrayByRotatingRange:(NSRange)arg1 by:(long long)arg2 ;
-(id)_cn_indicesForObjects:(id)arg1 ;
-(id)_cn_groupBy:(/*^block*/id)arg1 ;
-(id)_cn_join:(id)arg1 ;
-(id)_cn_zip:(id)arg1 ;
-(BOOL)_cn_any:(/*^block*/id)arg1 ;
-(BOOL)_cn_isIdenticalToArray:(id)arg1 ;
-(id)_cn_filter:(/*^block*/id)arg1 ;
-(BOOL)_cn_all:(/*^block*/id)arg1 ;
-(unsigned long long)_cn_indexOfFirstObjectPassingTest:(/*^block*/id)arg1 ;
-(void)_cn_each:(/*^block*/id)arg1 ;
-(id)_cn_firstObjectPassingTest:(/*^block*/id)arg1 ;
-(id)_cn_take:(unsigned long long)arg1 ;
-(id)_cn_indexBy:(/*^block*/id)arg1 ;
-(id)_cn_flatten;
-(id)_cn_map:(/*^block*/id)arg1 ;
-(void)encodeWithCSCoder:(id)arg1 ;
-(BOOL)ICSContainsArray:(id)arg1 ;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(void)_ICSParametersAppendingToString:(id)arg1 ;
-(void)_ICSStringsForPropertyValuesWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(id)fm_arrayByFlattening;
-(void)fm_each:(/*^block*/id)arg1 ;
-(id)fm_firstObjectPassingTest:(/*^block*/id)arg1 ;
-(id)fm_arrayWithResultsOfBlock:(/*^block*/id)arg1 ;
-(id)fm_map:(/*^block*/id)arg1 ;
-(id)fm_filter:(/*^block*/id)arg1 ;
-(BOOL)fm_any:(/*^block*/id)arg1 ;
-(BOOL)fm_all:(/*^block*/id)arg1 ;
-(id)fm_dictionaryWithKeyGenerator:(/*^block*/id)arg1 ;
-(id)by_actionsByRemovingAction:(id)arg1 ;
-(id)fl_map:(/*^block*/id)arg1 ;
-(id)fl_multiMap:(/*^block*/id)arg1 ;
-(const char*)encodedBytesAndReturnLength:(unsigned long long*)arg1 error:(id*)arg2 ;
-(id)encodedDataAndReturnError:(id*)arg1 ;
-(id)_doc_componentsJoinedByOr;
-(id)_doc_componentsJoinedByAnd;
-(id)_doc_componentsWrappedInQuotes;
-(id)_doc_map:(/*^block*/id)arg1 ;
-(id)_doc_filter:(/*^block*/id)arg1 ;
-(/*^block*/id)fp_comparator;
-(long long)fp_compareItem:(id)arg1 toItem:(id)arg2 ;
-(id)fp_itemIdentifiers;
-(id)fp_itemIDs;
-(id)fp_map:(/*^block*/id)arg1 ;
-(id)fp_pickItemsFromArray:(id)arg1 correspondingToIndexesOfItemsInArray:(id)arg2 ;
-(id)ui_arrayByRemovingLastObjectEqualTo:(id)arg1 ;
-(id)_initWithObjectsFromArray:(id)arg1 range:(NSRange)arg2 ;
-(void)_makeObjectsPerformSelector:(SEL)arg1 object:(id)arg2 range:(NSRange)arg3 ;
-(CGSize)_legacy_drawComponentsJoinedByString:(id)arg1 atPoint:(CGPoint*)arg2 forWidth:(double)arg3 withFont:(id)arg4 lineBreakMode:(long long)arg5 ;
-(id)_filteredArrayOfObjectsPassingTest:(/*^block*/id)arg1 ;
-(id)_ui_onlyObject;
-(id)_ui_firstObject;
-(id)aa_mapNullable:(/*^block*/id)arg1 ;
-(id)aa_map:(/*^block*/id)arg1 ;
-(id)aa_arrayByRemovingObject:(id)arg1 ;
-(id)aa_filter:(/*^block*/id)arg1 ;
-(id)aa_firstObjectPassingTest:(/*^block*/id)arg1 ;
-(BOOL)aa_isSubsetOfArray:(id)arg1 ;
-(id)_web_lowercaseStrings;
-(id)_ss_arrayByRemovingObjectsPassingTest:(/*^block*/id)arg1 ;
-(BOOL)_ss_any:(/*^block*/id)arg1 ;
-(id)_ss_firstObjectPassingTest:(/*^block*/id)arg1 ;
-(id)_ss_map:(/*^block*/id)arg1 ;
-(id)_ss_filterUsingTest:(/*^block*/id)arg1 ;
-(id)_ss_index:(/*^block*/id)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLType;
-(id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const ValueInterpolator*)arg4 ;
-(id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2 ;
-(id)CA_addValue:(id)arg1 multipliedBy:(int)arg2 ;
-(void)cl_json_serializeValue:(value_ostream*)arg1 ;
-(id)ams_firstObjectPassingTest:(/*^block*/id)arg1 ;
-(id)ams_filterUsingTest:(/*^block*/id)arg1 ;
-(id)ams_dictionaryUsingTransform:(/*^block*/id)arg1 ;
-(id)ams_mapWithTransform:(/*^block*/id)arg1 ;
-(id)ams_nonEmptyComponentsJoinedByString:(id)arg1 ;
-(id)ak_map:(/*^block*/id)arg1 ;
-(id)ak_mapNullable:(/*^block*/id)arg1 ;
-(id)ak_filter:(/*^block*/id)arg1 ;
-(id)_geo_bestLocalizedString;
-(id)_geo_bestLocalizedStringValue;
-(id)_geo_bestLocalizedStringLocaleValue;
-(id)_geo_firstPhotoOfAtLeastSize:(CGSize)arg1 ;
-(id)_arrayByFilteringCandidatesForNonExtendedView;
-(id)un_nonEmptyCopy;
-(id)un_safeArrayContainingClass:(Class)arg1 ;
-(id)un_filter:(/*^block*/id)arg1 ;
-(id)un_map:(/*^block*/id)arg1 ;
-(void)un_each:(/*^block*/id)arg1 ;
-(id)un_safeArrayContainingClasses:(id)arg1 ;
-(id)ax_filteredArrayUsingBlock:(/*^block*/id)arg1 ;
-(id)ax_mappedArrayUsingBlock:(/*^block*/id)arg1 ;
-(id)ax_flatMappedArrayUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)ax_containsObjectUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)bs_containsObjectPassingTest:(/*^block*/id)arg1 ;
-(id)bs_firstObjectPassingTest:(/*^block*/id)arg1 ;
-(id)bs_firstObjectOfClass:(Class)arg1 ;
-(id)bs_differenceWithArray:(id)arg1 ;
-(void)bs_enumerateObjectsOfClass:(Class)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)bs_firstObjectOfClassNamed:(id)arg1 ;
-(id)bs_reverse;
-(id)bs_flattenedDifferenceWithArray:(id)arg1 ;
-(id)bs_objectsOfClass:(Class)arg1 ;
-(id)bs_mapNoNulls:(/*^block*/id)arg1 ;
-(id)bs_flatten;
-(id)bs_first:(unsigned long long)arg1 ;
-(id)bs_filter:(/*^block*/id)arg1 ;
-(void)bs_each:(/*^block*/id)arg1 ;
-(id)bs_map:(/*^block*/id)arg1 ;
-(id)cutFirstObject;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)filteredArrayUsingPredicate:(id)arg1 ;
-(id)sortedArrayUsingDescriptors:(id)arg1 ;
-(id)stringsByAppendingPathComponent:(id)arg1 ;
-(id)pathsMatchingExtensions:(id)arg1 ;
-(void)addObserver:(id)arg1 toObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 options:(unsigned long long)arg4 context:(void*)arg5 ;
-(void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(id)_valueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2 ;
-(id)_mutableArrayValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2 ;
-(id)_mutableOrderedSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2 ;
-(id)_mutableSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2 ;
-(void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3 ;
-(BOOL)_validateValue:(inout id*)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3 error:(out id*)arg4 ;
-(id)_sumForKeyPath:(id)arg1 ;
-(id)_unionOfArraysForKeyPath:(id)arg1 ;
-(id)_unionOfObjectsForKeyPath:(id)arg1 ;
-(id)_avgForKeyPath:(id)arg1 ;
-(id)_countForKeyPath:(id)arg1 ;
-(id)_maxForKeyPath:(id)arg1 ;
-(id)_minForKeyPath:(id)arg1 ;
-(id)_unionOfSetsForKeyPath:(id)arg1 ;
-(id)_distinctUnionOfArraysForKeyPath:(id)arg1 ;
-(id)_distinctUnionOfObjectsForKeyPath:(id)arg1 ;
-(id)_distinctUnionOfSetsForKeyPath:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(id)sortedArrayUsingFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 hint:(id)arg3 ;
-(id)_stringToWrite;
-(id)sortedArrayHint;
-(id)sortedArrayUsingSelector:(SEL)arg1 hint:(id)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(Class)classForCoder;
-(id)initWithContentsOfFile:(id)arg1 ;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 ;
-(id)sortedArrayFromRange:(NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(/*^block*/id)arg3 ;
-(id)objectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)initWithOrderedSet:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
-(BOOL)containsObject:(id)arg1 inRange:(NSRange)arg2 ;
-(BOOL)containsObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(unsigned long long)countForObject:(id)arg1 inRange:(NSRange)arg2 ;
-(id)indexesOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(id)indexesOfObject:(id)arg1 ;
-(id)indexesOfObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(id)indexesOfObjectIdenticalTo:(id)arg1 ;
-(id)objectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)objectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)reversedArray;
-(id)initWithArray:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithOrderedSet:(id)arg1 range:(NSRange)arg2 ;
-(id)arrayByExcludingToObjectsInArray:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(id)initWithSet:(id)arg1 copyItems:(BOOL)arg2 ;
-(id)_initByAdoptingBuffer:(id*)arg1 count:(unsigned long long)arg2 size:(unsigned long long)arg3 ;
-(id)objectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)initWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2 ;
-(id)initWithArray:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
-(id)firstObjectCommonWithArray:(id)arg1 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2 ;
-(id)initWithOrderedSet:(id)arg1 ;
-(BOOL)isNSArray__;
-(unsigned long long)indexOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(BOOL)containsObjectIdenticalTo:(id)arg1 ;
-(unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)arrayByApplyingSelector:(SEL)arg1 ;
-(id)objectPassingTest:(/*^block*/id)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS13*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)lastObject;
-(unsigned long long)count;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)allObjects;
-(unsigned long long)indexOfObjectPassingTest:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)firstObject;
-(id)arrayByAddingObjectsFromArray:(id)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)componentsJoinedByString:(id)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 ;
-(id)objectsPassingTest:(/*^block*/id)arg1 ;
-(id)indexesOfObjectsPassingTest:(/*^block*/id)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)sortedArrayUsingFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(id)subarrayWithRange:(NSRange)arg1 ;
-(void)makeObjectsPerformSelector:(SEL)arg1 ;
-(id)objectEnumerator;
-(id)initWithArray:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2 ;
-(id)arrayByAddingObject:(id)arg1 ;
-(id)initWithObjects:(id)arg1 ;
-(BOOL)isEqualToArray:(id)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 inSortedRange:(NSRange)arg2 options:(unsigned long long)arg3 usingComparator:(/*^block*/id)arg4 ;
-(id)reverseObjectEnumerator;
-(id)sortedArrayUsingComparator:(/*^block*/id)arg1 ;
-(id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(id)initWithArray:(id)arg1 copyItems:(BOOL)arg2 ;
-(id)sortedArrayUsingSelector:(SEL)arg1 ;
-(id)arrayByExcludingObjectsInArray:(id)arg1 ;
-(id)initWithSet:(id)arg1 ;
-(unsigned long long)countForObject:(id)arg1 ;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)initWithObject:(id)arg1 ;
-(id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
@end
