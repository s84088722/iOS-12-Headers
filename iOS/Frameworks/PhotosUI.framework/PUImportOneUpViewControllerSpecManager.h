//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXFeatureSpecManager.h>

@class PUImportOneUpViewControllerSpec;

__attribute__((visibility("hidden")))
@interface PUImportOneUpViewControllerSpecManager : PXFeatureSpecManager
{
    unsigned long long _style;
}

@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
- (id)createSpec;
- (Class)specClass;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 style:(unsigned long long)arg3;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;

// Remaining properties
@property(readonly, nonatomic) PUImportOneUpViewControllerSpec *spec; // @dynamic spec;

@end

