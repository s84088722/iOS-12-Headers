//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, SKUIClientContext;

@interface SKUISettingsContext : NSObject
{
    NSMutableDictionary *_elementTypeClass;
    NSMutableArray *_descriptionReusePool;
    NSMutableArray *_viewReusePool;
    SKUIClientContext *_clientContext;
}

@property(nonatomic) __weak SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)_registerClass:(Class)arg1 forReuseIdentifier:(id)arg2;
- (void)_registerReuseClasses;
- (id)_dequeueReusableSettingDescriptionWithReuseIdentifier:(id)arg1 forViewElement:(id)arg2 parent:(id)arg3;
- (void)recycleSettingDescriptions:(id)arg1;
- (id)dequeueReusableSettingDescriptionForViewElement:(id)arg1 parent:(id)arg2;
- (id)initWithClientContext:(id)arg1;

@end

