//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class MPArtworkCatalog, MPArtworkRepresentation, NSDictionary;
@protocol MPArtworkDataSourceVisualIdenticality;

@protocol MPArtworkDataSource <NSObject>
- (id <MPArtworkDataSourceVisualIdenticality>)visualIdenticalityIdentifierForCatalog:(MPArtworkCatalog *)arg1;
- (void)cancelLoadingRepresentationForArtworkCatalog:(MPArtworkCatalog *)arg1;
- (void)loadRepresentationForArtworkCatalog:(MPArtworkCatalog *)arg1 completionHandler:(void (^)(MPArtworkRepresentation *, NSError *))arg2;
- (MPArtworkRepresentation *)existingRepresentationForArtworkCatalog:(MPArtworkCatalog *)arg1;
- (_Bool)isRepresentation:(MPArtworkRepresentation *)arg1 bestRepresentationForArtworkCatalog:(MPArtworkCatalog *)arg2;
- (_Bool)areRepresentationsAvailableForCatalog:(MPArtworkCatalog *)arg1;

@optional
- (void)getExportableArtworkPropertiesForCatalog:(MPArtworkCatalog *)arg1 completionHandler:(void (^)(MPExportableArtworkProperties *, NSError *))arg2;
- (_Bool)hasExistingRepresentationOnDiskForArtworkCatalog:(MPArtworkCatalog *)arg1;
- (void)loadArtworkEffectResultForEffectType:(long long)arg1 catalog:(MPArtworkCatalog *)arg2 options:(NSDictionary *)arg3 systemEffectHandler:(void (^)(void (^)(id, NSError *)))arg4 completionHandler:(void (^)(id, NSError *))arg5;
- (id)existingArtworkEffectResultForEffectType:(long long)arg1 catalog:(MPArtworkCatalog *)arg2 options:(NSDictionary *)arg3;
@end

