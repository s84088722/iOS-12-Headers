//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSWPShapeRep.h>

__attribute__((visibility("hidden")))
@interface TSWPFloatingCommentRep : TSWPShapeRep
{
}

- (_Bool)p_shouldDraw;
- (void)recursivelyDrawChildrenInContext:(struct CGContext *)arg1 keepingChildrenPassingTest:(CDUnknownBlockType)arg2;
- (void)drawInContext:(struct CGContext *)arg1;
- (_Bool)forcesPlacementOnTop;
- (_Bool)modelIsReadOnly;
- (id)documentRoot;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

@end

