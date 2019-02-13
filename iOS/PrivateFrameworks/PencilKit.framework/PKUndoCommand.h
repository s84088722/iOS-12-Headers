//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface PKUndoCommand : NSObject
{
    NSUUID *_drawingUUID;
    NSString *_actionName;
}

@property(readonly, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
@property(readonly, nonatomic) NSUUID *drawingUUID; // @synthesize drawingUUID=_drawingUUID;
- (void).cxx_destruct;
- (void)applyToDrawing:(id)arg1;
- (id)inverted;
- (void)registerWithUndoManager:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)initWithDrawingUUID:(id)arg1 actionName:(id)arg2;

@end

