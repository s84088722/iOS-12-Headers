//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OADEmbeddedMediaFile.h>

@class TSPData;

__attribute__((visibility("hidden")))
@interface OADExportedEmbeddedMediaFile : OADEmbeddedMediaFile
{
    _Bool isAudioOnly;
    TSPData *_tspData;
}

@property(retain, nonatomic) TSPData *tspData; // @synthesize tspData=_tspData;
- (void)setIsAudioOnly:(_Bool)arg1;
- (_Bool)isAudioOnly;
- (void)dealloc;

@end

