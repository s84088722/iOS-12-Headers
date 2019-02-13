//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDRep.h>

#import <iWorkImport/TSDMutableContainerRep-Protocol.h>

@class NSArray, NSMutableArray, NSObject, NSString;
@protocol TSDContainerInfo, TSDMutableContainerInfo;

__attribute__((visibility("hidden")))
@interface TSDContainerRep : TSDRep <TSDMutableContainerRep>
{
    NSMutableArray *mChildReps;
}

- (void).cxx_destruct;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelector:(SEL)arg1;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
@property(readonly, nonatomic) NSArray *visibleChildLayouts;
- (void)updateChildrenFromLayout;
- (void)replaceChildRep:(id)arg1 with:(id)arg2;
- (void)removeChildRep:(id)arg1;
- (void)insertChildRep:(id)arg1 above:(id)arg2;
- (void)insertChildRep:(id)arg1 below:(id)arg2;
- (void)insertChildRep:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addChildRep:(id)arg1;
- (void)setChildReps:(id)arg1;
@property(readonly, nonatomic) NSObject<TSDMutableContainerInfo> *mutableContainerInfo;
@property(readonly, nonatomic) NSArray *childReps;
@property(readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
- (id)initWithLayout:(id)arg1 canvasView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

