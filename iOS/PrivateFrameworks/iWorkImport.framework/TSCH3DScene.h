//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, TSCH3DCamera, TSCH3DSceneObject, TSCH3DScenePropertyAccessor, TSUNoCopyDictionary;
@protocol TSCH3DSceneDelegate, TSCH3DScenePropertyAccessorFactory;

__attribute__((visibility("hidden")))
@interface TSCH3DScene : NSObject
{
    TSCH3DScene *mOriginal;
    NSObject<TSCH3DScenePropertyAccessorFactory> *mAccessorFactory;
    TSCH3DScenePropertyAccessor *mAccessor;
    NSMutableDictionary *mEnumeratorMap;
    NSMutableDictionary *mPropertiesMap;
    TSUNoCopyDictionary *mDelegateMap;
    TSCH3DSceneObject *mMain;
    NSMutableArray *mObjects;
    TSCH3DCamera *mCamera;
}

+ (id)scene;
@property(retain, nonatomic) TSCH3DScene *original; // @synthesize original=mOriginal;
- (id)extractObjectsNotOfClasses:(id)arg1;
- (id)extractObjectsNotOfClass:(Class)arg1;
- (id)extractObjectsOfClasses:(id)arg1;
- (id)extractObjects:(_Bool)arg1 ofClasses:(id)arg2;
- (id)extractObjectsOfClass:(Class)arg1;
- (void)removeObjectsNotOfClass:(Class)arg1;
- (void)removeObjectsOfClass:(Class)arg1;
- (id)removeObjects:(_Bool)arg1 ofClasses:(id)arg2 into:(id)arg3;
- (id)removeObjects:(_Bool)arg1 ofClasses:(id)arg2 addTo:(id)arg3;
- (id)returnRemoved:(_Bool)arg1 removeObjectsPassingTest:(CDUnknownBlockType)arg2;
- (id)reallocateObjects;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)makeAllObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAllObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)makeDelegatesFromDelegator:(id)arg1;
@property(readonly, nonatomic) id <TSCH3DSceneDelegate> delegate;
- (void)resetDelegates;
- (void)setDelegate:(id)arg1 forSceneObject:(id)arg2;
- (id)delegateForSceneObject:(id)arg1;
- (void)setDelegate:(id)arg1 forObject:(id)arg2;
- (id)delegateForObject:(id)arg1;
- (void)setPart:(struct TSCH3DScenePart)arg1 forType:(id)arg2;
- (struct TSCH3DScenePart)partForType:(id)arg1;
- (void)resetProperties;
- (void)copyPropertiesFromScene:(id)arg1;
- (void)setEnumerator:(id)arg1 properties:(id)arg2 forType:(id)arg3;
- (tmat4x4_3074befe)transform;
@property(retain, nonatomic) TSCH3DScenePropertyAccessor *accessor;
- (void)addObject:(id)arg1;
- (unsigned long long)count;
- (void)overrideObjects;
- (void)resetObjects;
- (id)objects;
@property(readonly, nonatomic) NSArray *debugObjects;
@property(retain, nonatomic) TSCH3DCamera *camera;
@property(retain, nonatomic) TSCH3DSceneObject *main;
@property(retain, nonatomic) NSObject<TSCH3DScenePropertyAccessorFactory> *accessorFactory;
- (id)delegateMap;
- (void)setProperties:(id)arg1 forType:(id)arg2;
- (id)mutablePropertiesForType:(id)arg1;
- (id)propertiesForType:(id)arg1;
- (id)propertiesMap;
- (void)setEnumerator:(id)arg1 forType:(id)arg2;
- (id)enumeratorForType:(id)arg1;
- (void)resetEnumerator;
- (id)enumeratorMap;
- (id)clone;
- (id)description;
- (void)dealloc;
- (id)init;
- (struct ChartScenePropertyAccessor)chartProperties;
- (id)renderCache;

@end

