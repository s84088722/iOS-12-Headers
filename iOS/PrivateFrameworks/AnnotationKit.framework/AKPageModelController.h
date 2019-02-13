//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AKCropAnnotation, AKInkAnnotation, AKStatistics, NSArray, NSMutableOrderedSet, NSMutableSet, NSSet;

@interface AKPageModelController : NSObject
{
    NSMutableOrderedSet *_mutableAnnotations;
    NSMutableSet *_mutableSelectedAnnotations;
    id _representedObject;
    AKCropAnnotation *_cropAnnotation;
    AKInkAnnotation *_inkCanvasAnnotation;
    AKStatistics *_statisticsLogger;
    struct CGRect _appliedCropRect;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
@property(nonatomic) __weak AKStatistics *statisticsLogger; // @synthesize statisticsLogger=_statisticsLogger;
@property(retain) AKInkAnnotation *inkCanvasAnnotation; // @synthesize inkCanvasAnnotation=_inkCanvasAnnotation;
@property(retain) AKCropAnnotation *cropAnnotation; // @synthesize cropAnnotation=_cropAnnotation;
@property struct CGRect appliedCropRect; // @synthesize appliedCropRect=_appliedCropRect;
@property __weak id representedObject; // @synthesize representedObject=_representedObject;
- (void).cxx_destruct;
- (void)_postSelectedAnnotationsChangedNotification;
- (void)_logAnnotationAdded:(id)arg1;
- (void)_coalescedEnsureInkAnnotationIsInFront:(id)arg1;
- (void)_ensureInkAnnotationIsInFrontWhenEditsAreDone;
- (void)restoreSelectionStateForUndo:(id)arg1;
- (id)selectionStateForUndo;
- (id)initWithArchivableRepresentation:(id)arg1;
- (id)archivableRepresentation;
- (_Bool)hasMaskBorderAnnotation;
- (void)setInkCanvasAnnotationOneTime:(id)arg1;
- (void)removeCropToolAnnotation;
- (void)addCropToolAnnotation;
- (void)sendSelectedAnnotationsToBack;
- (void)sendSelectedAnnotationsBackward;
- (void)bringSelectedAnnotationsToFront;
- (void)bringSelectedAnnotationsForward;
- (void)selectAllAnnotations;
- (void)selectAnnotationsAtIndexes:(id)arg1 byExtendingSelection:(_Bool)arg2;
- (void)selectAnnotation:(id)arg1 byExtendingSelection:(_Bool)arg2;
- (_Bool)containsAnnotation:(id)arg1;
- (void)setSelectedAnnotations:(id)arg1;
- (void)intersectSelectedAnnotations:(id)arg1;
- (void)removeSelectedAnnotations:(id)arg1;
- (void)removeSelectedAnnotationsObject:(id)arg1;
- (void)addSelectedAnnotations:(id)arg1;
- (void)addSelectedAnnotationsObject:(id)arg1;
@property(readonly) NSSet *selectedAnnotations;
- (void)replaceAnnotationsAtIndexes:(id)arg1 withAnnotations:(id)arg2;
- (void)replaceObjectInAnnotationsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeAnnotationsAtIndexes:(id)arg1;
- (void)removeObjectFromAnnotationsAtIndex:(unsigned long long)arg1;
- (void)removeAllAnnotations;
- (void)_enableEditObservationForAnnotationIfNew:(id)arg1;
- (void)insertAnnotations:(id)arg1 atIndexes:(id)arg2;
- (void)insertObject:(id)arg1 inAnnotationsAtIndex:(unsigned long long)arg2;
@property(readonly) NSArray *annotations;
- (id)init;

@end

