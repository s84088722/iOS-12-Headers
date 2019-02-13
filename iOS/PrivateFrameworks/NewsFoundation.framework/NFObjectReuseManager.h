//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface NFObjectReuseManager : NSObject
{
    CDUnknownBlockType _reuseFactory;
    NSMutableDictionary *_inuseObjects;
    NSMutableDictionary *_reuseableObjects;
}

@property(copy, nonatomic) NSMutableDictionary *reuseableObjects; // @synthesize reuseableObjects=_reuseableObjects;
@property(copy, nonatomic) NSMutableDictionary *inuseObjects; // @synthesize inuseObjects=_inuseObjects;
@property(copy, nonatomic) CDUnknownBlockType reuseFactory; // @synthesize reuseFactory=_reuseFactory;
- (void).cxx_destruct;
- (id)inUseObjectForIdentifier:(id)arg1;
- (_Bool)isInUse:(id)arg1;
- (void)purgeObjectForIdentifier:(id)arg1;
- (void)prepareObjectForReuse:(id)arg1;
- (id)dequeueObjectForIdentifier:(id)arg1;
- (id)initWithObjectConstructor:(CDUnknownBlockType)arg1;

@end

