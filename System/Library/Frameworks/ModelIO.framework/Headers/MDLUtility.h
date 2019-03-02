/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:27:13 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ModelIO/ModelIO-Structs.h>
@interface MDLUtility : NSObject
+(id)getResolvedPathForInput:(UsdShadeInput*)arg1 ;
+(id)resolveMaterialWithRootPath:(id)arg1 assetStringPath:(id)arg2 dirHash:(unsigned long long*)arg3 ;
+(void)resolveInput:(const UsdShadeInput*)arg1 withAssetPath:(id)arg2 rootUSD:(id)arg3 resourcePaths:(id)arg4 resolvedAttrs:(id)arg5 dirIdx:(unsigned long long*)arg6 ;
+(void)resolveInputs:(const UsdShadeInput*)arg1 withHandler:(/*^block*/id)arg2 ;
+(void)convertToUSDZ:(id)arg1 writeToURL:(id)arg2 ;
+(TfRefPtr<UsdStage>*)openStageWithURL:(id)arg1 ;
+(void)parseUSDMaterial:(UsdShadeMaterial*)arg1 rootUSD:(id)arg2 resolvedAttributes:(id)arg3 resourcePaths:(id)arg4 dirIdx:(unsigned long long*)arg5 ;
+(void)enumeratePrimMaterials:(const map<std::__1::basic_string<char>, UsdPrim, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, UsdPrim> > >*)arg1 usingBlock:(/*^block*/id)arg2 ;
+(void)writeFilesToArchive:(id)arg1 rootUSDPath:(id)arg2 resourcePaths:(id)arg3 entryNames:(id)arg4 ;
+(void)convertToUSDZWithURL:(id)arg1 ;
@end
