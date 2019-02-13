//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSPObject.h>

#import <TSReading/TSKModel-Protocol.h>

@class NSMutableDictionary, NSString, TSSStylesheet;

@interface TSSTheme : TSPObject <TSKModel>
{
    NSString *mThemeIdentifier;
    TSSStylesheet *mStylesheet;
    NSMutableDictionary *mPresetsByKind;
}

+ (id)presetBootstrapOrder;
+ (void)registerPresetSourceClass:(Class)arg1;
+ (void)registerPresetSourceClasses;
+ (id)presetSources;
+ (id)themeWithContext:(id)arg1 alternate:(int)arg2;
@property(readonly, nonatomic) TSSStylesheet *stylesheet; // @synthesize stylesheet=mStylesheet;
- (void)checkThemeStylesheetConsistency;
- (void)bootstrapThemeAlternate:(int)arg1;
- (id)p_identifierForBootstrapTheme:(int)arg1;
- (id)modelPathComponentForChild:(id)arg1;
- (id)childEnumerator;
- (_Bool)containsCGColor:(struct CGColor *)arg1;
- (id)colors;
- (unsigned long long)indexOfPreset:(id)arg1;
- (id)presetOfKind:(id)arg1 index:(unsigned long long)arg2;
- (void)movePresetOfKind:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)removePreset:(id)arg1;
- (void)insertPreset:(id)arg1 ofKind:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)addPreset:(id)arg1 ofKind:(id)arg2;
- (void)setPresets:(id)arg1 ofKind:(id)arg2;
- (void)disablePresetValidation;
- (void)enablePresetValidation;
- (_Bool)hasPresetsOfKind:(id)arg1;
- (id)presetsOfKind:(id)arg1;
@property(nonatomic) _Bool isLocked;
@property(retain, nonatomic) NSString *themeIdentifier;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

