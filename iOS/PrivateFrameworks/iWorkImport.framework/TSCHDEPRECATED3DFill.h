//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSSPropertyValueArchiving-Protocol.h>

@class TSCH3DFillSetIdentifier, TSCH3DLightingModel, TSDFill;

__attribute__((visibility("hidden")))
@interface TSCHDEPRECATED3DFill : NSObject <TSSPropertyValueArchiving>
{
    TSDFill *mFill;
    TSCH3DLightingModel *mLightingModel;
    TSCH3DFillSetIdentifier *mIdentifier;
}

+ (id)instanceWithArchive:(const struct DEPRECATEDChart3DFillArchive *)arg1 unarchiver:(id)arg2;
- (id)convertToTSDFill;
- (void)saveToArchive:(struct DEPRECATEDChart3DFillArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct DEPRECATEDChart3DFillArchive *)arg1 unarchiver:(id)arg2;
- (void)dealloc;

@end

