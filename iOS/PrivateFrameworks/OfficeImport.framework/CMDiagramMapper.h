//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/CMDrawableMapper.h>

@class CMDrawingContext, ODDDiagram;

__attribute__((visibility("hidden")))
@interface CMDiagramMapper : CMDrawableMapper
{
    ODDDiagram *mDiagram;
    CMDrawingContext *mDrawingContext;
}

+ (int)diagramTypeFromString:(id)arg1;
- (void).cxx_destruct;
- (id)styleMatrix;
- (id)diagram;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 parent:(id)arg4;
- (id)copyDiagramMapperForId:(id)arg1;
- (id)identifierFromLayoutTypeId:(id)arg1;

@end

