//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXCMMContext.h>

@class PXCMMFileBackedActionManager;

@interface PXCMMFileBackedContext : PXCMMContext
{
    PXCMMFileBackedActionManager *_fileBackedActionManager;
}

+ (id)fileBackedContextWithDirectoryURL:(id)arg1 activityType:(unsigned long long)arg2 title:(id)arg3;
- (void).cxx_destruct;
- (id)actionManager;
- (id)initWithAssetsDataSourceManager:(id)arg1 mediaProvider:(id)arg2 activityType:(unsigned long long)arg3;

@end

