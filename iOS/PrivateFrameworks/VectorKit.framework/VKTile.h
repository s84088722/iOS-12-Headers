//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VKTilePool;

__attribute__((visibility("hidden")))
@interface VKTile : NSObject
{
    struct VKTileKey _key;
    Matrix_08d701e4 _matrix;
    Matrix_08d701e4 _inverseMatrix;
    VKTilePool *_pool;
    double _birthdate;
    struct VKCameraState _cameraState;
    Box_3d7e3c2c bounds;
    Matrix_99e705ad _shaderMatrix;
    shared_ptr_696716c4 _viewConstantData;
    _Bool _preliminary;
}

@property(nonatomic, getter=isPreliminary) _Bool preliminary; // @synthesize preliminary=_preliminary;
@property(readonly, nonatomic) double birthdate; // @synthesize birthdate=_birthdate;
@property(readonly, nonatomic) struct VKTileKey key; // @synthesize key=_key;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) const shared_ptr_696716c4 *viewConstantData;
- (void)updateViewDependentStateWithContext:(struct LayoutContext *)arg1;
- (void)updateViewDependentStateIfNecessaryWithContext:(struct LayoutContext *)arg1;
- (unsigned long long)geometryCount;
@property(readonly, nonatomic) double tileWidth;
- (void)dealloc;
- (id)initWithKey:(const struct VKTileKey *)arg1;
- (void)setPool:(id)arg1;
- (void)setKey:(const struct VKTileKey *)arg1;
- (id)description;
- (const struct VKTileKey *)keyPointer;
@property(readonly, nonatomic) const Matrix_99e705ad *shaderMatrix;
@property(readonly, nonatomic) const Matrix_08d701e4 *inverseMatrix;
@property(readonly, nonatomic) const Matrix_08d701e4 *matrix;

@end

