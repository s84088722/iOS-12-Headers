//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXAssetActionManager.h>

@class NSMapTable, NSMutableDictionary, PHPerson, PXAssetActionPerformer, PXPhotoKitAssetsDataSourceManager, PXPhotosDataSource;

@interface PXPhotoKitAssetActionManager : PXAssetActionManager
{
    PXPhotoKitAssetsDataSourceManager *_dataSourceManager;
    PHPerson *_person;
    NSMutableDictionary *__performerClassByType;
    NSMapTable *__actionTypeByBarButtonItem;
    PXPhotosDataSource *__dataSourceSnapshot;
    PXAssetActionPerformer *__activePerformer;
}

@property(retain, nonatomic, setter=_setActivePerformer:) PXAssetActionPerformer *_activePerformer; // @synthesize _activePerformer=__activePerformer;
@property(readonly, nonatomic) PXPhotosDataSource *_dataSourceSnapshot; // @synthesize _dataSourceSnapshot=__dataSourceSnapshot;
@property(readonly, nonatomic) NSMapTable *_actionTypeByBarButtonItem; // @synthesize _actionTypeByBarButtonItem=__actionTypeByBarButtonItem;
@property(readonly, nonatomic) NSMutableDictionary *_performerClassByType; // @synthesize _performerClassByType=__performerClassByType;
@property(retain, nonatomic) PHPerson *person; // @synthesize person=_person;
@property(retain, nonatomic) PXPhotoKitAssetsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
- (void).cxx_destruct;
- (void)_handleActionPerformerComplete:(id)arg1 success:(_Bool)arg2 error:(id)arg3;
- (void)_handleActionType:(id)arg1;
- (void)_handleBarButtonItem:(id)arg1;
- (void)_handlePreviewAction:(id)arg1 previewViewController:(id)arg2 actionType:(id)arg3;
- (id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2;
- (id)alertActionForActionType:(id)arg1;
- (id)previewActionForActionType:(id)arg1;
- (id)barButtonItemForActionType:(id)arg1;
- (id)actionPerformerForActionType:(id)arg1;
- (_Bool)canPerformAssetVariationActions;
- (_Bool)canPerformActionType:(id)arg1;
- (void)registerPerformerClass:(Class)arg1 forType:(id)arg2;
- (id)initWithSelectionManager:(id)arg1;

@end

