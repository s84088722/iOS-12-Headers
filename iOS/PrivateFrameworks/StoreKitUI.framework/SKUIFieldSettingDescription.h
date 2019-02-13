//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUISettingDescription.h>

#import <StoreKitUI/SKUIControllableSettingDescription-Protocol.h>

@class NSMutableDictionary, NSString, SKUISettingsGroupController;

@interface SKUIFieldSettingDescription : SKUISettingDescription <SKUIControllableSettingDescription>
{
    SKUISettingsGroupController *_controller;
    long long _fieldType;
    NSMutableDictionary *_fieldValues;
}

+ (Class)_viewClassForSettingDescription:(id)arg1;
+ (id)_inputViewElementFromElement:(id)arg1;
+ (long long)_fieldTypeFromElement:(id)arg1;
@property(nonatomic) __weak SKUISettingsGroupController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)_dispatchEventOfType:(unsigned long long)arg1 extraInfo:(id)arg2;
- (void)handleSelectionOnCompletion:(CDUnknownBlockType)arg1;
- (_Bool)allowsSelection;
- (void)setFieldValue:(id)arg1 forKey:(id)arg2;
- (id)fieldValueForKey:(id)arg1;
@property(readonly, nonatomic) long long fieldType;
- (id)initWithViewElement:(id)arg1 parent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

