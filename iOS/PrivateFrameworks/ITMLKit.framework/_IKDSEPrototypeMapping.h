//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IKDOMPrototype, IKViewElement, NSDictionary, NSIndexSet, NSMutableDictionary, NSMutableIndexSet;

@interface _IKDSEPrototypeMapping : NSObject
{
    NSMutableIndexSet *_usageIndexes;
    NSMutableDictionary *_variantMappingsBySelector;
    IKDOMPrototype *_prototype;
    IKViewElement *_viewElement;
}

@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(readonly, nonatomic) IKDOMPrototype *prototype; // @synthesize prototype=_prototype;
- (void).cxx_destruct;
- (id)variantMappingForDataItem:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *variantMappingsBySelector;
- (void)decrementUsageForIndex:(long long)arg1;
- (void)incrementUsageForIndex:(long long)arg1;
@property(readonly, copy, nonatomic) NSIndexSet *usageIndexes;
- (id)initWithPrototype:(id)arg1;

@end

